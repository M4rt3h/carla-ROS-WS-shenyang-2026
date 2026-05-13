#include "carla_lidar_mapping/lidar_mapping.hpp"


namespace carla_lidar_mapping
{
    using std::placeholders::_1;
    using namespace std::chrono_literals;

    //声明参数
    void LidarMapping::declareParameters()
    {
        this->declare_parameter<bool>("new_scan", true);
        this->declare_parameter<double>("vehicle_radius", 8.0);
        this->declare_parameter<int>("cloud_resolution", 5000);
      
    }

    void LidarMapping::updateParameters()
    {
        this->get_parameter("new_scan", new_scan_);
        this->get_parameter("vehicle_radius", vehicle_radius_);
        this->get_parameter("cloud_resolution", cloud_resolution_);

    }

    rcl_interfaces::msg::SetParametersResult LidarMapping::onParameterChange(
    const std::vector<rclcpp::Parameter> &params)
    {
        for (const auto &param : params)
        {
            if (param.get_name() == "new_scan") new_scan_ = param.as_bool();
            else if (param.get_name() == "vehicle_radius") vehicle_radius_ = param.as_double();
            else if (param.get_name() == "cloud_resolution") cloud_resolution_ = param.as_int();
        }

        this->PARAMS_UPDATED = true;
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;
        result.reason = "Node parameters updated";
        return result;
    }

    LidarMapping::LidarMapping(): Node("lidar_mapping_node")
    {
        this->declareParameters();
        this->updateParameters();
          // 3. 设置动态参数更新回调
        this->param_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&LidarMapping::onParameterChange, this, std::placeholders::_1)
        );

        //创建定时器, 周期性（0.1s）调用timerCallback函数
        this->timer_ = this->create_wall_timer(0.1s, std::bind(&LidarMapping::timerCallback, this));

        //创建订阅者
        this->localization_sub_ = this->create_subscription<nav_msgs::msg::Odometry>("/carla/hero/odometry", 1, std::bind(&LidarMapping::localizationCallback, this, _1));
        this->point_cloud_sub_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("/carla/hero/lidar", 1, std::bind(&LidarMapping::pointCloudCallback, this, _1));

        //创建发布方
        this->point_cloud_map_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("/point_cloud_map", 1);
        
        //创建智能指针
        // scaned_cloud_ptr_ = std::make_shared<PointCloudT>();
        scaned_cloud_ptr_ = boost::make_shared<PointCloudT>();

    }

    // 话题消息 sensor_msgs::msg::PointCloud2 转换成 pcl::PointCloud
    void LidarMapping::pointCloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Point cloud received...");
        pcl::fromROSMsg(*msg, *scaned_cloud_ptr_);
    }

    //获取当前位置信息
    void LidarMapping::localizationCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Odometry received ...");
        //更新当前位置
        current_pose_.position.x = msg->pose.pose.position.x;
        current_pose_.position.y = msg->pose.pose.position.y;
        current_pose_.position.z = msg->pose.pose.position.z;

        // 将 geometry_msgs::Quaternion 转换为 tf2::Quaternion

        tf2::Quaternion q;
        tf2::fromMsg(msg->pose.pose.orientation, q);
        //将四元数转换为旋转矩阵
        const tf2::Matrix3x3 m = tf2::Matrix3x3(q);
        double roll, pitch, yaw;
        m.getRPY(roll, pitch, yaw);

        current_pose_.rotation.roll = roll;
        current_pose_.rotation.pitch = pitch;
        current_pose_.rotation.yaw = yaw;
    }

    void LidarMapping::timerCallback()
    {
        scanTransformation(scaned_cloud_ptr_);

        //////////////////////////////////////////////////////////////////////////
        // Mapping Visualization
        //////////////////////////////////////////////////////////////////////////
        saved_map_.header.frame_id = "map";
        point_cloud_map_pub_->publish(saved_map_);

    }

    void LidarMapping::scanTransformation(const PointCloudT::Ptr scan_cloud) {
        // Set transform to pose using transform3D()
        //用欧拉角和平移生成一个 4×4 的 SE(3) 坐标变换矩阵
        Eigen::Matrix4d transform = transform3D(
        current_pose_.rotation.yaw, current_pose_.rotation.pitch, current_pose_.rotation.roll,
        current_pose_.position.x, current_pose_.position.y, current_pose_.position.z);

        // 对每个点进行空间变换并加入地图
        for (auto point : *scan_cloud) 
        {
            // Don't include points touching ego
            if ((point.x * point.x + point.y * point.y + point.z * point.z) > vehicle_radius_) 
            {
                Eigen::Vector4d local_point(point.x, point.y, point.z, 1);
                // Multiply local_point by transform
                Eigen::Vector4d transform_point = transform * local_point;
                pcl_cloud_.points.push_back(PointT(transform_point[0], transform_point[1], transform_point[2]));
            }
        }
        //地图下采样滤波, 转为 ROS 格式
        PointCloudT::Ptr cloud_filtered = downsamplePointCloud(pcl_cloud_);
        pcl::toROSMsg(*cloud_filtered.get(), saved_map_);

        //根据点数量判断是否要禁用新帧添加, 控制地图大小和更新频率

        // scan resolution
        if (pcl_cloud_.points.size() > cloud_resolution_)
        {
            new_scan_ = false;
            // savePointCloudMap(cloud_filtered);
        }

        double distanceR_res = 5.0; // CANDO: Can modify this value
        double time_res = 1.0;      // CANDO: Can modify this value
        auto current_time = std::chrono::system_clock::now();
        // 若当前帧与历史帧距离远（>5m）且间隔时间大于 1s，则认为这是一个新的关键帧，允许更新
        if (!new_scan_) 
        {
            std::chrono::duration<double> prev_scan_seconds = current_time - prev_scan_time_;
            if (prev_scan_seconds.count() > time_res && minDistance(Point(current_pose_.position.x, current_pose_.position.y, current_pose_.position.z), scan_poses_) > distanceR_res) 
            {
                scan_poses_.push_back(Point(current_pose_.position.x, current_pose_.position.y, current_pose_.position.z));
                new_scan_ = true;
            }
        }

        prev_scan_time_ = std::chrono::system_clock::now();
    }

    Eigen::Matrix4d LidarMapping::transform3D(double yaw, double pitch, double roll, double xt, double yt, double zt) 
    {

        Eigen::Matrix4d matrix = Eigen::Matrix4d::Identity();

        matrix(0, 3) = xt;
        matrix(1, 3) = yt;
        matrix(2, 3) = zt;

        matrix(0, 0) = cos(yaw) * cos(pitch);
        matrix(0, 1) = cos(yaw) * sin(pitch) * sin(roll) - sin(yaw) * cos(roll);
        matrix(0, 2) = cos(yaw) * sin(pitch) * cos(roll) + sin(yaw) * sin(roll);
        matrix(1, 0) = sin(yaw) * cos(pitch);
        matrix(1, 1) = sin(yaw) * sin(pitch) * sin(roll) + cos(yaw) * cos(roll);
        matrix(1, 2) = sin(yaw) * sin(pitch) * cos(roll) - cos(yaw) * sin(roll);
        matrix(2, 0) = -sin(pitch);
        matrix(2, 1) = cos(pitch) * sin(roll);
        matrix(2, 2) = cos(pitch) * cos(roll);

        return matrix;
    }

    Eigen::Quaternionf LidarMapping::getQuaternion(float theta)
    {
        Eigen::Matrix3f rotation_mat;
        rotation_mat << cos(theta), -sin(theta), 0, sin(theta), cos(theta), 0, 0, 0, 1;
        Eigen::Quaternionf q(rotation_mat);
        return q;
    }

    Pose LidarMapping::getPose(Eigen::Matrix4d matrix) 
    {
        Pose pose(Point(matrix(0, 3), matrix(1, 3), matrix(2, 3)),
                    Rotate(atan2(matrix(2, 1), matrix(2, 2)),
                        atan2(-matrix(2, 0), sqrt(matrix(2, 1) * matrix(2, 1) +
                                                    matrix(2, 2) * matrix(2, 2))),
                        atan2(matrix(1, 0), matrix(0, 0))));
        return pose;
    }

    double LidarMapping::getDistance(Point p1, Point p2) 
    {
        return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z));
    }

    double LidarMapping::minDistance(Point p1, std::vector<Point> points) 
    {
        if (points.size() > 0) 
        {
            double dist = getDistance(p1, points[0]);
            for (int index = 1; index < points.size(); index++) 
            {
                double new_dist = getDistance(p1, points[index]);
                if (new_dist < dist)
                {
                    dist = new_dist;
                }
            }
            return dist;
        }
        return -1;
    }

    void LidarMapping::print4x4Matrix(const Eigen::Matrix4d &matrix) 
    {
        printf("Rotation matrix :\n");
        printf("    | %6.3f %6.3f %6.3f | \n", matrix(0, 0), matrix(0, 1), matrix(0, 2));
        printf("R = | %6.3f %6.3f %6.3f | \n", matrix(1, 0), matrix(1, 1), matrix(1, 2));
        printf("    | %6.3f %6.3f %6.3f | \n", matrix(2, 0), matrix(2, 1), matrix(2, 2));
        printf("Translation vector :\n");
        printf("t = < %6.3f, %6.3f, %6.3f >\n\n", matrix(0, 3), matrix(1, 3), matrix(2, 3));
    }

    void LidarMapping::print4x4Matrixf(const Eigen::Matrix4f &matrix)
    {
        printf("Rotation matrix :\n");
        printf("    | %6.3f %6.3f %6.3f | \n", matrix(0, 0), matrix(0, 1), matrix(0, 2));
        printf("R = | %6.3f %6.3f %6.3f | \n", matrix(1, 0), matrix(1, 1), matrix(1, 2));
        printf("    | %6.3f %6.3f %6.3f | \n", matrix(2, 0), matrix(2, 1), matrix(2, 2));
        printf("Translation vector :\n");
        printf("t = < %6.3f, %6.3f, %6.3f >\n\n", matrix(0, 3), matrix(1, 3), matrix(2, 3));
    }

    PointCloudT::Ptr LidarMapping::downsamplePointCloud(const PointCloudT& pcl_cloud)
    {
        PointCloudT::Ptr cloud(new PointCloudT);
        *cloud = pcl_cloud;
        cloud->width = cloud->points.size();
        cloud->height = 1;

        // Downsample the map point cloud using a voxel filter
        PointCloudT::Ptr cloud_filtered(new PointCloudT);
        pcl::VoxelGrid<PointT> vg;
        vg.setInputCloud(cloud);
        double filterRes = 0.5;
        vg.setLeafSize(filterRes, filterRes, filterRes);
        vg.filter(*cloud_filtered);

        return cloud_filtered;
    }

    void LidarMapping::savePointCloudMap(const PointCloudT::Ptr cloud_filtered) 
    {
        // save the point cloud map
        pcl::io::savePCDFileASCII("town_map.pcd", *cloud_filtered);
        RCLCPP_INFO(this->get_logger(), "Saved pcd map.");
    }

}

int main(int argc, char const* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<carla_lidar_mapping::LidarMapping>());
    rclcpp::shutdown();
    return 0;
}