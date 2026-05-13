#pragma once
#include <math.h>

#include <fstream>
#include <iomanip>
#include <memory>
#include <string>

#include "Eigen/Core"
#include "common.h"

namespace control {

using Matrix = Eigen::MatrixXd;

class LqrController {
   public:
    LqrController();
    ~LqrController() = default;

    void LoadControlConf(); //载入配置参数
    void Init(); //初始化

   double ComputeControlCommand(const VehicleState &localization, const TrajectoryPoint 
    &current_closest_point);//计算控制命令

   double NormalizeAngle(const double angle);

   protected:
    void UpdateState(const VehicleState &vehicle_state, const TrajectoryPoint 
    &current_closest_point) ; //更新状态

    void UpdateMatrix(const VehicleState &vehicle_state); //更新矩阵

    double ComputeFeedForward(const VehicleState &localization, const double ref_curvature); //计算前馈

    void ComputeLateralErrors(const VehicleState &vehicle_state, const TrajectoryPoint 
    &current_closest_point, LateralControlErrorPtr &lat_con_err) ; //计算横向误差


    void SolveLQRProblem(const Matrix &A, const Matrix &B, const Matrix &Q, const Matrix &R, const double tolerance, const uint max_num_iteration, Matrix *ptr_K); //LQR求解器


    // the following parameters are vehicle physics related.
    // control time interval
    double ts_ = 0.0;  // 控制周期（采样间隔）
    // corner stiffness; front
    double cf_, cr_ = 0.0; // 前/后轮侧偏刚度（轮胎模型参数）

    // distance between front and rear wheel center
    double wheelbase_ = 0.0;  // 轴距
    // mass of the vehicle
    double mass_ = 0.0;   // 车辆质量
    // distance from front wheel center to COM
    double lf_, lr_ = 0.0; // 前/后轮到质心距离
    // distance from rear wheel center to COM
  
    // rotational inertia
    double iz_ = 0.0; // 转动惯量
    // the ratio between the turn of the steering wheel and the turn of the wheels
    double steer_ratio_ = 0.0; // 方向盘-车轮转角比
    // the maximum turn of steer
    double steer_single_direction_max_degree_ = 0.0;  // 最大转角

    // number of states without previews, includes
    // lateral error, lateral error rate, heading error, heading error rate
    const int basic_state_size_ = 4; // 状态数（横向误差, 横向误差变化率, 航向误差, 航向误差变化率）
    // vehicle state matrix
    Eigen::MatrixXd matrix_a_; // 连续A矩阵
    // vehicle state matrix (discrete-time)
    Eigen::MatrixXd matrix_ad_; // 离散A矩阵
    // control matrix
    Eigen::MatrixXd matrix_b_;  // 连续B矩阵
    // control matrix (discrete-time)
    Eigen::MatrixXd matrix_bd_;  // 离散B矩阵
    // gain matrix
    Eigen::MatrixXd matrix_k_; // LQR增益矩阵K
    // control authority weighting matrix
    Eigen::MatrixXd matrix_r_; // 控制权重R
    // state weighting matrix 
    Eigen::MatrixXd matrix_q_; // 状态权重Q
    // updated state weighting matrix
    Eigen::MatrixXd matrix_q_updated_; //动态更新后的Q
    // vehicle state matrix coefficients
    Eigen::MatrixXd matrix_a_coeff_; // A矩阵系数
    // 4 by 1 matrix; state matrix
    Eigen::MatrixXd matrix_state_; // 状态向量

    // parameters for lqr solver; number of iterations
    int lqr_max_iteration_ = 0; // 最大迭代次数
    // parameters for lqr solver; threshold for computation
    double lqr_eps_ = 0.0;   // 收敛精度阈值

    // Look-ahead controller
    bool enable_look_ahead_back_control_ = false; // 是否启用前瞻控制

    // 上一时刻的加速度/航向变化率等，估算用
    // for compute the differential valute to estimate acceleration/lon_jerk
    double previous_lateral_acceleration_ = 0.0;

    double previous_heading_rate_ = 0.0;
    double previous_ref_heading_rate_ = 0.0;

    double previous_heading_acceleration_ = 0.0;
    double previous_ref_heading_acceleration_ = 0.0;

    // for logging purpose
    std::ofstream steer_log_file_; // 日志文件

    const std::string name_;  // 控制器名

    double query_relative_time_; // 查询轨迹相对时间

    double pre_steer_angle_ = 0.0;  // 前一时刻转向角

    double pre_steering_position_ = 0.0; // 前一时刻方向盘位置

    double minimum_speed_protection_ = 0.1; // 低速保护，防止分母为零

    double current_trajectory_timestamp_ = -1.0; // 当前轨迹时间戳
    // 初始位姿
    double init_vehicle_x_, init_vehicle_y_, init_vehicle_heading_ = 0.0;

    // 低速阈值
    double low_speed_bound_ = 0.0;

    double low_speed_window_ = 0.0;
    
    double driving_orientation_ = 0.0;  // 驾驶方向（正/反）

    double steer_offset_ = 0.0; // 转向偏置

    // added // 参考曲率
  
    double MAX_STEER_RAD = 25.0 * M_PI / 180.0;  //最大前轮转角

    double steer_angle_feedforward_coff = 0.9; //前馈系数

   public:
     
};

}    // namespace control
