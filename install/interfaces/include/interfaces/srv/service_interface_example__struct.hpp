// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/ServiceInterfaceExample.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__STRUCT_HPP_
#define INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ServiceInterfaceExample_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ServiceInterfaceExample_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceInterfaceExample_Request_
{
  using Type = ServiceInterfaceExample_Request_<ContainerAllocator>;

  explicit ServiceInterfaceExample_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->request = "service_request";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->request = "";
    }
  }

  explicit ServiceInterfaceExample_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : request(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->request = "service_request";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->request = "";
    }
  }

  // field types and members
  using _request_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ServiceInterfaceExample_Request
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ServiceInterfaceExample_Request
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceInterfaceExample_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceInterfaceExample_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceInterfaceExample_Request_

// alias to use template instance with default allocator
using ServiceInterfaceExample_Request =
  interfaces::srv::ServiceInterfaceExample_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ServiceInterfaceExample_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ServiceInterfaceExample_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceInterfaceExample_Response_
{
  using Type = ServiceInterfaceExample_Response_<ContainerAllocator>;

  explicit ServiceInterfaceExample_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->response = "service_response";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->response = "";
    }
  }

  explicit ServiceInterfaceExample_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->response = "service_response";
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ServiceInterfaceExample_Response
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ServiceInterfaceExample_Response
    std::shared_ptr<interfaces::srv::ServiceInterfaceExample_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceInterfaceExample_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceInterfaceExample_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceInterfaceExample_Response_

// alias to use template instance with default allocator
using ServiceInterfaceExample_Response =
  interfaces::srv::ServiceInterfaceExample_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ServiceInterfaceExample
{
  using Request = interfaces::srv::ServiceInterfaceExample_Request;
  using Response = interfaces::srv::ServiceInterfaceExample_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__SERVICE_INTERFACE_EXAMPLE__STRUCT_HPP_
