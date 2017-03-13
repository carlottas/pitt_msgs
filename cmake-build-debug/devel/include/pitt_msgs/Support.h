// Generated by gencpp from file pitt_msgs/Support.msg
// DO NOT EDIT!


#ifndef PITT_MSGS_MESSAGE_SUPPORT_H
#define PITT_MSGS_MESSAGE_SUPPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/PointCloud2.h>

namespace pitt_msgs
{
template <class ContainerAllocator>
struct Support_
{
  typedef Support_<ContainerAllocator> Type;

  Support_()
    : inliers()
    , support_cloud()
    , on_support_cloud()
    , support_coefficient_a(0.0)
    , support_coefficient_b(0.0)
    , support_coefficient_c(0.0)
    , support_coefficient_d(0.0)  {
    }
  Support_(const ContainerAllocator& _alloc)
    : inliers(_alloc)
    , support_cloud(_alloc)
    , on_support_cloud(_alloc)
    , support_coefficient_a(0.0)
    , support_coefficient_b(0.0)
    , support_coefficient_c(0.0)
    , support_coefficient_d(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _inliers_type;
  _inliers_type inliers;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _support_cloud_type;
  _support_cloud_type support_cloud;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _on_support_cloud_type;
  _on_support_cloud_type on_support_cloud;

   typedef float _support_coefficient_a_type;
  _support_coefficient_a_type support_coefficient_a;

   typedef float _support_coefficient_b_type;
  _support_coefficient_b_type support_coefficient_b;

   typedef float _support_coefficient_c_type;
  _support_coefficient_c_type support_coefficient_c;

   typedef float _support_coefficient_d_type;
  _support_coefficient_d_type support_coefficient_d;




  typedef boost::shared_ptr< ::pitt_msgs::Support_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pitt_msgs::Support_<ContainerAllocator> const> ConstPtr;

}; // struct Support_

typedef ::pitt_msgs::Support_<std::allocator<void> > Support;

typedef boost::shared_ptr< ::pitt_msgs::Support > SupportPtr;
typedef boost::shared_ptr< ::pitt_msgs::Support const> SupportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pitt_msgs::Support_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pitt_msgs::Support_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pitt_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/indigo/share/pcl_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pitt_msgs': ['/home/carlotta/catkin_ws/src/pitt_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pitt_msgs::Support_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pitt_msgs::Support_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pitt_msgs::Support_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pitt_msgs::Support_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pitt_msgs::Support_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pitt_msgs::Support_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pitt_msgs::Support_<ContainerAllocator> >
{
  static const char* value()
  {
    return "247888d007f0da24b592b2c5935023ea";
  }

  static const char* value(const ::pitt_msgs::Support_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x247888d007f0da24ULL;
  static const uint64_t static_value2 = 0xb592b2c5935023eaULL;
};

template<class ContainerAllocator>
struct DataType< ::pitt_msgs::Support_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pitt_msgs/Support";
  }

  static const char* value(const ::pitt_msgs::Support_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pitt_msgs::Support_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#############################################\n\
# This message is use to describe a support and it is created by the support segmentation service through the message \"SupportSegmentatio.srv\"\n\
# \n\
# Particularly, it describes a support through the index of the points that are belonging to the support with respect to the\n\
# original point cloud given to the SupportSegmentation.srv. Moreover, it contains also a cloud with only the points that are \n\
# related to the support itself as well as the cloud the contains the points of the objects that are on top of the support\n\
# (for more information on how this is computed see the SupportSegmentation service).\n\
# Finally, it returns also the parametric estimation of the supports given by RANSAC through 4 coefficients (a,b,c,d) that \n\
# describes the plane as: (aX + bY + cZ + d = 0).  \n\
#############################################\n\
\n\
int32[] inliers								# the index with respect of the input cloud to the service of the points that are belonging to a support\n\
\n\
sensor_msgs/PointCloud2 support_cloud 		# the point cloud containing only the points that are belonging to one support (extrapolation of the inliers of the original cloud)\n\
\n\
sensor_msgs/PointCloud2 on_support_cloud 	# the point of the area above the cloud \n\
\n\
float32 support_coefficient_a\n\
float32 support_coefficient_b\n\
float32 support_coefficient_c\n\
float32 support_coefficient_d\n\
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

  static const char* value(const ::pitt_msgs::Support_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pitt_msgs::Support_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.inliers);
      stream.next(m.support_cloud);
      stream.next(m.on_support_cloud);
      stream.next(m.support_coefficient_a);
      stream.next(m.support_coefficient_b);
      stream.next(m.support_coefficient_c);
      stream.next(m.support_coefficient_d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Support_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pitt_msgs::Support_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pitt_msgs::Support_<ContainerAllocator>& v)
  {
    s << indent << "inliers[]" << std::endl;
    for (size_t i = 0; i < v.inliers.size(); ++i)
    {
      s << indent << "  inliers[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.inliers[i]);
    }
    s << indent << "support_cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.support_cloud);
    s << indent << "on_support_cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.on_support_cloud);
    s << indent << "support_coefficient_a: ";
    Printer<float>::stream(s, indent + "  ", v.support_coefficient_a);
    s << indent << "support_coefficient_b: ";
    Printer<float>::stream(s, indent + "  ", v.support_coefficient_b);
    s << indent << "support_coefficient_c: ";
    Printer<float>::stream(s, indent + "  ", v.support_coefficient_c);
    s << indent << "support_coefficient_d: ";
    Printer<float>::stream(s, indent + "  ", v.support_coefficient_d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PITT_MSGS_MESSAGE_SUPPORT_H
