// Generated by gencpp from file my_first_service/addTwoIntResponse.msg
// DO NOT EDIT!


#ifndef MY_FIRST_SERVICE_MESSAGE_ADDTWOINTRESPONSE_H
#define MY_FIRST_SERVICE_MESSAGE_ADDTWOINTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_first_service
{
template <class ContainerAllocator>
struct addTwoIntResponse_
{
  typedef addTwoIntResponse_<ContainerAllocator> Type;

  addTwoIntResponse_()
    : sum(0)  {
    }
  addTwoIntResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int64_t _sum_type;
  _sum_type sum;





  typedef boost::shared_ptr< ::my_first_service::addTwoIntResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_first_service::addTwoIntResponse_<ContainerAllocator> const> ConstPtr;

}; // struct addTwoIntResponse_

typedef ::my_first_service::addTwoIntResponse_<std::allocator<void> > addTwoIntResponse;

typedef boost::shared_ptr< ::my_first_service::addTwoIntResponse > addTwoIntResponsePtr;
typedef boost::shared_ptr< ::my_first_service::addTwoIntResponse const> addTwoIntResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_first_service::addTwoIntResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_first_service::addTwoIntResponse_<ContainerAllocator1> & lhs, const ::my_first_service::addTwoIntResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sum == rhs.sum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_first_service::addTwoIntResponse_<ContainerAllocator1> & lhs, const ::my_first_service::addTwoIntResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_first_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_first_service::addTwoIntResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_first_service::addTwoIntResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_first_service::addTwoIntResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b88405221c77b1878a3cbbfff53428d7";
  }

  static const char* value(const ::my_first_service::addTwoIntResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb88405221c77b187ULL;
  static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_first_service/addTwoIntResponse";
  }

  static const char* value(const ::my_first_service::addTwoIntResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 sum\n"
;
  }

  static const char* value(const ::my_first_service::addTwoIntResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct addTwoIntResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_first_service::addTwoIntResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_first_service::addTwoIntResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int64_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_FIRST_SERVICE_MESSAGE_ADDTWOINTRESPONSE_H
