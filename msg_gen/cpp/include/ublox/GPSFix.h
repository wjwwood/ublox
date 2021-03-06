/* Auto-generated by genmsg_cpp for file /home/cody/Development/DR_ws/ublox/msg/GPSFix.msg */
#ifndef UBLOX_MESSAGE_GPSFIX_H
#define UBLOX_MESSAGE_GPSFIX_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace ublox
{
template <class ContainerAllocator>
struct GPSFix_ {
  typedef GPSFix_<ContainerAllocator> Type;

  GPSFix_()
  : header()
  , time(0.0)
  , pdop(0.0)
  , ecefX(0.0)
  , ecefY(0.0)
  , ecefZ(0.0)
  , ecefVX(0.0)
  , ecefVY(0.0)
  , ecefVZ(0.0)
  {
  }

  GPSFix_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , time(0.0)
  , pdop(0.0)
  , ecefX(0.0)
  , ecefY(0.0)
  , ecefZ(0.0)
  , ecefVX(0.0)
  , ecefVY(0.0)
  , ecefVZ(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef double _time_type;
  double time;

  typedef double _pdop_type;
  double pdop;

  typedef double _ecefX_type;
  double ecefX;

  typedef double _ecefY_type;
  double ecefY;

  typedef double _ecefZ_type;
  double ecefZ;

  typedef double _ecefVX_type;
  double ecefVX;

  typedef double _ecefVY_type;
  double ecefVY;

  typedef double _ecefVZ_type;
  double ecefVZ;


  typedef boost::shared_ptr< ::ublox::GPSFix_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox::GPSFix_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GPSFix
typedef  ::ublox::GPSFix_<std::allocator<void> > GPSFix;

typedef boost::shared_ptr< ::ublox::GPSFix> GPSFixPtr;
typedef boost::shared_ptr< ::ublox::GPSFix const> GPSFixConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox::GPSFix_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox::GPSFix_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox::GPSFix_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox::GPSFix_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox::GPSFix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "94be19198c09782b28b0ad3ca080ec53";
  }

  static const char* value(const  ::ublox::GPSFix_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x94be19198c09782bULL;
  static const uint64_t static_value2 = 0x28b0ad3ca080ec53ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox::GPSFix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox/GPSFix";
  }

  static const char* value(const  ::ublox::GPSFix_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox::GPSFix_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# A more complete GPS fix to supplement sensor_msgs/NavSatFix.\n\
Header header\n\
\n\
\n\
# GPS time\n\
float64 time\n\
\n\
## Dilution of precision; Xdop<=0 means the value is unknown\n\
\n\
# Positional (3D) dilution of precision\n\
float64 pdop\n\
\n\
# ECEF Position\n\
\n\
float64 ecefX\n\
float64 ecefY\n\
float64 ecefZ\n\
\n\
\n\
float64 ecefVX\n\
float64 ecefVY\n\
float64 ecefVZ\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::ublox::GPSFix_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ublox::GPSFix_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ublox::GPSFix_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox::GPSFix_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.time);
    stream.next(m.pdop);
    stream.next(m.ecefX);
    stream.next(m.ecefY);
    stream.next(m.ecefZ);
    stream.next(m.ecefVX);
    stream.next(m.ecefVY);
    stream.next(m.ecefVZ);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GPSFix_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox::GPSFix_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox::GPSFix_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "pdop: ";
    Printer<double>::stream(s, indent + "  ", v.pdop);
    s << indent << "ecefX: ";
    Printer<double>::stream(s, indent + "  ", v.ecefX);
    s << indent << "ecefY: ";
    Printer<double>::stream(s, indent + "  ", v.ecefY);
    s << indent << "ecefZ: ";
    Printer<double>::stream(s, indent + "  ", v.ecefZ);
    s << indent << "ecefVX: ";
    Printer<double>::stream(s, indent + "  ", v.ecefVX);
    s << indent << "ecefVY: ";
    Printer<double>::stream(s, indent + "  ", v.ecefVY);
    s << indent << "ecefVZ: ";
    Printer<double>::stream(s, indent + "  ", v.ecefVZ);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MESSAGE_GPSFIX_H

