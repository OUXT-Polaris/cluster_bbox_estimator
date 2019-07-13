#include <cluster_bbox_estimator/cluster_bbox_estimator.h>

namespace pcl_ros
{
    ClusterBboxEstimator::ClusterBboxEstimator()
    {

    }

    void ClusterBboxEstimator::onInit()
    {

    }

    void ClusterBboxEstimator::subscribe()
    {

    }

    void ClusterBboxEstimator::unsubscribe()
    {

    }
}

#include <pluginlib/class_list_macros.h>
typedef pcl_ros::ClusterBboxEstimator ClusterBboxEstimator;
PLUGINLIB_EXPORT_CLASS(ClusterBboxEstimator,nodelet::Nodelet);