// Generated by gencpp from file pitt_msgs/InliersCluster.msg
// DO NOT EDIT!


#ifndef PITT_MSGS_MESSAGE_INLIERSCLUSTER_H
#define PITT_MSGS_MESSAGE_INLIERSCLUSTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/PointCloud2.h>

namespace pitt_msgs
{
template <class ContainerAllocator>
struct InliersCluster_
{
  typedef InliersCluster_<ContainerAllocator> Type;

  InliersCluster_()
    : header()
    , inliers()
    , cloud()
    , x_centroid(0.0)
    , y_centroid(0.0)
    , z_centroid(0.0)
    , shape_id(0)  {
    }
  InliersCluster_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , inliers(_alloc)
    , cloud(_alloc)
    , x_centroid(0.0)
    , y_centroid(0.0)
    , z_centroid(0.0)
    , shape_id(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _inliers_type;
  _inliers_type inliers;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;

   typedef float _x_centroid_type;
  _x_centroid_type x_centroid;

   typedef float _y_centroid_type;
  _y_centroid_type y_centroid;

   typedef float _z_centroid_type;
  _z_centroid_type z_centroid;

   typedef int32_t _shape_id_type;
  _shape_id_type shape_id;




  typedef boost::shared_ptr< ::pitt_msgs::InliersCluster_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pitt_msgs::InliersCluster_<ContainerAllocator> const> ConstPtr;

}; // struct InliersCluster_

typedef ::pitt_msgs::InliersCluster_<std::allocator<void> > InliersCluster;

typedef boost::shared_ptr< ::pitt_msgs::InliersCluster > InliersClusterPtr;
typedef boost::shared_ptr< ::pitt_msgs::InliersCluster const> InliersClusterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pitt_msgs::InliersCluster_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pitt_msgs::InliersCluster_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pitt_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/indigo/share/pcl_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pitt_msgs': ['/home/carlotta/catkin_ws/src/pitt_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pitt_msgs::InliersCluster_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pitt_msgs::InliersCluster_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pitt_msgs::InliersCluster_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "226317a397073e6291b64876df41cb3b";
  }

  static const char* value(const ::pitt_msgs::InliersCluster_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x226317a397073e62ULL;
  static const uint64_t static_value2 = 0x91b64876df41cb3bULL;
};

template<class ContainerAllocator>
struct DataType< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pitt_msgs/InliersCluster";
  }

  static const char* value(const ::pitt_msgs::InliersCluster_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
int32[] inliers\n\
sensor_msgs/PointCloud2 cloud\n\
\n\
float32 x_centroid\n\
float32 y_centroid\n\
float32 z_centroid\n\
\n\
\n\
int32 shape_id # only introduced by the geometric tracker\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
";
  }

  static const char* value(const ::pitt_msgs::InliersCluster_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.inliers);
      stream.next(m.cloud);
      stream.next(m.x_centroid);
      stream.next(m.y_centroid);
      stream.next(m.z_centroid);
      stream.next(m.shape_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InliersCluster_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pitt_msgs::InliersCluster_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pitt_msgs::InliersCluster_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "inliers[]" << std::endl;
    for (size_t i = 0; i < v.inliers.size(); ++i)
    {
      s << indent << "  inliers[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.inliers[i]);
    }
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
    s << indent << "x_centroid: ";
    Printer<float>::stream(s, indent + "  ", v.x_centroid);
    s << indent << "y_centroid: ";
    Printer<float>::stream(s, indent + "  ", v.y_centroid);
    s << indent << "z_centroid: ";
    Printer<float>::stream(s, indent + "  ", v.z_centroid);
    s << indent << "shape_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.shape_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PITT_MSGS_MESSAGE_INLIERSCLUSTER_H
