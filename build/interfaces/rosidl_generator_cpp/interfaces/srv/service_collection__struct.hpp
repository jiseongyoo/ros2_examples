// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/ServiceCollection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__SERVICE_COLLECTION__STRUCT_HPP_
#define INTERFACES__SRV__SERVICE_COLLECTION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ServiceCollection_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ServiceCollection_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceCollection_Request_
{
  using Type = ServiceCollection_Request_<ContainerAllocator>;

  explicit ServiceCollection_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  explicit ServiceCollection_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : static_five_long_int_arr(_alloc),
    string_t(_alloc),
    static_five_string_arr(_alloc),
    bounded_ten_char_string_t(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  // field types and members
  using _bool_t_type =
    bool;
  _bool_t_type bool_t;
  using _byte_t_type =
    unsigned char;
  _byte_t_type byte_t;
  using _char_t_type =
    uint8_t;
  _char_t_type char_t;
  using _float_t_type =
    float;
  _float_t_type float_t;
  using _double_t_type =
    double;
  _double_t_type double_t;
  using _octet_int_t_type =
    int8_t;
  _octet_int_t_type octet_int_t;
  using _octet_uint_t_type =
    uint8_t;
  _octet_uint_t_type octet_uint_t;
  using _short_int_t_type =
    int16_t;
  _short_int_t_type short_int_t;
  using _short_uint_t_type =
    uint16_t;
  _short_uint_t_type short_uint_t;
  using _long_int_t_type =
    int32_t;
  _long_int_t_type long_int_t;
  using _long_uint_t_type =
    uint32_t;
  _long_uint_t_type long_uint_t;
  using _long_long_int_t_type =
    int64_t;
  _long_long_int_t_type long_long_int_t;
  using _long_long_uint_t_type =
    uint64_t;
  _long_long_uint_t_type long_long_uint_t;
  using _unbounded_long_int_arr_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _unbounded_long_int_arr_type unbounded_long_int_arr;
  using _static_five_long_int_arr_type =
    std::array<int32_t, 5>;
  _static_five_long_int_arr_type static_five_long_int_arr;
  using _bounded_five_long_int_arr_type =
    rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other>;
  _bounded_five_long_int_arr_type bounded_five_long_int_arr;
  using _string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_t_type string_t;
  using _static_five_string_arr_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>;
  _static_five_string_arr_type static_five_string_arr;
  using _bounded_ten_char_string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _bounded_ten_char_string_t_type bounded_ten_char_string_t;
  using _bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_five_string_arr_type bounded_five_string_arr;
  using _bounded_ten_char_unbounded_string_arr_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_unbounded_string_arr_type bounded_ten_char_unbounded_string_arr;
  using _bounded_ten_char_bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_bounded_five_string_arr_type bounded_ten_char_bounded_five_string_arr;

  // setters for named parameter idiom
  Type & set__bool_t(
    const bool & _arg)
  {
    this->bool_t = _arg;
    return *this;
  }
  Type & set__byte_t(
    const unsigned char & _arg)
  {
    this->byte_t = _arg;
    return *this;
  }
  Type & set__char_t(
    const uint8_t & _arg)
  {
    this->char_t = _arg;
    return *this;
  }
  Type & set__float_t(
    const float & _arg)
  {
    this->float_t = _arg;
    return *this;
  }
  Type & set__double_t(
    const double & _arg)
  {
    this->double_t = _arg;
    return *this;
  }
  Type & set__octet_int_t(
    const int8_t & _arg)
  {
    this->octet_int_t = _arg;
    return *this;
  }
  Type & set__octet_uint_t(
    const uint8_t & _arg)
  {
    this->octet_uint_t = _arg;
    return *this;
  }
  Type & set__short_int_t(
    const int16_t & _arg)
  {
    this->short_int_t = _arg;
    return *this;
  }
  Type & set__short_uint_t(
    const uint16_t & _arg)
  {
    this->short_uint_t = _arg;
    return *this;
  }
  Type & set__long_int_t(
    const int32_t & _arg)
  {
    this->long_int_t = _arg;
    return *this;
  }
  Type & set__long_uint_t(
    const uint32_t & _arg)
  {
    this->long_uint_t = _arg;
    return *this;
  }
  Type & set__long_long_int_t(
    const int64_t & _arg)
  {
    this->long_long_int_t = _arg;
    return *this;
  }
  Type & set__long_long_uint_t(
    const uint64_t & _arg)
  {
    this->long_long_uint_t = _arg;
    return *this;
  }
  Type & set__unbounded_long_int_arr(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->unbounded_long_int_arr = _arg;
    return *this;
  }
  Type & set__static_five_long_int_arr(
    const std::array<int32_t, 5> & _arg)
  {
    this->static_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__bounded_five_long_int_arr(
    const rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->bounded_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_t = _arg;
    return *this;
  }
  Type & set__static_five_string_arr(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5> & _arg)
  {
    this->static_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->bounded_ten_char_string_t = _arg;
    return *this;
  }
  Type & set__bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_unbounded_string_arr(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_unbounded_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_bounded_five_string_arr = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> CONSTANT_STRING_FIRST;

  // pointer types
  using RawPtr =
    interfaces::srv::ServiceCollection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ServiceCollection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceCollection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceCollection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ServiceCollection_Request
    std::shared_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ServiceCollection_Request
    std::shared_ptr<interfaces::srv::ServiceCollection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceCollection_Request_ & other) const
  {
    if (this->bool_t != other.bool_t) {
      return false;
    }
    if (this->byte_t != other.byte_t) {
      return false;
    }
    if (this->char_t != other.char_t) {
      return false;
    }
    if (this->float_t != other.float_t) {
      return false;
    }
    if (this->double_t != other.double_t) {
      return false;
    }
    if (this->octet_int_t != other.octet_int_t) {
      return false;
    }
    if (this->octet_uint_t != other.octet_uint_t) {
      return false;
    }
    if (this->short_int_t != other.short_int_t) {
      return false;
    }
    if (this->short_uint_t != other.short_uint_t) {
      return false;
    }
    if (this->long_int_t != other.long_int_t) {
      return false;
    }
    if (this->long_uint_t != other.long_uint_t) {
      return false;
    }
    if (this->long_long_int_t != other.long_long_int_t) {
      return false;
    }
    if (this->long_long_uint_t != other.long_long_uint_t) {
      return false;
    }
    if (this->unbounded_long_int_arr != other.unbounded_long_int_arr) {
      return false;
    }
    if (this->static_five_long_int_arr != other.static_five_long_int_arr) {
      return false;
    }
    if (this->bounded_five_long_int_arr != other.bounded_five_long_int_arr) {
      return false;
    }
    if (this->string_t != other.string_t) {
      return false;
    }
    if (this->static_five_string_arr != other.static_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_string_t != other.bounded_ten_char_string_t) {
      return false;
    }
    if (this->bounded_five_string_arr != other.bounded_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_unbounded_string_arr != other.bounded_ten_char_unbounded_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_bounded_five_string_arr != other.bounded_ten_char_bounded_five_string_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceCollection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceCollection_Request_

// alias to use template instance with default allocator
using ServiceCollection_Request =
  interfaces::srv::ServiceCollection_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
ServiceCollection_Request_<ContainerAllocator>::CONSTANT_STRING_FIRST = "CONSTANT_STRING_FIRST";

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ServiceCollection_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ServiceCollection_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceCollection_Response_
{
  using Type = ServiceCollection_Response_<ContainerAllocator>;

  explicit ServiceCollection_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  explicit ServiceCollection_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : static_five_long_int_arr(_alloc),
    string_t(_alloc),
    static_five_string_arr(_alloc),
    bounded_ten_char_string_t(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_t = false;
      this->byte_t = 0;
      this->char_t = 0;
      this->float_t = 0.0f;
      this->double_t = 0.0;
      this->octet_int_t = 0;
      this->octet_uint_t = 0;
      this->short_int_t = 0;
      this->short_uint_t = 0;
      this->long_int_t = 0l;
      this->long_uint_t = 0ul;
      this->long_long_int_t = 0ll;
      this->long_long_uint_t = 0ull;
      std::fill<typename std::array<int32_t, 5>::iterator, int32_t>(this->static_five_long_int_arr.begin(), this->static_five_long_int_arr.end(), 0l);
      this->string_t = "";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->static_five_string_arr.begin(), this->static_five_string_arr.end(), "");
      this->bounded_ten_char_string_t = "";
    }
  }

  // field types and members
  using _bool_t_type =
    bool;
  _bool_t_type bool_t;
  using _byte_t_type =
    unsigned char;
  _byte_t_type byte_t;
  using _char_t_type =
    uint8_t;
  _char_t_type char_t;
  using _float_t_type =
    float;
  _float_t_type float_t;
  using _double_t_type =
    double;
  _double_t_type double_t;
  using _octet_int_t_type =
    int8_t;
  _octet_int_t_type octet_int_t;
  using _octet_uint_t_type =
    uint8_t;
  _octet_uint_t_type octet_uint_t;
  using _short_int_t_type =
    int16_t;
  _short_int_t_type short_int_t;
  using _short_uint_t_type =
    uint16_t;
  _short_uint_t_type short_uint_t;
  using _long_int_t_type =
    int32_t;
  _long_int_t_type long_int_t;
  using _long_uint_t_type =
    uint32_t;
  _long_uint_t_type long_uint_t;
  using _long_long_int_t_type =
    int64_t;
  _long_long_int_t_type long_long_int_t;
  using _long_long_uint_t_type =
    uint64_t;
  _long_long_uint_t_type long_long_uint_t;
  using _unbounded_long_int_arr_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _unbounded_long_int_arr_type unbounded_long_int_arr;
  using _static_five_long_int_arr_type =
    std::array<int32_t, 5>;
  _static_five_long_int_arr_type static_five_long_int_arr;
  using _bounded_five_long_int_arr_type =
    rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other>;
  _bounded_five_long_int_arr_type bounded_five_long_int_arr;
  using _string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_t_type string_t;
  using _static_five_string_arr_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5>;
  _static_five_string_arr_type static_five_string_arr;
  using _bounded_ten_char_string_t_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _bounded_ten_char_string_t_type bounded_ten_char_string_t;
  using _bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_five_string_arr_type bounded_five_string_arr;
  using _bounded_ten_char_unbounded_string_arr_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_unbounded_string_arr_type bounded_ten_char_unbounded_string_arr;
  using _bounded_ten_char_bounded_five_string_arr_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _bounded_ten_char_bounded_five_string_arr_type bounded_ten_char_bounded_five_string_arr;

  // setters for named parameter idiom
  Type & set__bool_t(
    const bool & _arg)
  {
    this->bool_t = _arg;
    return *this;
  }
  Type & set__byte_t(
    const unsigned char & _arg)
  {
    this->byte_t = _arg;
    return *this;
  }
  Type & set__char_t(
    const uint8_t & _arg)
  {
    this->char_t = _arg;
    return *this;
  }
  Type & set__float_t(
    const float & _arg)
  {
    this->float_t = _arg;
    return *this;
  }
  Type & set__double_t(
    const double & _arg)
  {
    this->double_t = _arg;
    return *this;
  }
  Type & set__octet_int_t(
    const int8_t & _arg)
  {
    this->octet_int_t = _arg;
    return *this;
  }
  Type & set__octet_uint_t(
    const uint8_t & _arg)
  {
    this->octet_uint_t = _arg;
    return *this;
  }
  Type & set__short_int_t(
    const int16_t & _arg)
  {
    this->short_int_t = _arg;
    return *this;
  }
  Type & set__short_uint_t(
    const uint16_t & _arg)
  {
    this->short_uint_t = _arg;
    return *this;
  }
  Type & set__long_int_t(
    const int32_t & _arg)
  {
    this->long_int_t = _arg;
    return *this;
  }
  Type & set__long_uint_t(
    const uint32_t & _arg)
  {
    this->long_uint_t = _arg;
    return *this;
  }
  Type & set__long_long_int_t(
    const int64_t & _arg)
  {
    this->long_long_int_t = _arg;
    return *this;
  }
  Type & set__long_long_uint_t(
    const uint64_t & _arg)
  {
    this->long_long_uint_t = _arg;
    return *this;
  }
  Type & set__unbounded_long_int_arr(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->unbounded_long_int_arr = _arg;
    return *this;
  }
  Type & set__static_five_long_int_arr(
    const std::array<int32_t, 5> & _arg)
  {
    this->static_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__bounded_five_long_int_arr(
    const rosidl_generator_cpp::BoundedVector<int32_t, 5, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->bounded_five_long_int_arr = _arg;
    return *this;
  }
  Type & set__string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_t = _arg;
    return *this;
  }
  Type & set__static_five_string_arr(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5> & _arg)
  {
    this->static_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_string_t(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->bounded_ten_char_string_t = _arg;
    return *this;
  }
  Type & set__bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_five_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_unbounded_string_arr(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_unbounded_string_arr = _arg;
    return *this;
  }
  Type & set__bounded_ten_char_bounded_five_string_arr(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 5, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->bounded_ten_char_bounded_five_string_arr = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> CONSTANT_STRING_SECOND;

  // pointer types
  using RawPtr =
    interfaces::srv::ServiceCollection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ServiceCollection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceCollection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ServiceCollection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ServiceCollection_Response
    std::shared_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ServiceCollection_Response
    std::shared_ptr<interfaces::srv::ServiceCollection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceCollection_Response_ & other) const
  {
    if (this->bool_t != other.bool_t) {
      return false;
    }
    if (this->byte_t != other.byte_t) {
      return false;
    }
    if (this->char_t != other.char_t) {
      return false;
    }
    if (this->float_t != other.float_t) {
      return false;
    }
    if (this->double_t != other.double_t) {
      return false;
    }
    if (this->octet_int_t != other.octet_int_t) {
      return false;
    }
    if (this->octet_uint_t != other.octet_uint_t) {
      return false;
    }
    if (this->short_int_t != other.short_int_t) {
      return false;
    }
    if (this->short_uint_t != other.short_uint_t) {
      return false;
    }
    if (this->long_int_t != other.long_int_t) {
      return false;
    }
    if (this->long_uint_t != other.long_uint_t) {
      return false;
    }
    if (this->long_long_int_t != other.long_long_int_t) {
      return false;
    }
    if (this->long_long_uint_t != other.long_long_uint_t) {
      return false;
    }
    if (this->unbounded_long_int_arr != other.unbounded_long_int_arr) {
      return false;
    }
    if (this->static_five_long_int_arr != other.static_five_long_int_arr) {
      return false;
    }
    if (this->bounded_five_long_int_arr != other.bounded_five_long_int_arr) {
      return false;
    }
    if (this->string_t != other.string_t) {
      return false;
    }
    if (this->static_five_string_arr != other.static_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_string_t != other.bounded_ten_char_string_t) {
      return false;
    }
    if (this->bounded_five_string_arr != other.bounded_five_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_unbounded_string_arr != other.bounded_ten_char_unbounded_string_arr) {
      return false;
    }
    if (this->bounded_ten_char_bounded_five_string_arr != other.bounded_ten_char_bounded_five_string_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceCollection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceCollection_Response_

// alias to use template instance with default allocator
using ServiceCollection_Response =
  interfaces::srv::ServiceCollection_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
ServiceCollection_Response_<ContainerAllocator>::CONSTANT_STRING_SECOND = "CONSTANT_STRING_SECOND";

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ServiceCollection
{
  using Request = interfaces::srv::ServiceCollection_Request;
  using Response = interfaces::srv::ServiceCollection_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__SERVICE_COLLECTION__STRUCT_HPP_
