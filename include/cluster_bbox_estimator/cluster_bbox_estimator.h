#ifndef CLUSTER_BBOX_ESTIMATOR_CLUSTER_BBOX_ESTIMATOR_H_INCLUDED
#define CLUSTER_BBOX_ESTIMATOR_CLUSTER_BBOX_ESTIMATOR_H_INCLUDED

#include <pcl_ros/pcl_nodelet.h>
#include <sensor_msgs/PointCloud2.h>

namespace pcl_ros
{
    class ClusterBboxEstimator : public PCLNodelet
    {
    public:
        ClusterBboxEstimator();
    protected:
        void onInit();
        void subscribe();
        void unsubscribe();
    };
}

#endif  //CLUSTER_BBOX_ESTIMATOR_CLUSTER_BBOX_ESTIMATOR_H_INCLUDED