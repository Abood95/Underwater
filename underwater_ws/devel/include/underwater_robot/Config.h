// Generated by gencpp from file underwater_robot/Config.msg
// DO NOT EDIT!


#ifndef UNDERWATER_ROBOT_MESSAGE_CONFIG_H
#define UNDERWATER_ROBOT_MESSAGE_CONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace underwater_robot
{
template <class ContainerAllocator>
struct Config_
{
  typedef Config_<ContainerAllocator> Type;

  Config_()
    : imu(false)
    , barometer(false)
    , encoder1(false)
    , encoder2(false)
    , encoder3(false)
    , encoder1_offset(0)
    , encoder2_offset(0)
    , encoder3_offset(0)  {
    }
  Config_(const ContainerAllocator& _alloc)
    : imu(false)
    , barometer(false)
    , encoder1(false)
    , encoder2(false)
    , encoder3(false)
    , encoder1_offset(0)
    , encoder2_offset(0)
    , encoder3_offset(0)  {
  (void)_alloc;
    }



   typedef uint8_t _imu_type;
  _imu_type imu;

   typedef uint8_t _barometer_type;
  _barometer_type barometer;

   typedef uint8_t _encoder1_type;
  _encoder1_type encoder1;

   typedef uint8_t _encoder2_type;
  _encoder2_type encoder2;

   typedef uint8_t _encoder3_type;
  _encoder3_type encoder3;

   typedef int16_t _encoder1_offset_type;
  _encoder1_offset_type encoder1_offset;

   typedef int16_t _encoder2_offset_type;
  _encoder2_offset_type encoder2_offset;

   typedef int16_t _encoder3_offset_type;
  _encoder3_offset_type encoder3_offset;




  typedef boost::shared_ptr< ::underwater_robot::Config_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::underwater_robot::Config_<ContainerAllocator> const> ConstPtr;

}; // struct Config_

typedef ::underwater_robot::Config_<std::allocator<void> > Config;

typedef boost::shared_ptr< ::underwater_robot::Config > ConfigPtr;
typedef boost::shared_ptr< ::underwater_robot::Config const> ConfigConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::underwater_robot::Config_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::underwater_robot::Config_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace underwater_robot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'underwater_robot': ['/home/william/Underwater/underwater_ws/src/underwater_robot/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::underwater_robot::Config_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::underwater_robot::Config_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::underwater_robot::Config_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::underwater_robot::Config_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::underwater_robot::Config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::underwater_robot::Config_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::underwater_robot::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d545f84ec040b08d5bf2fc0f795d8d0a";
  }

  static const char* value(const ::underwater_robot::Config_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd545f84ec040b08dULL;
  static const uint64_t static_value2 = 0x5bf2fc0f795d8d0aULL;
};

template<class ContainerAllocator>
struct DataType< ::underwater_robot::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "underwater_robot/Config";
  }

  static const char* value(const ::underwater_robot::Config_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::underwater_robot::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool imu\n\
bool barometer\n\
bool encoder1\n\
bool encoder2\n\
bool encoder3\n\
int16 encoder1_offset\n\
int16 encoder2_offset\n\
int16 encoder3_offset\n\
\n\
";
  }

  static const char* value(const ::underwater_robot::Config_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::underwater_robot::Config_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.imu);
      stream.next(m.barometer);
      stream.next(m.encoder1);
      stream.next(m.encoder2);
      stream.next(m.encoder3);
      stream.next(m.encoder1_offset);
      stream.next(m.encoder2_offset);
      stream.next(m.encoder3_offset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Config_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::underwater_robot::Config_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::underwater_robot::Config_<ContainerAllocator>& v)
  {
    s << indent << "imu: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.imu);
    s << indent << "barometer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.barometer);
    s << indent << "encoder1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.encoder1);
    s << indent << "encoder2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.encoder2);
    s << indent << "encoder3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.encoder3);
    s << indent << "encoder1_offset: ";
    Printer<int16_t>::stream(s, indent + "  ", v.encoder1_offset);
    s << indent << "encoder2_offset: ";
    Printer<int16_t>::stream(s, indent + "  ", v.encoder2_offset);
    s << indent << "encoder3_offset: ";
    Printer<int16_t>::stream(s, indent + "  ", v.encoder3_offset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNDERWATER_ROBOT_MESSAGE_CONFIG_H
