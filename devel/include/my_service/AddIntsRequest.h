// Generated by gencpp from file my_service/AddIntsRequest.msg
// DO NOT EDIT!


#ifndef MY_SERVICE_MESSAGE_ADDINTSREQUEST_H
#define MY_SERVICE_MESSAGE_ADDINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_service
{
template <class ContainerAllocator>
struct AddIntsRequest_
{
  typedef AddIntsRequest_<ContainerAllocator> Type;

  AddIntsRequest_()
    : rub(0.0)  {
    }
  AddIntsRequest_(const ContainerAllocator& _alloc)
    : rub(0.0)  {
  (void)_alloc;
    }



   typedef float _rub_type;
  _rub_type rub;





  typedef boost::shared_ptr< ::my_service::AddIntsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_service::AddIntsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddIntsRequest_

typedef ::my_service::AddIntsRequest_<std::allocator<void> > AddIntsRequest;

typedef boost::shared_ptr< ::my_service::AddIntsRequest > AddIntsRequestPtr;
typedef boost::shared_ptr< ::my_service::AddIntsRequest const> AddIntsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_service::AddIntsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_service::AddIntsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_service::AddIntsRequest_<ContainerAllocator1> & lhs, const ::my_service::AddIntsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.rub == rhs.rub;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_service::AddIntsRequest_<ContainerAllocator1> & lhs, const ::my_service::AddIntsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_service::AddIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_service::AddIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_service::AddIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_service::AddIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_service::AddIntsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_service::AddIntsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_service::AddIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5905cfa5270c0aec2386c94a1fb0919d";
  }

  static const char* value(const ::my_service::AddIntsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5905cfa5270c0aecULL;
  static const uint64_t static_value2 = 0x2386c94a1fb0919dULL;
};

template<class ContainerAllocator>
struct DataType< ::my_service::AddIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_service/AddIntsRequest";
  }

  static const char* value(const ::my_service::AddIntsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_service::AddIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 rub\n"
;
  }

  static const char* value(const ::my_service::AddIntsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_service::AddIntsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rub);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddIntsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_service::AddIntsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_service::AddIntsRequest_<ContainerAllocator>& v)
  {
    s << indent << "rub: ";
    Printer<float>::stream(s, indent + "  ", v.rub);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_SERVICE_MESSAGE_ADDINTSREQUEST_H
