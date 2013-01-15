/* Auto-generated by genmsg_cpp for file /home/cody/Development/DR_ws/ublox/msg/rawmeasreap.msg */
#ifndef UBLOX_MESSAGE_RAWMEASREAP_H
#define UBLOX_MESSAGE_RAWMEASREAP_H
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


namespace ublox
{
template <class ContainerAllocator>
struct rawmeasreap_ {
  typedef rawmeasreap_<ContainerAllocator> Type;

  rawmeasreap_()
  : cpmeas(0.0)
  , prmeas(0.0)
  , domeas(0.0)
  , svid(0.0)
  , measqual(0.0)
  , cnratio(0.0)
  , lli(0.0)
  {
  }

  rawmeasreap_(const ContainerAllocator& _alloc)
  : cpmeas(0.0)
  , prmeas(0.0)
  , domeas(0.0)
  , svid(0.0)
  , measqual(0.0)
  , cnratio(0.0)
  , lli(0.0)
  {
  }

  typedef double _cpmeas_type;
  double cpmeas;

  typedef double _prmeas_type;
  double prmeas;

  typedef double _domeas_type;
  double domeas;

  typedef double _svid_type;
  double svid;

  typedef double _measqual_type;
  double measqual;

  typedef double _cnratio_type;
  double cnratio;

  typedef double _lli_type;
  double lli;


  typedef boost::shared_ptr< ::ublox::rawmeasreap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox::rawmeasreap_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct rawmeasreap
typedef  ::ublox::rawmeasreap_<std::allocator<void> > rawmeasreap;

typedef boost::shared_ptr< ::ublox::rawmeasreap> rawmeasreapPtr;
typedef boost::shared_ptr< ::ublox::rawmeasreap const> rawmeasreapConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox::rawmeasreap_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox::rawmeasreap_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox::rawmeasreap_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox::rawmeasreap_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox::rawmeasreap_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3e0d85a162ba346cb0d65c80e9547c99";
  }

  static const char* value(const  ::ublox::rawmeasreap_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3e0d85a162ba346cULL;
  static const uint64_t static_value2 = 0xb0d65c80e9547c99ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox::rawmeasreap_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox/rawmeasreap";
  }

  static const char* value(const  ::ublox::rawmeasreap_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox::rawmeasreap_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# RawMeasReap\n\
\n\
float64 cpmeas      # cycles - Carrier Phase measurement\n\
float64 prmeas    # m - Psuedorange measurement\n\
float64 domeas       # Hz - Doppler Measurement\n\
float64 svid       # SV Number\n\
float64 measqual    # Nav Measurement Quality Indicator  -- (>=4 PR+DO OK) (>=5 PR+DO+CP OK) (<6 likel loss carrier lock)\n\
float64 cnratio     # dbHz - Carrier to Noise Ratio\n\
float64 lli        # Loss of Lock Indicator (RINEX Definition)\n\
";
  }

  static const char* value(const  ::ublox::rawmeasreap_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ublox::rawmeasreap_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox::rawmeasreap_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.cpmeas);
    stream.next(m.prmeas);
    stream.next(m.domeas);
    stream.next(m.svid);
    stream.next(m.measqual);
    stream.next(m.cnratio);
    stream.next(m.lli);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct rawmeasreap_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox::rawmeasreap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox::rawmeasreap_<ContainerAllocator> & v) 
  {
    s << indent << "cpmeas: ";
    Printer<double>::stream(s, indent + "  ", v.cpmeas);
    s << indent << "prmeas: ";
    Printer<double>::stream(s, indent + "  ", v.prmeas);
    s << indent << "domeas: ";
    Printer<double>::stream(s, indent + "  ", v.domeas);
    s << indent << "svid: ";
    Printer<double>::stream(s, indent + "  ", v.svid);
    s << indent << "measqual: ";
    Printer<double>::stream(s, indent + "  ", v.measqual);
    s << indent << "cnratio: ";
    Printer<double>::stream(s, indent + "  ", v.cnratio);
    s << indent << "lli: ";
    Printer<double>::stream(s, indent + "  ", v.lli);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MESSAGE_RAWMEASREAP_H

