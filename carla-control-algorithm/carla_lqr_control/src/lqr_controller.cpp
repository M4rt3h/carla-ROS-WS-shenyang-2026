#include "carla_lqr_control/lqr_controller.h"
#include <algorithm>
#include <iomanip>
#include <utility>
#include <vector>
#include "carla_lqr_control/common.h"
#include "Eigen/LU"
#include "math.h"

namespace control
{
    LqrController::LqrController()
    {
        this->LoadControlConf();
        this->Init();
    }


    void LqrController::LoadControlConf()
    {
        ts_ = 0.05;    // 每隔0.05s进行一次控制

        cf_ = 155494.663;                              // 前轮侧偏刚度,左右轮之和
        cr_ = 155494.663;                              // 后轮侧偏刚度, 左右轮之和
        wheelbase_ = 2.852;                            //轴距(m)                 
        steer_ratio_ = 16;                             // 方向盘的转角到轮胎转动角度之间的比值系数
        steer_single_direction_max_degree_ = 470.0;    // 最大方向转角, 指的方向盘能打的角度, 1圈半为540°
        //实际转角通过方向盘转角-轮胎转角比进行转换, 470/16=29.4°

        const double mass_fl = 1845.0/4;                     // 左前悬的质量
        const double mass_fr = 1845.0/4;                     // 右前悬的质量
        const double mass_rl = 1845.0/4;                     // 左后悬的质量
        const double mass_rr = 1845.0/4;                     // 右后悬的质量
        const double mass_front = mass_fl + mass_fr;    // 前悬质量
        const double mass_rear = mass_rl + mass_rr;     // 后悬质量
        mass_ = mass_front + mass_rear;

        lf_ = wheelbase_ * (1.0 - mass_front / mass_);    // 汽车前轮到中心点的距离
        lr_ = wheelbase_ * (1.0 - mass_rear / mass_);     // 汽车后轮到中心点的距离

        // moment of inertia
        iz_ = lf_ * lf_ * mass_front + lr_ * lr_ * mass_rear;    // 汽车的转动惯量

        lqr_eps_ = 0.01;              // LQR 迭代求解精度
        lqr_max_iteration_ = 1500;    // LQR的迭代次数
    }

    void LqrController::Init()
    {
        // Matrix init operations. 初始化矩阵
        const int matrix_size = basic_state_size_;
        matrix_a_ = Matrix::Zero(basic_state_size_, basic_state_size_);  //[4, 4]
        matrix_ad_ = Matrix::Zero(basic_state_size_, basic_state_size_); //[4, 4]
        /*
        A matrix (Gear Drive)
        [0.0,                             1.0,                           0.0,                                            0.0;
        0.0,          (-(c_f + c_r) / m) / v,               (c_f + c_r) / m,                (l_r * c_r - l_f * c_f) / m / v;
        0.0,                             0.0,                           0.0,                                            1.0;
        0.0, ((lr * cr - lf * cf) / i_z) / v, (l_f * c_f - l_r * c_r) / i_z, (-1.0 * (l_f^2 * c_f + l_r^2 * c_r) / i_z) / v;]
        */
        // 初始化A矩阵的常数项
        matrix_a_(0, 1) = 1.0;
        matrix_a_(1, 2) = (cf_ + cr_) / mass_;
        matrix_a_(2, 3) = 1.0;
        matrix_a_(3, 2) = (lf_ * cf_ - lr_ * cr_) / iz_;
        // 初始化A矩阵的非常数项, 含有v,但系数不包含v
        matrix_a_coeff_ = Matrix::Zero(matrix_size, matrix_size);
        matrix_a_coeff_(1, 1) = -(cf_ + cr_) / mass_;
        matrix_a_coeff_(1, 3) = (lr_ * cr_ - lf_ * cf_) / mass_;
        matrix_a_coeff_(3, 1) = (lr_ * cr_ - lf_ * cf_) / iz_;
        matrix_a_coeff_(3, 3) = -1.0 * (lf_ * lf_ * cf_ + lr_ * lr_ * cr_) / iz_;

        /*
        b = [0.0, c_f / m, 0.0, l_f * c_f / i_z]^T
        */
        // 初始化B矩阵
        matrix_b_ = Matrix::Zero(basic_state_size_, 1); // [4, 1]
        matrix_bd_ = Matrix::Zero(basic_state_size_, 1); //[4, 1]
        matrix_b_(1, 0) = cf_ / mass_;
        matrix_b_(3, 0) = lf_ * cf_ / iz_;
        matrix_bd_ = matrix_b_ * ts_;

        // 状态向量
        matrix_state_ = Matrix::Zero(matrix_size, 1); // [4, 1]
        // 反馈矩阵
        matrix_k_ = Matrix::Zero(1, matrix_size); //[1, 4]
        // lqr cost function中 输入值u的权重, u为标量, 车辆的前轮转角
        matrix_r_ = Matrix::Identity(1, 1);
        matrix_r_(0, 0) = 10;

        // lqr cost function中 状态向量x的权重
        matrix_q_ = Matrix::Zero(matrix_size, matrix_size);
        // int q_param_size = 4; //着重考虑横向误差
        matrix_q_(0, 0) = 2;    // TODO: lateral_error
        matrix_q_(1, 1) = 1;    // TODO: lateral_error_rate
        matrix_q_(2, 2) = 0.1;    // TODO: heading_error
        matrix_q_(3, 3) = 0.1;    // TODO: heading__error_rate

        matrix_q_updated_ = matrix_q_;

    }

    double LqrController::NormalizeAngle(const double angle) 
    {
        double a = std::fmod(angle + M_PI, 2.0 * M_PI); // 先把角度平移到[0, 2pi)
        if (a < 0.0) {
            a += (2.0 * M_PI); // 保证非负
        }
        return a - M_PI; // 再平移回[-pi, pi)
    }

    double LqrController::ComputeControlCommand(const VehicleState &localization, const TrajectoryPoint 
    &current_closest_point)
    {
            /*
        A matrix (Gear Drive)
        [0.0,                               1.0,                            0.0,                                               0.0;
        0.0,            (-(c_f + c_r) / m) / v,                (c_f + c_r) / m,                   (l_r * c_r - l_f * c_f) / m / v;
        0.0,                               0.0,                            0.0,                                               1.0;
        0.0,   ((lr * cr - lf * cf) / i_z) / v,   (l_f * c_f - l_r * c_r) / i_z,   (-1.0 * (l_f^2 * c_f + l_r^2 * c_r) / i_z) / v;]
        */
        // TODO 01 配置状态矩阵A
      
        /*
        b = [0.0, c_f / m, 0.0, l_f * c_f / i_z]^T
        */
        // Update state = [Lateral Error, Lateral Error Rate, Heading Error, Heading Error Rate]

        // TODO 03 计算横向误差并且更新状态向量x
        UpdateState(localization, current_closest_point);

        // TODO 04 更新状态矩阵A并将状态矩阵A离散化
        UpdateMatrix(localization);

        // Solve Lqr Problem
        SolveLQRProblem(matrix_ad_, matrix_bd_, matrix_q_, matrix_r_, lqr_eps_, lqr_max_iteration_, &matrix_k_);

        // TODO 06 计算feedback, 根据反馈对计算状态变量（误差状态）的时候的符号的理解：K里面的值实际运算中全部为正值，steer = -K *
        // state，按照代码中采用的横向误差的计算方式，横向误差为正值的时候（state中的第一项为正），参考点位于车辆左侧，车辆应该向左转以减小误差，而根据试验，仿真器中，给正值的时候，车辆向右转，给负值的时候，车辆向左转。
        //   feedback = - K * state
        //   Convert vehicle steer angle from rad to degree and then to steer degrees
        //   then to 100% ratio
        // std::cout << "matrix_k_: " << matrix_k_ << std::endl;
        double steer_angle_feedback = -(matrix_k_ * matrix_state_)(0, 0); //[1, 1]

        // TODO 07 计算前馈控制，计算横向转角的反馈量
    
        double steer_angle_feedforward = ComputeFeedForward(localization, current_closest_point.kappa);
        double steer_angle = steer_angle_feedback - steer_angle_feedforward_coff * steer_angle_feedforward;
        // 限制前轮最大转角，这里定义前轮最大转角位于 [-25度～25度]
        if (steer_angle > MAX_STEER_RAD) 
        {
            steer_angle = MAX_STEER_RAD;
        }
        else if (steer_angle < -MAX_STEER_RAD) 
        {
            steer_angle = -MAX_STEER_RAD;
        }
        double steer_cmd = steer_angle / MAX_STEER_RAD;
        // Set the steer commands

        return steer_cmd;
       

    }

     // 计算横向误差并且更新状态向量x
    void LqrController::UpdateState(const VehicleState &vehicle_state, const TrajectoryPoint 
    &current_closest_point) 
    {
        // LateralControlError lat_con_err;  // 将其更改为智能指针
        std::shared_ptr<LateralControlError> lat_con_err = std::make_shared<LateralControlError>();
        // 计算横向误差
        ComputeLateralErrors(vehicle_state, current_closest_point, lat_con_err);

        // State matrix update;
        matrix_state_(0, 0) = lat_con_err->lateral_error;
        matrix_state_(1, 0) = lat_con_err->lateral_error_rate;
        matrix_state_(2, 0) = lat_con_err->heading_error;
        matrix_state_(3, 0) = lat_con_err->heading_error_rate;
    }

    // TODO 03 计算误差
    void LqrController::ComputeLateralErrors(const VehicleState &vehicle_state, const TrajectoryPoint 
    &current_closest_point, LateralControlErrorPtr &lat_con_err) 
    {
        double x = vehicle_state.x;
        double y = vehicle_state.y;
        double theta = vehicle_state.heading;
        double linear_v = vehicle_state.velocity;
        double angular_v = vehicle_state.angular_velocity;
        // double linear_a = vehicle_state.acceleration;

        // 车辆坐标系：X轴沿着车辆纵向，向前为正，Y沿着车辆横向，向左为正（从车头往前看的视角），在车辆坐标系下，距离车辆最近的路径点位于车辆左侧，车辆应该左转以跟踪参考路径
        // 计算横向误差的时候，需要将路径上距离车辆最近的点从世界坐标系变换到车辆坐标系下，路径点在车辆坐标系下的横坐标就是横向位置误差，根据路径点在车辆坐标系下的横坐标的正负决定前轮转角的方向
        // double closest_point_x_in_vehicle_coordinate =   (current_closest_point.x - x) * cos(theta) + (current_closest_point.y - y) * sin(theta);

        double dx = current_closest_point.x - x;
        double dy = current_closest_point.y - y;
        double target_heading = current_closest_point.heading;
        
        double e_y = -dx * sin(target_heading) + dy * cos(target_heading);

        double e_theta = NormalizeAngle(current_closest_point.heading - theta);    // 路径上距离车辆最近的点的参考航向角，大于车辆的当前航向角的话，车辆应左转以跟踪航向
        // 限制前轮转角的取值区间

        double e_y_dot = linear_v * std::tan(e_theta);
        double e_theta_dot = angular_v - current_closest_point.kappa * current_closest_point.v;

        lat_con_err->lateral_error = e_y;
        lat_con_err->lateral_error_rate = e_y_dot;
        lat_con_err->heading_error = e_theta;
        lat_con_err->heading_error_rate = e_theta_dot;
    }
    // 更新状态矩阵A并将状态矩阵A离散化, Ad = e^st = I + A*ts
    void LqrController::UpdateMatrix(const VehicleState &vehicle_state) 
    {
        double v;
        v = std::max(vehicle_state.velocity, minimum_speed_protection_);
        matrix_a_(1, 1) = matrix_a_coeff_(1, 1) / v;    // 避免速度为0的时候，0做分母导致计算失败
        matrix_a_(1, 3) = matrix_a_coeff_(1, 3) / v;
        matrix_a_(3, 1) = matrix_a_coeff_(3, 1) / v;
        matrix_a_(3, 3) = matrix_a_coeff_(3, 3) / v;

        Matrix matrix_a_i = Eigen::MatrixXd::Identity(matrix_a_.rows(), matrix_a_.cols());
        matrix_ad_ = (matrix_a_i - ts_ * 0.5 * matrix_a_).inverse() *
                     (matrix_a_i + ts_ * 0.5 * matrix_a_);
    }

    // ref_curvature 1/R
    double LqrController::ComputeFeedForward(const VehicleState &localization, const double ref_curvature)
    {
        const double kv = lr_ * mass_ / 2 / cf_ / wheelbase_ - lf_ * mass_ / 2 / cr_ / wheelbase_;
        const double v = localization.velocity;
        double steer_angle_feedforwardterm = 
                    (wheelbase_ * ref_curvature + kv * v * v * ref_curvature -
                    matrix_k_(0, 2) * 
                    (lr_ * ref_curvature - 
                     lf_ * mass_ * v * v * ref_curvature / 2 / cr_ / wheelbase_));

        return steer_angle_feedforwardterm;
    }

    // TODO 05:求解LQR方程
    void LqrController::SolveLQRProblem(const Matrix &A, const Matrix &B, const Matrix &Q, const Matrix &R, const double tolerance, const uint max_num_iteration, Matrix *ptr_K)
    {
        // 防止矩阵的维数出错导致后续的运算失败
        if (A.rows() != A.cols() || B.rows() != A.rows() || Q.rows() != Q.cols() || Q.rows() != A.rows() || R.rows() != R.cols() || R.rows() != B.cols())
        {
            std::cout << "LQR solver: one or more matrices have incompatible dimensions." << std::endl;
            return;
        }
        Eigen::MatrixXd P = Q;
        Eigen::MatrixXd AT = A.transpose(); //状态矩阵A的转置
        Eigen::MatrixXd BT = B.transpose(); //状态矩阵A的转置

        double diff = std::numeric_limits<double>::max();

        Eigen::MatrixXd P_next;
        for (size_t i = 0; i < max_num_iteration; i++) {
            P_next = AT * P * A - (AT * P * B) * (R + BT * P * B).inverse() * (BT * P * A) + Q;
            diff = fabs((P_next - P).maxCoeff());
            P = P_next;
            if (diff < tolerance) {
                break;
            }
        }
        *ptr_K = (R + BT * P * B).inverse() * (BT * P * A);
    }
}