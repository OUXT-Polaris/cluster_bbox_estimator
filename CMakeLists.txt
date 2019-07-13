cmake_minimum_required(VERSION 2.8.3)
project(cluster_bbox_estimator)

add_compile_options(-std=c++11)

find_package(Boost REQUIRED COMPONENTS system filesystem thread)
find_package(PCL REQUIRED COMPONENTS core features filters io segmentation surface)

find_package(catkin REQUIRED COMPONENTS
  jsk_recognition_msgs
  nodelet
  pcl_ros
  sensor_msgs
  roscpp
  pluginlib
)

catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES cluster_bbox_estimator
  CATKIN_DEPENDS jsk_recognition_msgs nodelet pcl_ros sensor_msgs roscpp pluginlib
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_library(cluster_bbox_estimator
  src/cluster_bbox_estimator.cpp
)
target_link_libraries(cluster_bbox_estimator ${Boost_LIBRARIES} ${catkin_LIBRARIES} ${PCL_LIBRARIES})
class_loader_hide_library_symbols(cluster_bbox_estimator)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION})

install(
  TARGETS cluster_bbox_estimator
  RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)