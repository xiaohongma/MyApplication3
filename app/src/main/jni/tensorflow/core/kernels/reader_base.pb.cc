// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/kernels/reader_base.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/kernels/reader_base.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::Descriptor* ReaderBaseState_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ReaderBaseState_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/kernels/reader_base.proto");
  GOOGLE_CHECK(file != NULL);
  ReaderBaseState_descriptor_ = file->message_type(0);
  static const int ReaderBaseState_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReaderBaseState, work_started_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReaderBaseState, work_finished_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReaderBaseState, num_records_produced_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReaderBaseState, current_work_),
  };
  ReaderBaseState_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ReaderBaseState_descriptor_,
      ReaderBaseState::default_instance_,
      ReaderBaseState_offsets_,
      -1,
      -1,
      -1,
      sizeof(ReaderBaseState),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReaderBaseState, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReaderBaseState, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ReaderBaseState_descriptor_, &ReaderBaseState::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto() {
  delete ReaderBaseState::default_instance_;
  delete ReaderBaseState_reflection_;
}

void protobuf_AddDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n)tensorflow/core/kernels/reader_base.pr"
    "oto\022\ntensorflow\"r\n\017ReaderBaseState\022\024\n\014wo"
    "rk_started\030\001 \001(\003\022\025\n\rwork_finished\030\002 \001(\003\022"
    "\034\n\024num_records_produced\030\003 \001(\003\022\024\n\014current"
    "_work\030\004 \001(\014b\006proto3", 179);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/kernels/reader_base.proto", &protobuf_RegisterTypes);
  ReaderBaseState::default_instance_ = new ReaderBaseState();
  ReaderBaseState::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int ReaderBaseState::kWorkStartedFieldNumber;
const int ReaderBaseState::kWorkFinishedFieldNumber;
const int ReaderBaseState::kNumRecordsProducedFieldNumber;
const int ReaderBaseState::kCurrentWorkFieldNumber;
#endif  // !_MSC_VER

ReaderBaseState::ReaderBaseState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ReaderBaseState)
}

void ReaderBaseState::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ReaderBaseState::ReaderBaseState(const ReaderBaseState& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.ReaderBaseState)
}

void ReaderBaseState::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  work_started_ = GOOGLE_LONGLONG(0);
  work_finished_ = GOOGLE_LONGLONG(0);
  num_records_produced_ = GOOGLE_LONGLONG(0);
  current_work_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ReaderBaseState::~ReaderBaseState() {
  // @@protoc_insertion_point(destructor:tensorflow.ReaderBaseState)
  SharedDtor();
}

void ReaderBaseState::SharedDtor() {
  current_work_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ReaderBaseState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReaderBaseState::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReaderBaseState_descriptor_;
}

const ReaderBaseState& ReaderBaseState::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();
  return *default_instance_;
}

ReaderBaseState* ReaderBaseState::default_instance_ = NULL;

ReaderBaseState* ReaderBaseState::New(::google::protobuf::Arena* arena) const {
  ReaderBaseState* n = new ReaderBaseState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReaderBaseState::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ReaderBaseState*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(work_started_, num_records_produced_);
  current_work_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool ReaderBaseState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ReaderBaseState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 work_started = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &work_started_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_work_finished;
        break;
      }

      // optional int64 work_finished = 2;
      case 2: {
        if (tag == 16) {
         parse_work_finished:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &work_finished_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_num_records_produced;
        break;
      }

      // optional int64 num_records_produced = 3;
      case 3: {
        if (tag == 24) {
         parse_num_records_produced:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &num_records_produced_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_current_work;
        break;
      }

      // optional bytes current_work = 4;
      case 4: {
        if (tag == 34) {
         parse_current_work:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_current_work()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.ReaderBaseState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ReaderBaseState)
  return false;
#undef DO_
}

void ReaderBaseState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ReaderBaseState)
  // optional int64 work_started = 1;
  if (this->work_started() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->work_started(), output);
  }

  // optional int64 work_finished = 2;
  if (this->work_finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->work_finished(), output);
  }

  // optional int64 num_records_produced = 3;
  if (this->num_records_produced() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->num_records_produced(), output);
  }

  // optional bytes current_work = 4;
  if (this->current_work().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->current_work(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.ReaderBaseState)
}

::google::protobuf::uint8* ReaderBaseState::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ReaderBaseState)
  // optional int64 work_started = 1;
  if (this->work_started() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->work_started(), target);
  }

  // optional int64 work_finished = 2;
  if (this->work_finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->work_finished(), target);
  }

  // optional int64 num_records_produced = 3;
  if (this->num_records_produced() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->num_records_produced(), target);
  }

  // optional bytes current_work = 4;
  if (this->current_work().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->current_work(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ReaderBaseState)
  return target;
}

int ReaderBaseState::ByteSize() const {
  int total_size = 0;

  // optional int64 work_started = 1;
  if (this->work_started() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->work_started());
  }

  // optional int64 work_finished = 2;
  if (this->work_finished() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->work_finished());
  }

  // optional int64 num_records_produced = 3;
  if (this->num_records_produced() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->num_records_produced());
  }

  // optional bytes current_work = 4;
  if (this->current_work().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->current_work());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReaderBaseState::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ReaderBaseState* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ReaderBaseState>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ReaderBaseState::MergeFrom(const ReaderBaseState& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.work_started() != 0) {
    set_work_started(from.work_started());
  }
  if (from.work_finished() != 0) {
    set_work_finished(from.work_finished());
  }
  if (from.num_records_produced() != 0) {
    set_num_records_produced(from.num_records_produced());
  }
  if (from.current_work().size() > 0) {

    current_work_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_work_);
  }
}

void ReaderBaseState::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReaderBaseState::CopyFrom(const ReaderBaseState& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReaderBaseState::IsInitialized() const {

  return true;
}

void ReaderBaseState::Swap(ReaderBaseState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReaderBaseState::InternalSwap(ReaderBaseState* other) {
  std::swap(work_started_, other->work_started_);
  std::swap(work_finished_, other->work_finished_);
  std::swap(num_records_produced_, other->num_records_produced_);
  current_work_.Swap(&other->current_work_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReaderBaseState::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ReaderBaseState_descriptor_;
  metadata.reflection = ReaderBaseState_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReaderBaseState

// optional int64 work_started = 1;
void ReaderBaseState::clear_work_started() {
  work_started_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ReaderBaseState::work_started() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.work_started)
  return work_started_;
}
 void ReaderBaseState::set_work_started(::google::protobuf::int64 value) {
  
  work_started_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.work_started)
}

// optional int64 work_finished = 2;
void ReaderBaseState::clear_work_finished() {
  work_finished_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ReaderBaseState::work_finished() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.work_finished)
  return work_finished_;
}
 void ReaderBaseState::set_work_finished(::google::protobuf::int64 value) {
  
  work_finished_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.work_finished)
}

// optional int64 num_records_produced = 3;
void ReaderBaseState::clear_num_records_produced() {
  num_records_produced_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 ReaderBaseState::num_records_produced() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.num_records_produced)
  return num_records_produced_;
}
 void ReaderBaseState::set_num_records_produced(::google::protobuf::int64 value) {
  
  num_records_produced_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.num_records_produced)
}

// optional bytes current_work = 4;
void ReaderBaseState::clear_current_work() {
  current_work_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ReaderBaseState::current_work() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.current_work)
  return current_work_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ReaderBaseState::set_current_work(const ::std::string& value) {
  
  current_work_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.current_work)
}
 void ReaderBaseState::set_current_work(const char* value) {
  
  current_work_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.ReaderBaseState.current_work)
}
 void ReaderBaseState::set_current_work(const void* value, size_t size) {
  
  current_work_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ReaderBaseState.current_work)
}
 ::std::string* ReaderBaseState::mutable_current_work() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ReaderBaseState.current_work)
  return current_work_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ReaderBaseState::release_current_work() {
  
  return current_work_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ReaderBaseState::set_allocated_current_work(::std::string* current_work) {
  if (current_work != NULL) {
    
  } else {
    
  }
  current_work_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_work);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ReaderBaseState.current_work)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
