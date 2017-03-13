// Generated by gencpp from file pitt_msgs/ArmFilter.msg
// DO NOT EDIT!


#ifndef PITT_MSGS_MESSAGE_ARMFILTER_H
#define PITT_MSGS_MESSAGE_ARMFILTER_H

#include <ros/service_traits.h>


#include <pitt_msgs/ArmFilterRequest.h>
#include <pitt_msgs/ArmFilterResponse.h>


namespace pitt_msgs
{

struct ArmFilter
{

typedef ArmFilterRequest Request;
typedef ArmFilterResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ArmFilter
} // namespace pitt_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pitt_msgs::ArmFilter > {
  static const char* value()
  {
    return "43ef8400a40190d0b23f419e8c2a4196";
  }

  static const char* value(const ::pitt_msgs::ArmFilter&) { return value(); }
};

template<>
struct DataType< ::pitt_msgs::ArmFilter > {
  static const char* value()
  {
    return "pitt_msgs/ArmFilter";
  }

  static const char* value(const ::pitt_msgs::ArmFilter&) { return value(); }
};


// service_traits::MD5Sum< ::pitt_msgs::ArmFilterRequest> should match 
// service_traits::MD5Sum< ::pitt_msgs::ArmFilter > 
template<>
struct MD5Sum< ::pitt_msgs::ArmFilterRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pitt_msgs::ArmFilter >::value();
  }
  static const char* value(const ::pitt_msgs::ArmFilterRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pitt_msgs::ArmFilterRequest> should match 
// service_traits::DataType< ::pitt_msgs::ArmFilter > 
template<>
struct DataType< ::pitt_msgs::ArmFilterRequest>
{
  static const char* value()
  {
    return DataType< ::pitt_msgs::ArmFilter >::value();
  }
  static const char* value(const ::pitt_msgs::ArmFilterRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pitt_msgs::ArmFilterResponse> should match 
// service_traits::MD5Sum< ::pitt_msgs::ArmFilter > 
template<>
struct MD5Sum< ::pitt_msgs::ArmFilterResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pitt_msgs::ArmFilter >::value();
  }
  static const char* value(const ::pitt_msgs::ArmFilterResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pitt_msgs::ArmFilterResponse> should match 
// service_traits::DataType< ::pitt_msgs::ArmFilter > 
template<>
struct DataType< ::pitt_msgs::ArmFilterResponse>
{
  static const char* value()
  {
    return DataType< ::pitt_msgs::ArmFilter >::value();
  }
  static const char* value(const ::pitt_msgs::ArmFilterResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PITT_MSGS_MESSAGE_ARMFILTER_H