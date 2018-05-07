// Generated by gencpp from file underwater_robot/Euler.msg
// DO NOT EDIT!


#ifndef UNDERWATER_ROBOT_MESSAGE_EULER_H
#define UNDERWATER_ROBOT_MESSAGE_EULER_H


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
struct Euler_
{
  typedef Euler_<ContainerAllocator> Type;

  Euler_()
    : roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
    }
  Euler_(const ContainerAllocator& _alloc)
    : roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;




  typedef boost::shared_ptr< ::underwater_robot::Euler_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::underwater_robot::Euler_<ContainerAllocator> const> ConstPtr;

}; // struct Euler_

typedef ::underwater_robot::Euler_<std::allocator<void> > Euler;

typedef boost::shared_ptr< ::underwater_robot::Euler > EulerPtr;
typedef boost::shared_ptr< ::underwater_robot::Euler const> EulerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::underwater_robot::Euler_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::underwater_robot::Euler_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::underwater_robot::Euler_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::underwater_robot::Euler_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::underwater_robot::Euler_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::underwater_robot::Euler_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::underwater_robot::Euler_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::underwater_robot::Euler_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::underwater_robot::Euler_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c66f4de7f99199dd8e863fffbef112ad";
  }

  static const char* value(const ::underwater_robot::Euler_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc66f4de7f99199ddULL;
  static const uint64_t static_value2 = 0x8e863fffbef112adULL;
};

template<class ContainerAllocator>
struct DataType< ::underwater_robot::Euler_<ContainerAllocator> >
{
  static const char* value()
  {
    return "underwater_robot/Euler";
  }

  static const char* value(const ::underwater_robot::Euler_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::underwater_robot::Euler_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 roll\n\
float32 pitch\n\
float32 yaw\n\
\n\
";
  }

  static const char* value(const ::underwater_robot::Euler_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::underwater_robot::Euler_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Euler_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::underwater_robot::Euler_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::underwater_robot::Euler_<ContainerAllocator>& v)
  {
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNDERWATER_ROBOT_MESSAGE_EULER_H
