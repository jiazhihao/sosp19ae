// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rules.proto

#ifndef PROTOBUF_rules_2eproto__INCLUDED
#define PROTOBUF_rules_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace GraphSubst {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_rules_2eproto();
void protobuf_AssignDesc_rules_2eproto();
void protobuf_ShutdownFile_rules_2eproto();

class MapOutput;
class Operator;
class Parameter;
class Rule;
class RuleCollection;
class Tensor;

// ===================================================================

class Parameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GraphSubst.Parameter) */ {
 public:
  Parameter();
  virtual ~Parameter();

  Parameter(const Parameter& from);

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Parameter& default_instance();

  void Swap(Parameter* other);

  // implements Message ----------------------------------------------

  inline Parameter* New() const { return New(NULL); }

  Parameter* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Parameter* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  ::google::protobuf::int32 key() const;
  void set_key(::google::protobuf::int32 value);

  // required int32 value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  ::google::protobuf::int32 value() const;
  void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GraphSubst.Parameter)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 key_;
  ::google::protobuf::int32 value_;
  friend void  protobuf_AddDesc_rules_2eproto();
  friend void protobuf_AssignDesc_rules_2eproto();
  friend void protobuf_ShutdownFile_rules_2eproto();

  void InitAsDefaultInstance();
  static Parameter* default_instance_;
};
// -------------------------------------------------------------------

class Tensor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GraphSubst.Tensor) */ {
 public:
  Tensor();
  virtual ~Tensor();

  Tensor(const Tensor& from);

  inline Tensor& operator=(const Tensor& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Tensor& default_instance();

  void Swap(Tensor* other);

  // implements Message ----------------------------------------------

  inline Tensor* New() const { return New(NULL); }

  Tensor* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Tensor& from);
  void MergeFrom(const Tensor& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Tensor* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 opId = 1;
  bool has_opid() const;
  void clear_opid();
  static const int kOpIdFieldNumber = 1;
  ::google::protobuf::int32 opid() const;
  void set_opid(::google::protobuf::int32 value);

  // required int32 tsId = 2;
  bool has_tsid() const;
  void clear_tsid();
  static const int kTsIdFieldNumber = 2;
  ::google::protobuf::int32 tsid() const;
  void set_tsid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GraphSubst.Tensor)
 private:
  inline void set_has_opid();
  inline void clear_has_opid();
  inline void set_has_tsid();
  inline void clear_has_tsid();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 opid_;
  ::google::protobuf::int32 tsid_;
  friend void  protobuf_AddDesc_rules_2eproto();
  friend void protobuf_AssignDesc_rules_2eproto();
  friend void protobuf_ShutdownFile_rules_2eproto();

  void InitAsDefaultInstance();
  static Tensor* default_instance_;
};
// -------------------------------------------------------------------

class Operator : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GraphSubst.Operator) */ {
 public:
  Operator();
  virtual ~Operator();

  Operator(const Operator& from);

  inline Operator& operator=(const Operator& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Operator& default_instance();

  void Swap(Operator* other);

  // implements Message ----------------------------------------------

  inline Operator* New() const { return New(NULL); }

  Operator* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Operator& from);
  void MergeFrom(const Operator& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Operator* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // repeated .GraphSubst.Tensor input = 2;
  int input_size() const;
  void clear_input();
  static const int kInputFieldNumber = 2;
  const ::GraphSubst::Tensor& input(int index) const;
  ::GraphSubst::Tensor* mutable_input(int index);
  ::GraphSubst::Tensor* add_input();
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Tensor >*
      mutable_input();
  const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Tensor >&
      input() const;

  // repeated .GraphSubst.Parameter para = 3;
  int para_size() const;
  void clear_para();
  static const int kParaFieldNumber = 3;
  const ::GraphSubst::Parameter& para(int index) const;
  ::GraphSubst::Parameter* mutable_para(int index);
  ::GraphSubst::Parameter* add_para();
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Parameter >*
      mutable_para();
  const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Parameter >&
      para() const;

  // @@protoc_insertion_point(class_scope:GraphSubst.Operator)
 private:
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Tensor > input_;
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Parameter > para_;
  ::google::protobuf::int32 type_;
  friend void  protobuf_AddDesc_rules_2eproto();
  friend void protobuf_AssignDesc_rules_2eproto();
  friend void protobuf_ShutdownFile_rules_2eproto();

  void InitAsDefaultInstance();
  static Operator* default_instance_;
};
// -------------------------------------------------------------------

class MapOutput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GraphSubst.MapOutput) */ {
 public:
  MapOutput();
  virtual ~MapOutput();

  MapOutput(const MapOutput& from);

  inline MapOutput& operator=(const MapOutput& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MapOutput& default_instance();

  void Swap(MapOutput* other);

  // implements Message ----------------------------------------------

  inline MapOutput* New() const { return New(NULL); }

  MapOutput* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapOutput& from);
  void MergeFrom(const MapOutput& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MapOutput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 srcOpId = 1;
  bool has_srcopid() const;
  void clear_srcopid();
  static const int kSrcOpIdFieldNumber = 1;
  ::google::protobuf::int32 srcopid() const;
  void set_srcopid(::google::protobuf::int32 value);

  // required int32 dstOpId = 2;
  bool has_dstopid() const;
  void clear_dstopid();
  static const int kDstOpIdFieldNumber = 2;
  ::google::protobuf::int32 dstopid() const;
  void set_dstopid(::google::protobuf::int32 value);

  // required int32 srcTsId = 3;
  bool has_srctsid() const;
  void clear_srctsid();
  static const int kSrcTsIdFieldNumber = 3;
  ::google::protobuf::int32 srctsid() const;
  void set_srctsid(::google::protobuf::int32 value);

  // required int32 dstTsId = 4;
  bool has_dsttsid() const;
  void clear_dsttsid();
  static const int kDstTsIdFieldNumber = 4;
  ::google::protobuf::int32 dsttsid() const;
  void set_dsttsid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GraphSubst.MapOutput)
 private:
  inline void set_has_srcopid();
  inline void clear_has_srcopid();
  inline void set_has_dstopid();
  inline void clear_has_dstopid();
  inline void set_has_srctsid();
  inline void clear_has_srctsid();
  inline void set_has_dsttsid();
  inline void clear_has_dsttsid();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 srcopid_;
  ::google::protobuf::int32 dstopid_;
  ::google::protobuf::int32 srctsid_;
  ::google::protobuf::int32 dsttsid_;
  friend void  protobuf_AddDesc_rules_2eproto();
  friend void protobuf_AssignDesc_rules_2eproto();
  friend void protobuf_ShutdownFile_rules_2eproto();

  void InitAsDefaultInstance();
  static MapOutput* default_instance_;
};
// -------------------------------------------------------------------

class Rule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GraphSubst.Rule) */ {
 public:
  Rule();
  virtual ~Rule();

  Rule(const Rule& from);

  inline Rule& operator=(const Rule& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Rule& default_instance();

  void Swap(Rule* other);

  // implements Message ----------------------------------------------

  inline Rule* New() const { return New(NULL); }

  Rule* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Rule& from);
  void MergeFrom(const Rule& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Rule* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GraphSubst.Operator srcOp = 1;
  int srcop_size() const;
  void clear_srcop();
  static const int kSrcOpFieldNumber = 1;
  const ::GraphSubst::Operator& srcop(int index) const;
  ::GraphSubst::Operator* mutable_srcop(int index);
  ::GraphSubst::Operator* add_srcop();
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >*
      mutable_srcop();
  const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >&
      srcop() const;

  // repeated .GraphSubst.Operator dstOp = 2;
  int dstop_size() const;
  void clear_dstop();
  static const int kDstOpFieldNumber = 2;
  const ::GraphSubst::Operator& dstop(int index) const;
  ::GraphSubst::Operator* mutable_dstop(int index);
  ::GraphSubst::Operator* add_dstop();
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >*
      mutable_dstop();
  const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >&
      dstop() const;

  // repeated .GraphSubst.MapOutput mappedOutput = 3;
  int mappedoutput_size() const;
  void clear_mappedoutput();
  static const int kMappedOutputFieldNumber = 3;
  const ::GraphSubst::MapOutput& mappedoutput(int index) const;
  ::GraphSubst::MapOutput* mutable_mappedoutput(int index);
  ::GraphSubst::MapOutput* add_mappedoutput();
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::MapOutput >*
      mutable_mappedoutput();
  const ::google::protobuf::RepeatedPtrField< ::GraphSubst::MapOutput >&
      mappedoutput() const;

  // @@protoc_insertion_point(class_scope:GraphSubst.Rule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator > srcop_;
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator > dstop_;
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::MapOutput > mappedoutput_;
  friend void  protobuf_AddDesc_rules_2eproto();
  friend void protobuf_AssignDesc_rules_2eproto();
  friend void protobuf_ShutdownFile_rules_2eproto();

  void InitAsDefaultInstance();
  static Rule* default_instance_;
};
// -------------------------------------------------------------------

class RuleCollection : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GraphSubst.RuleCollection) */ {
 public:
  RuleCollection();
  virtual ~RuleCollection();

  RuleCollection(const RuleCollection& from);

  inline RuleCollection& operator=(const RuleCollection& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RuleCollection& default_instance();

  void Swap(RuleCollection* other);

  // implements Message ----------------------------------------------

  inline RuleCollection* New() const { return New(NULL); }

  RuleCollection* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RuleCollection& from);
  void MergeFrom(const RuleCollection& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RuleCollection* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GraphSubst.Rule rule = 1;
  int rule_size() const;
  void clear_rule();
  static const int kRuleFieldNumber = 1;
  const ::GraphSubst::Rule& rule(int index) const;
  ::GraphSubst::Rule* mutable_rule(int index);
  ::GraphSubst::Rule* add_rule();
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Rule >*
      mutable_rule();
  const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Rule >&
      rule() const;

  // @@protoc_insertion_point(class_scope:GraphSubst.RuleCollection)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::GraphSubst::Rule > rule_;
  friend void  protobuf_AddDesc_rules_2eproto();
  friend void protobuf_AssignDesc_rules_2eproto();
  friend void protobuf_ShutdownFile_rules_2eproto();

  void InitAsDefaultInstance();
  static RuleCollection* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Parameter

// required int32 key = 1;
inline bool Parameter::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Parameter::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Parameter::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Parameter::clear_key() {
  key_ = 0;
  clear_has_key();
}
inline ::google::protobuf::int32 Parameter::key() const {
  // @@protoc_insertion_point(field_get:GraphSubst.Parameter.key)
  return key_;
}
inline void Parameter::set_key(::google::protobuf::int32 value) {
  set_has_key();
  key_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.Parameter.key)
}

// required int32 value = 2;
inline bool Parameter::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Parameter::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Parameter::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Parameter::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 Parameter::value() const {
  // @@protoc_insertion_point(field_get:GraphSubst.Parameter.value)
  return value_;
}
inline void Parameter::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.Parameter.value)
}

// -------------------------------------------------------------------

// Tensor

// required int32 opId = 1;
inline bool Tensor::has_opid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Tensor::set_has_opid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Tensor::clear_has_opid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Tensor::clear_opid() {
  opid_ = 0;
  clear_has_opid();
}
inline ::google::protobuf::int32 Tensor::opid() const {
  // @@protoc_insertion_point(field_get:GraphSubst.Tensor.opId)
  return opid_;
}
inline void Tensor::set_opid(::google::protobuf::int32 value) {
  set_has_opid();
  opid_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.Tensor.opId)
}

// required int32 tsId = 2;
inline bool Tensor::has_tsid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Tensor::set_has_tsid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Tensor::clear_has_tsid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Tensor::clear_tsid() {
  tsid_ = 0;
  clear_has_tsid();
}
inline ::google::protobuf::int32 Tensor::tsid() const {
  // @@protoc_insertion_point(field_get:GraphSubst.Tensor.tsId)
  return tsid_;
}
inline void Tensor::set_tsid(::google::protobuf::int32 value) {
  set_has_tsid();
  tsid_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.Tensor.tsId)
}

// -------------------------------------------------------------------

// Operator

// required int32 type = 1;
inline bool Operator::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Operator::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Operator::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Operator::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 Operator::type() const {
  // @@protoc_insertion_point(field_get:GraphSubst.Operator.type)
  return type_;
}
inline void Operator::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.Operator.type)
}

// repeated .GraphSubst.Tensor input = 2;
inline int Operator::input_size() const {
  return input_.size();
}
inline void Operator::clear_input() {
  input_.Clear();
}
inline const ::GraphSubst::Tensor& Operator::input(int index) const {
  // @@protoc_insertion_point(field_get:GraphSubst.Operator.input)
  return input_.Get(index);
}
inline ::GraphSubst::Tensor* Operator::mutable_input(int index) {
  // @@protoc_insertion_point(field_mutable:GraphSubst.Operator.input)
  return input_.Mutable(index);
}
inline ::GraphSubst::Tensor* Operator::add_input() {
  // @@protoc_insertion_point(field_add:GraphSubst.Operator.input)
  return input_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GraphSubst::Tensor >*
Operator::mutable_input() {
  // @@protoc_insertion_point(field_mutable_list:GraphSubst.Operator.input)
  return &input_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Tensor >&
Operator::input() const {
  // @@protoc_insertion_point(field_list:GraphSubst.Operator.input)
  return input_;
}

// repeated .GraphSubst.Parameter para = 3;
inline int Operator::para_size() const {
  return para_.size();
}
inline void Operator::clear_para() {
  para_.Clear();
}
inline const ::GraphSubst::Parameter& Operator::para(int index) const {
  // @@protoc_insertion_point(field_get:GraphSubst.Operator.para)
  return para_.Get(index);
}
inline ::GraphSubst::Parameter* Operator::mutable_para(int index) {
  // @@protoc_insertion_point(field_mutable:GraphSubst.Operator.para)
  return para_.Mutable(index);
}
inline ::GraphSubst::Parameter* Operator::add_para() {
  // @@protoc_insertion_point(field_add:GraphSubst.Operator.para)
  return para_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GraphSubst::Parameter >*
Operator::mutable_para() {
  // @@protoc_insertion_point(field_mutable_list:GraphSubst.Operator.para)
  return &para_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Parameter >&
Operator::para() const {
  // @@protoc_insertion_point(field_list:GraphSubst.Operator.para)
  return para_;
}

// -------------------------------------------------------------------

// MapOutput

// required int32 srcOpId = 1;
inline bool MapOutput::has_srcopid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MapOutput::set_has_srcopid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MapOutput::clear_has_srcopid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MapOutput::clear_srcopid() {
  srcopid_ = 0;
  clear_has_srcopid();
}
inline ::google::protobuf::int32 MapOutput::srcopid() const {
  // @@protoc_insertion_point(field_get:GraphSubst.MapOutput.srcOpId)
  return srcopid_;
}
inline void MapOutput::set_srcopid(::google::protobuf::int32 value) {
  set_has_srcopid();
  srcopid_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.MapOutput.srcOpId)
}

// required int32 dstOpId = 2;
inline bool MapOutput::has_dstopid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MapOutput::set_has_dstopid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MapOutput::clear_has_dstopid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MapOutput::clear_dstopid() {
  dstopid_ = 0;
  clear_has_dstopid();
}
inline ::google::protobuf::int32 MapOutput::dstopid() const {
  // @@protoc_insertion_point(field_get:GraphSubst.MapOutput.dstOpId)
  return dstopid_;
}
inline void MapOutput::set_dstopid(::google::protobuf::int32 value) {
  set_has_dstopid();
  dstopid_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.MapOutput.dstOpId)
}

// required int32 srcTsId = 3;
inline bool MapOutput::has_srctsid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MapOutput::set_has_srctsid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MapOutput::clear_has_srctsid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MapOutput::clear_srctsid() {
  srctsid_ = 0;
  clear_has_srctsid();
}
inline ::google::protobuf::int32 MapOutput::srctsid() const {
  // @@protoc_insertion_point(field_get:GraphSubst.MapOutput.srcTsId)
  return srctsid_;
}
inline void MapOutput::set_srctsid(::google::protobuf::int32 value) {
  set_has_srctsid();
  srctsid_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.MapOutput.srcTsId)
}

// required int32 dstTsId = 4;
inline bool MapOutput::has_dsttsid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MapOutput::set_has_dsttsid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MapOutput::clear_has_dsttsid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MapOutput::clear_dsttsid() {
  dsttsid_ = 0;
  clear_has_dsttsid();
}
inline ::google::protobuf::int32 MapOutput::dsttsid() const {
  // @@protoc_insertion_point(field_get:GraphSubst.MapOutput.dstTsId)
  return dsttsid_;
}
inline void MapOutput::set_dsttsid(::google::protobuf::int32 value) {
  set_has_dsttsid();
  dsttsid_ = value;
  // @@protoc_insertion_point(field_set:GraphSubst.MapOutput.dstTsId)
}

// -------------------------------------------------------------------

// Rule

// repeated .GraphSubst.Operator srcOp = 1;
inline int Rule::srcop_size() const {
  return srcop_.size();
}
inline void Rule::clear_srcop() {
  srcop_.Clear();
}
inline const ::GraphSubst::Operator& Rule::srcop(int index) const {
  // @@protoc_insertion_point(field_get:GraphSubst.Rule.srcOp)
  return srcop_.Get(index);
}
inline ::GraphSubst::Operator* Rule::mutable_srcop(int index) {
  // @@protoc_insertion_point(field_mutable:GraphSubst.Rule.srcOp)
  return srcop_.Mutable(index);
}
inline ::GraphSubst::Operator* Rule::add_srcop() {
  // @@protoc_insertion_point(field_add:GraphSubst.Rule.srcOp)
  return srcop_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >*
Rule::mutable_srcop() {
  // @@protoc_insertion_point(field_mutable_list:GraphSubst.Rule.srcOp)
  return &srcop_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >&
Rule::srcop() const {
  // @@protoc_insertion_point(field_list:GraphSubst.Rule.srcOp)
  return srcop_;
}

// repeated .GraphSubst.Operator dstOp = 2;
inline int Rule::dstop_size() const {
  return dstop_.size();
}
inline void Rule::clear_dstop() {
  dstop_.Clear();
}
inline const ::GraphSubst::Operator& Rule::dstop(int index) const {
  // @@protoc_insertion_point(field_get:GraphSubst.Rule.dstOp)
  return dstop_.Get(index);
}
inline ::GraphSubst::Operator* Rule::mutable_dstop(int index) {
  // @@protoc_insertion_point(field_mutable:GraphSubst.Rule.dstOp)
  return dstop_.Mutable(index);
}
inline ::GraphSubst::Operator* Rule::add_dstop() {
  // @@protoc_insertion_point(field_add:GraphSubst.Rule.dstOp)
  return dstop_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >*
Rule::mutable_dstop() {
  // @@protoc_insertion_point(field_mutable_list:GraphSubst.Rule.dstOp)
  return &dstop_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Operator >&
Rule::dstop() const {
  // @@protoc_insertion_point(field_list:GraphSubst.Rule.dstOp)
  return dstop_;
}

// repeated .GraphSubst.MapOutput mappedOutput = 3;
inline int Rule::mappedoutput_size() const {
  return mappedoutput_.size();
}
inline void Rule::clear_mappedoutput() {
  mappedoutput_.Clear();
}
inline const ::GraphSubst::MapOutput& Rule::mappedoutput(int index) const {
  // @@protoc_insertion_point(field_get:GraphSubst.Rule.mappedOutput)
  return mappedoutput_.Get(index);
}
inline ::GraphSubst::MapOutput* Rule::mutable_mappedoutput(int index) {
  // @@protoc_insertion_point(field_mutable:GraphSubst.Rule.mappedOutput)
  return mappedoutput_.Mutable(index);
}
inline ::GraphSubst::MapOutput* Rule::add_mappedoutput() {
  // @@protoc_insertion_point(field_add:GraphSubst.Rule.mappedOutput)
  return mappedoutput_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GraphSubst::MapOutput >*
Rule::mutable_mappedoutput() {
  // @@protoc_insertion_point(field_mutable_list:GraphSubst.Rule.mappedOutput)
  return &mappedoutput_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GraphSubst::MapOutput >&
Rule::mappedoutput() const {
  // @@protoc_insertion_point(field_list:GraphSubst.Rule.mappedOutput)
  return mappedoutput_;
}

// -------------------------------------------------------------------

// RuleCollection

// repeated .GraphSubst.Rule rule = 1;
inline int RuleCollection::rule_size() const {
  return rule_.size();
}
inline void RuleCollection::clear_rule() {
  rule_.Clear();
}
inline const ::GraphSubst::Rule& RuleCollection::rule(int index) const {
  // @@protoc_insertion_point(field_get:GraphSubst.RuleCollection.rule)
  return rule_.Get(index);
}
inline ::GraphSubst::Rule* RuleCollection::mutable_rule(int index) {
  // @@protoc_insertion_point(field_mutable:GraphSubst.RuleCollection.rule)
  return rule_.Mutable(index);
}
inline ::GraphSubst::Rule* RuleCollection::add_rule() {
  // @@protoc_insertion_point(field_add:GraphSubst.RuleCollection.rule)
  return rule_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GraphSubst::Rule >*
RuleCollection::mutable_rule() {
  // @@protoc_insertion_point(field_mutable_list:GraphSubst.RuleCollection.rule)
  return &rule_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GraphSubst::Rule >&
RuleCollection::rule() const {
  // @@protoc_insertion_point(field_list:GraphSubst.RuleCollection.rule)
  return rule_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace GraphSubst

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rules_2eproto__INCLUDED
