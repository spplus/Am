// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgbody.proto

#ifndef PROTOBUF_msgbody_2eproto__INCLUDED
#define PROTOBUF_msgbody_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "msgbean.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace spplus {
namespace buff {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msgbody_2eproto();
void protobuf_AssignDesc_msgbody_2eproto();
void protobuf_ShutdownFile_msgbody_2eproto();

class UserLoginMsg;
class UserLoginMsg_Request;
class UserLoginMsg_Response;
class UserListMsg;
class UserListMsg_Request;
class UserListMsg_Response;

// ===================================================================

class UserLoginMsg_Request : public ::google::protobuf::Message {
 public:
  UserLoginMsg_Request();
  virtual ~UserLoginMsg_Request();

  UserLoginMsg_Request(const UserLoginMsg_Request& from);

  inline UserLoginMsg_Request& operator=(const UserLoginMsg_Request& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserLoginMsg_Request& default_instance();

  void Swap(UserLoginMsg_Request* other);

  // implements Message ----------------------------------------------

  UserLoginMsg_Request* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserLoginMsg_Request& from);
  void MergeFrom(const UserLoginMsg_Request& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes username = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const void* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // optional bytes userpwd = 2;
  inline bool has_userpwd() const;
  inline void clear_userpwd();
  static const int kUserpwdFieldNumber = 2;
  inline const ::std::string& userpwd() const;
  inline void set_userpwd(const ::std::string& value);
  inline void set_userpwd(const char* value);
  inline void set_userpwd(const void* value, size_t size);
  inline ::std::string* mutable_userpwd();
  inline ::std::string* release_userpwd();
  inline void set_allocated_userpwd(::std::string* userpwd);

  // @@protoc_insertion_point(class_scope:com.spplus.buff.UserLoginMsg.Request)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_userpwd();
  inline void clear_has_userpwd();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* username_;
  ::std::string* userpwd_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgbody_2eproto();
  friend void protobuf_AssignDesc_msgbody_2eproto();
  friend void protobuf_ShutdownFile_msgbody_2eproto();

  void InitAsDefaultInstance();
  static UserLoginMsg_Request* default_instance_;
};
// -------------------------------------------------------------------

class UserLoginMsg_Response : public ::google::protobuf::Message {
 public:
  UserLoginMsg_Response();
  virtual ~UserLoginMsg_Response();

  UserLoginMsg_Response(const UserLoginMsg_Response& from);

  inline UserLoginMsg_Response& operator=(const UserLoginMsg_Response& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserLoginMsg_Response& default_instance();

  void Swap(UserLoginMsg_Response* other);

  // implements Message ----------------------------------------------

  UserLoginMsg_Response* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserLoginMsg_Response& from);
  void MergeFrom(const UserLoginMsg_Response& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 rescode = 1;
  inline bool has_rescode() const;
  inline void clear_rescode();
  static const int kRescodeFieldNumber = 1;
  inline ::google::protobuf::uint32 rescode() const;
  inline void set_rescode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.spplus.buff.UserLoginMsg.Response)
 private:
  inline void set_has_rescode();
  inline void clear_has_rescode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 rescode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_msgbody_2eproto();
  friend void protobuf_AssignDesc_msgbody_2eproto();
  friend void protobuf_ShutdownFile_msgbody_2eproto();

  void InitAsDefaultInstance();
  static UserLoginMsg_Response* default_instance_;
};
// -------------------------------------------------------------------

class UserLoginMsg : public ::google::protobuf::Message {
 public:
  UserLoginMsg();
  virtual ~UserLoginMsg();

  UserLoginMsg(const UserLoginMsg& from);

  inline UserLoginMsg& operator=(const UserLoginMsg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserLoginMsg& default_instance();

  void Swap(UserLoginMsg* other);

  // implements Message ----------------------------------------------

  UserLoginMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserLoginMsg& from);
  void MergeFrom(const UserLoginMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef UserLoginMsg_Request Request;
  typedef UserLoginMsg_Response Response;

  // accessors -------------------------------------------------------

  // optional .com.spplus.buff.UserLoginMsg.Request request = 1;
  inline bool has_request() const;
  inline void clear_request();
  static const int kRequestFieldNumber = 1;
  inline const ::com::spplus::buff::UserLoginMsg_Request& request() const;
  inline ::com::spplus::buff::UserLoginMsg_Request* mutable_request();
  inline ::com::spplus::buff::UserLoginMsg_Request* release_request();
  inline void set_allocated_request(::com::spplus::buff::UserLoginMsg_Request* request);

  // optional .com.spplus.buff.UserLoginMsg.Response response = 2;
  inline bool has_response() const;
  inline void clear_response();
  static const int kResponseFieldNumber = 2;
  inline const ::com::spplus::buff::UserLoginMsg_Response& response() const;
  inline ::com::spplus::buff::UserLoginMsg_Response* mutable_response();
  inline ::com::spplus::buff::UserLoginMsg_Response* release_response();
  inline void set_allocated_response(::com::spplus::buff::UserLoginMsg_Response* response);

  // @@protoc_insertion_point(class_scope:com.spplus.buff.UserLoginMsg)
 private:
  inline void set_has_request();
  inline void clear_has_request();
  inline void set_has_response();
  inline void clear_has_response();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::com::spplus::buff::UserLoginMsg_Request* request_;
  ::com::spplus::buff::UserLoginMsg_Response* response_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgbody_2eproto();
  friend void protobuf_AssignDesc_msgbody_2eproto();
  friend void protobuf_ShutdownFile_msgbody_2eproto();

  void InitAsDefaultInstance();
  static UserLoginMsg* default_instance_;
};
// -------------------------------------------------------------------

class UserListMsg_Request : public ::google::protobuf::Message {
 public:
  UserListMsg_Request();
  virtual ~UserListMsg_Request();

  UserListMsg_Request(const UserListMsg_Request& from);

  inline UserListMsg_Request& operator=(const UserListMsg_Request& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserListMsg_Request& default_instance();

  void Swap(UserListMsg_Request* other);

  // implements Message ----------------------------------------------

  UserListMsg_Request* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserListMsg_Request& from);
  void MergeFrom(const UserListMsg_Request& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes reqdate = 1;
  inline bool has_reqdate() const;
  inline void clear_reqdate();
  static const int kReqdateFieldNumber = 1;
  inline const ::std::string& reqdate() const;
  inline void set_reqdate(const ::std::string& value);
  inline void set_reqdate(const char* value);
  inline void set_reqdate(const void* value, size_t size);
  inline ::std::string* mutable_reqdate();
  inline ::std::string* release_reqdate();
  inline void set_allocated_reqdate(::std::string* reqdate);

  // @@protoc_insertion_point(class_scope:com.spplus.buff.UserListMsg.Request)
 private:
  inline void set_has_reqdate();
  inline void clear_has_reqdate();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* reqdate_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_msgbody_2eproto();
  friend void protobuf_AssignDesc_msgbody_2eproto();
  friend void protobuf_ShutdownFile_msgbody_2eproto();

  void InitAsDefaultInstance();
  static UserListMsg_Request* default_instance_;
};
// -------------------------------------------------------------------

class UserListMsg_Response : public ::google::protobuf::Message {
 public:
  UserListMsg_Response();
  virtual ~UserListMsg_Response();

  UserListMsg_Response(const UserListMsg_Response& from);

  inline UserListMsg_Response& operator=(const UserListMsg_Response& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserListMsg_Response& default_instance();

  void Swap(UserListMsg_Response* other);

  // implements Message ----------------------------------------------

  UserListMsg_Response* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserListMsg_Response& from);
  void MergeFrom(const UserListMsg_Response& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 rescode = 1;
  inline bool has_rescode() const;
  inline void clear_rescode();
  static const int kRescodeFieldNumber = 1;
  inline ::google::protobuf::uint32 rescode() const;
  inline void set_rescode(::google::protobuf::uint32 value);

  // repeated .com.spplus.buff.UserBean userlist = 2;
  inline int userlist_size() const;
  inline void clear_userlist();
  static const int kUserlistFieldNumber = 2;
  inline const ::com::spplus::buff::UserBean& userlist(int index) const;
  inline ::com::spplus::buff::UserBean* mutable_userlist(int index);
  inline ::com::spplus::buff::UserBean* add_userlist();
  inline const ::google::protobuf::RepeatedPtrField< ::com::spplus::buff::UserBean >&
      userlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::spplus::buff::UserBean >*
      mutable_userlist();

  // @@protoc_insertion_point(class_scope:com.spplus.buff.UserListMsg.Response)
 private:
  inline void set_has_rescode();
  inline void clear_has_rescode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::com::spplus::buff::UserBean > userlist_;
  ::google::protobuf::uint32 rescode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgbody_2eproto();
  friend void protobuf_AssignDesc_msgbody_2eproto();
  friend void protobuf_ShutdownFile_msgbody_2eproto();

  void InitAsDefaultInstance();
  static UserListMsg_Response* default_instance_;
};
// -------------------------------------------------------------------

class UserListMsg : public ::google::protobuf::Message {
 public:
  UserListMsg();
  virtual ~UserListMsg();

  UserListMsg(const UserListMsg& from);

  inline UserListMsg& operator=(const UserListMsg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserListMsg& default_instance();

  void Swap(UserListMsg* other);

  // implements Message ----------------------------------------------

  UserListMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserListMsg& from);
  void MergeFrom(const UserListMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef UserListMsg_Request Request;
  typedef UserListMsg_Response Response;

  // accessors -------------------------------------------------------

  // optional .com.spplus.buff.UserListMsg.Request request = 1;
  inline bool has_request() const;
  inline void clear_request();
  static const int kRequestFieldNumber = 1;
  inline const ::com::spplus::buff::UserListMsg_Request& request() const;
  inline ::com::spplus::buff::UserListMsg_Request* mutable_request();
  inline ::com::spplus::buff::UserListMsg_Request* release_request();
  inline void set_allocated_request(::com::spplus::buff::UserListMsg_Request* request);

  // optional .com.spplus.buff.UserListMsg.Response response = 2;
  inline bool has_response() const;
  inline void clear_response();
  static const int kResponseFieldNumber = 2;
  inline const ::com::spplus::buff::UserListMsg_Response& response() const;
  inline ::com::spplus::buff::UserListMsg_Response* mutable_response();
  inline ::com::spplus::buff::UserListMsg_Response* release_response();
  inline void set_allocated_response(::com::spplus::buff::UserListMsg_Response* response);

  // @@protoc_insertion_point(class_scope:com.spplus.buff.UserListMsg)
 private:
  inline void set_has_request();
  inline void clear_has_request();
  inline void set_has_response();
  inline void clear_has_response();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::com::spplus::buff::UserListMsg_Request* request_;
  ::com::spplus::buff::UserListMsg_Response* response_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_msgbody_2eproto();
  friend void protobuf_AssignDesc_msgbody_2eproto();
  friend void protobuf_ShutdownFile_msgbody_2eproto();

  void InitAsDefaultInstance();
  static UserListMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// UserLoginMsg_Request

// optional bytes username = 1;
inline bool UserLoginMsg_Request::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserLoginMsg_Request::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserLoginMsg_Request::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserLoginMsg_Request::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& UserLoginMsg_Request::username() const {
  return *username_;
}
inline void UserLoginMsg_Request::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void UserLoginMsg_Request::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void UserLoginMsg_Request::set_username(const void* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserLoginMsg_Request::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* UserLoginMsg_Request::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserLoginMsg_Request::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes userpwd = 2;
inline bool UserLoginMsg_Request::has_userpwd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserLoginMsg_Request::set_has_userpwd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserLoginMsg_Request::clear_has_userpwd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserLoginMsg_Request::clear_userpwd() {
  if (userpwd_ != &::google::protobuf::internal::kEmptyString) {
    userpwd_->clear();
  }
  clear_has_userpwd();
}
inline const ::std::string& UserLoginMsg_Request::userpwd() const {
  return *userpwd_;
}
inline void UserLoginMsg_Request::set_userpwd(const ::std::string& value) {
  set_has_userpwd();
  if (userpwd_ == &::google::protobuf::internal::kEmptyString) {
    userpwd_ = new ::std::string;
  }
  userpwd_->assign(value);
}
inline void UserLoginMsg_Request::set_userpwd(const char* value) {
  set_has_userpwd();
  if (userpwd_ == &::google::protobuf::internal::kEmptyString) {
    userpwd_ = new ::std::string;
  }
  userpwd_->assign(value);
}
inline void UserLoginMsg_Request::set_userpwd(const void* value, size_t size) {
  set_has_userpwd();
  if (userpwd_ == &::google::protobuf::internal::kEmptyString) {
    userpwd_ = new ::std::string;
  }
  userpwd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserLoginMsg_Request::mutable_userpwd() {
  set_has_userpwd();
  if (userpwd_ == &::google::protobuf::internal::kEmptyString) {
    userpwd_ = new ::std::string;
  }
  return userpwd_;
}
inline ::std::string* UserLoginMsg_Request::release_userpwd() {
  clear_has_userpwd();
  if (userpwd_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = userpwd_;
    userpwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserLoginMsg_Request::set_allocated_userpwd(::std::string* userpwd) {
  if (userpwd_ != &::google::protobuf::internal::kEmptyString) {
    delete userpwd_;
  }
  if (userpwd) {
    set_has_userpwd();
    userpwd_ = userpwd;
  } else {
    clear_has_userpwd();
    userpwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// UserLoginMsg_Response

// optional uint32 rescode = 1;
inline bool UserLoginMsg_Response::has_rescode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserLoginMsg_Response::set_has_rescode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserLoginMsg_Response::clear_has_rescode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserLoginMsg_Response::clear_rescode() {
  rescode_ = 0u;
  clear_has_rescode();
}
inline ::google::protobuf::uint32 UserLoginMsg_Response::rescode() const {
  return rescode_;
}
inline void UserLoginMsg_Response::set_rescode(::google::protobuf::uint32 value) {
  set_has_rescode();
  rescode_ = value;
}

// -------------------------------------------------------------------

// UserLoginMsg

// optional .com.spplus.buff.UserLoginMsg.Request request = 1;
inline bool UserLoginMsg::has_request() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserLoginMsg::set_has_request() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserLoginMsg::clear_has_request() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserLoginMsg::clear_request() {
  if (request_ != NULL) request_->::com::spplus::buff::UserLoginMsg_Request::Clear();
  clear_has_request();
}
inline const ::com::spplus::buff::UserLoginMsg_Request& UserLoginMsg::request() const {
  return request_ != NULL ? *request_ : *default_instance_->request_;
}
inline ::com::spplus::buff::UserLoginMsg_Request* UserLoginMsg::mutable_request() {
  set_has_request();
  if (request_ == NULL) request_ = new ::com::spplus::buff::UserLoginMsg_Request;
  return request_;
}
inline ::com::spplus::buff::UserLoginMsg_Request* UserLoginMsg::release_request() {
  clear_has_request();
  ::com::spplus::buff::UserLoginMsg_Request* temp = request_;
  request_ = NULL;
  return temp;
}
inline void UserLoginMsg::set_allocated_request(::com::spplus::buff::UserLoginMsg_Request* request) {
  delete request_;
  request_ = request;
  if (request) {
    set_has_request();
  } else {
    clear_has_request();
  }
}

// optional .com.spplus.buff.UserLoginMsg.Response response = 2;
inline bool UserLoginMsg::has_response() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserLoginMsg::set_has_response() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserLoginMsg::clear_has_response() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserLoginMsg::clear_response() {
  if (response_ != NULL) response_->::com::spplus::buff::UserLoginMsg_Response::Clear();
  clear_has_response();
}
inline const ::com::spplus::buff::UserLoginMsg_Response& UserLoginMsg::response() const {
  return response_ != NULL ? *response_ : *default_instance_->response_;
}
inline ::com::spplus::buff::UserLoginMsg_Response* UserLoginMsg::mutable_response() {
  set_has_response();
  if (response_ == NULL) response_ = new ::com::spplus::buff::UserLoginMsg_Response;
  return response_;
}
inline ::com::spplus::buff::UserLoginMsg_Response* UserLoginMsg::release_response() {
  clear_has_response();
  ::com::spplus::buff::UserLoginMsg_Response* temp = response_;
  response_ = NULL;
  return temp;
}
inline void UserLoginMsg::set_allocated_response(::com::spplus::buff::UserLoginMsg_Response* response) {
  delete response_;
  response_ = response;
  if (response) {
    set_has_response();
  } else {
    clear_has_response();
  }
}

// -------------------------------------------------------------------

// UserListMsg_Request

// optional bytes reqdate = 1;
inline bool UserListMsg_Request::has_reqdate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserListMsg_Request::set_has_reqdate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserListMsg_Request::clear_has_reqdate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserListMsg_Request::clear_reqdate() {
  if (reqdate_ != &::google::protobuf::internal::kEmptyString) {
    reqdate_->clear();
  }
  clear_has_reqdate();
}
inline const ::std::string& UserListMsg_Request::reqdate() const {
  return *reqdate_;
}
inline void UserListMsg_Request::set_reqdate(const ::std::string& value) {
  set_has_reqdate();
  if (reqdate_ == &::google::protobuf::internal::kEmptyString) {
    reqdate_ = new ::std::string;
  }
  reqdate_->assign(value);
}
inline void UserListMsg_Request::set_reqdate(const char* value) {
  set_has_reqdate();
  if (reqdate_ == &::google::protobuf::internal::kEmptyString) {
    reqdate_ = new ::std::string;
  }
  reqdate_->assign(value);
}
inline void UserListMsg_Request::set_reqdate(const void* value, size_t size) {
  set_has_reqdate();
  if (reqdate_ == &::google::protobuf::internal::kEmptyString) {
    reqdate_ = new ::std::string;
  }
  reqdate_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserListMsg_Request::mutable_reqdate() {
  set_has_reqdate();
  if (reqdate_ == &::google::protobuf::internal::kEmptyString) {
    reqdate_ = new ::std::string;
  }
  return reqdate_;
}
inline ::std::string* UserListMsg_Request::release_reqdate() {
  clear_has_reqdate();
  if (reqdate_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reqdate_;
    reqdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserListMsg_Request::set_allocated_reqdate(::std::string* reqdate) {
  if (reqdate_ != &::google::protobuf::internal::kEmptyString) {
    delete reqdate_;
  }
  if (reqdate) {
    set_has_reqdate();
    reqdate_ = reqdate;
  } else {
    clear_has_reqdate();
    reqdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// UserListMsg_Response

// optional uint32 rescode = 1;
inline bool UserListMsg_Response::has_rescode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserListMsg_Response::set_has_rescode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserListMsg_Response::clear_has_rescode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserListMsg_Response::clear_rescode() {
  rescode_ = 0u;
  clear_has_rescode();
}
inline ::google::protobuf::uint32 UserListMsg_Response::rescode() const {
  return rescode_;
}
inline void UserListMsg_Response::set_rescode(::google::protobuf::uint32 value) {
  set_has_rescode();
  rescode_ = value;
}

// repeated .com.spplus.buff.UserBean userlist = 2;
inline int UserListMsg_Response::userlist_size() const {
  return userlist_.size();
}
inline void UserListMsg_Response::clear_userlist() {
  userlist_.Clear();
}
inline const ::com::spplus::buff::UserBean& UserListMsg_Response::userlist(int index) const {
  return userlist_.Get(index);
}
inline ::com::spplus::buff::UserBean* UserListMsg_Response::mutable_userlist(int index) {
  return userlist_.Mutable(index);
}
inline ::com::spplus::buff::UserBean* UserListMsg_Response::add_userlist() {
  return userlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::spplus::buff::UserBean >&
UserListMsg_Response::userlist() const {
  return userlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::spplus::buff::UserBean >*
UserListMsg_Response::mutable_userlist() {
  return &userlist_;
}

// -------------------------------------------------------------------

// UserListMsg

// optional .com.spplus.buff.UserListMsg.Request request = 1;
inline bool UserListMsg::has_request() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserListMsg::set_has_request() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserListMsg::clear_has_request() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserListMsg::clear_request() {
  if (request_ != NULL) request_->::com::spplus::buff::UserListMsg_Request::Clear();
  clear_has_request();
}
inline const ::com::spplus::buff::UserListMsg_Request& UserListMsg::request() const {
  return request_ != NULL ? *request_ : *default_instance_->request_;
}
inline ::com::spplus::buff::UserListMsg_Request* UserListMsg::mutable_request() {
  set_has_request();
  if (request_ == NULL) request_ = new ::com::spplus::buff::UserListMsg_Request;
  return request_;
}
inline ::com::spplus::buff::UserListMsg_Request* UserListMsg::release_request() {
  clear_has_request();
  ::com::spplus::buff::UserListMsg_Request* temp = request_;
  request_ = NULL;
  return temp;
}
inline void UserListMsg::set_allocated_request(::com::spplus::buff::UserListMsg_Request* request) {
  delete request_;
  request_ = request;
  if (request) {
    set_has_request();
  } else {
    clear_has_request();
  }
}

// optional .com.spplus.buff.UserListMsg.Response response = 2;
inline bool UserListMsg::has_response() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserListMsg::set_has_response() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserListMsg::clear_has_response() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserListMsg::clear_response() {
  if (response_ != NULL) response_->::com::spplus::buff::UserListMsg_Response::Clear();
  clear_has_response();
}
inline const ::com::spplus::buff::UserListMsg_Response& UserListMsg::response() const {
  return response_ != NULL ? *response_ : *default_instance_->response_;
}
inline ::com::spplus::buff::UserListMsg_Response* UserListMsg::mutable_response() {
  set_has_response();
  if (response_ == NULL) response_ = new ::com::spplus::buff::UserListMsg_Response;
  return response_;
}
inline ::com::spplus::buff::UserListMsg_Response* UserListMsg::release_response() {
  clear_has_response();
  ::com::spplus::buff::UserListMsg_Response* temp = response_;
  response_ = NULL;
  return temp;
}
inline void UserListMsg::set_allocated_response(::com::spplus::buff::UserListMsg_Response* response) {
  delete response_;
  response_ = response;
  if (response) {
    set_has_response();
  } else {
    clear_has_response();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace buff
}  // namespace spplus
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msgbody_2eproto__INCLUDED
