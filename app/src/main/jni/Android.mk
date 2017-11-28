LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := tensorflow_jni
LOCAL_SHORT_COMMANDS  := true
#LOCAL_CPP_EXTENSION   := .cpp .cc .h

# JNI Sources
FILE_LIST :=    tensorflow_jni.cc imageutils_jni.cc jni_utils.cc yuv2rgb.cc rgb2yuv.cc valgrind_stub.cc

# Core OPS
FILE_LIST +=    tensorflow/core/kernels/aggregate_ops.cc \
            #    tensorflow/core/kernels/aggregate_ops.h \
             #   tensorflow/core/kernels/assign_op.h \
                tensorflow/core/kernels/bias_op.cc \
              #  tensorflow/core/kernels/bias_op.h \
                tensorflow/core/kernels/cast_op.cc \
               # tensorflow/core/kernels/cast_op.h \
                tensorflow/core/kernels/concat_op.cc \
                #tensorflow/core/kernels/concat_op.h \
                tensorflow/core/kernels/concat_op_cpu.cc \
                tensorflow/core/kernels/constant_op.cc \
        #        tensorflow/core/kernels/constant_op.h \
         #       tensorflow/core/kernels/cwise_ops.h \
                tensorflow/core/kernels/cwise_ops_common.cc \
          #      tensorflow/core/kernels/cwise_ops_common.h \
                tensorflow/core/kernels/dense_update_ops.cc \
           #     tensorflow/core/kernels/dense_update_ops.h \
            #    tensorflow/core/kernels/fill_functor.h \
                tensorflow/core/kernels/gather_op.cc \
                tensorflow/core/kernels/identity_op.cc \
             #   tensorflow/core/kernels/identity_op.h \
                tensorflow/core/kernels/matmul_op.cc \
              #  tensorflow/core/kernels/matmul_op.h \
                tensorflow/core/kernels/no_op.cc \
                tensorflow/core/kernels/pack_op.cc \
                tensorflow/core/kernels/reshape_op.cc \
                tensorflow/core/kernels/reverse_sequence_op.cc \
                tensorflow/core/kernels/sendrecv_ops.cc \
                tensorflow/core/kernels/sequence_ops.cc \
                tensorflow/core/kernels/shape_ops.cc \
                tensorflow/core/kernels/slice_op.cc \
                tensorflow/core/kernels/softmax_op.cc \
                tensorflow/core/kernels/split_op.cc \
                tensorflow/core/kernels/split_op_cpu.cc \
                tensorflow/core/kernels/unpack_op.cc \
                tensorflow/core/kernels/variable_ops.cc \
                tensorflow/core/kernels/avgpooling_op.cc \
                tensorflow/core/kernels/control_flow_ops.cc \
                tensorflow/core/kernels/conv_ops.cc \
                tensorflow/core/kernels/cwise_op_add.cc \
                tensorflow/core/kernels/cwise_op_div.cc \
                tensorflow/core/kernels/cwise_op_exp.cc \
                tensorflow/core/kernels/cwise_op_log.cc \
                tensorflow/core/kernels/cwise_op_mul.cc \
                tensorflow/core/kernels/cwise_op_sigmoid.cc \
                tensorflow/core/kernels/cwise_op_sqrt.cc \
                tensorflow/core/kernels/cwise_op_square.cc \
                tensorflow/core/kernels/cwise_op_sub.cc \
                tensorflow/core/kernels/cwise_op_tanh.cc \
                tensorflow/core/kernels/lrn_op.cc \
                tensorflow/core/kernels/maxpooling_op.cc \
                tensorflow/core/kernels/reduction_ops_max.cc \
                tensorflow/core/kernels/reduction_ops_min.cc \
                tensorflow/core/kernels/reduction_ops_sum.cc \
                tensorflow/core/kernels/relu_op.cc \
                tensorflow/core/kernels/softplus_op.cc \
                tensorflow/core/kernels/transpose_op.cc \
                tensorflow/core/client/tensor_c_api.cc \
                tensorflow/core/common_runtime/device.cc \
                tensorflow/core/common_runtime/device_factory.cc \
                tensorflow/core/common_runtime/device_mgr.cc \
                tensorflow/core/common_runtime/device_set.cc \
                tensorflow/core/common_runtime/direct_session.cc \
                tensorflow/core/common_runtime/executor.cc \
                tensorflow/core/common_runtime/function.cc \
                tensorflow/core/common_runtime/local_device.cc \
                tensorflow/core/common_runtime/rendezvous_mgr.cc \
                tensorflow/core/common_runtime/session.cc \
                tensorflow/core/common_runtime/session_factory.cc \
                tensorflow/core/common_runtime/session_options.cc \
                tensorflow/core/common_runtime/simple_placer.cc \
                tensorflow/core/common_runtime/threadpool_device.cc \
                tensorflow/core/common_runtime/threadpool_device_factory.cc \
                tensorflow/core/framework/allocator.cc \
                tensorflow/core/framework/attr_value_util.cc \
                tensorflow/core/framework/bfloat16.cc \
                tensorflow/core/framework/cancellation.cc \
                tensorflow/core/framework/device_base.cc \
                tensorflow/core/framework/fake_input.cc \
                tensorflow/core/framework/function.cc \
                tensorflow/core/framework/graph_def_util.cc \
                tensorflow/core/framework/kernel_def_builder.cc \
                tensorflow/core/framework/lookup_interface.cc \
                tensorflow/core/framework/node_def_builder.cc \
                tensorflow/core/framework/node_def_util.cc \
                tensorflow/core/framework/op.cc \
                tensorflow/core/framework/op_def_builder.cc \
                tensorflow/core/framework/op_def_util.cc \
                tensorflow/core/framework/op_gen_lib.cc \
                tensorflow/core/framework/op_kernel.cc \
                tensorflow/core/framework/op_segment.cc \
                tensorflow/core/framework/reader_op_kernel.cc \
                tensorflow/core/framework/rendezvous.cc \
                tensorflow/core/framework/resource_mgr.cc \
                tensorflow/core/framework/tensor.cc \
                tensorflow/core/framework/tensor_shape.cc \
                tensorflow/core/framework/tensor_slice.cc \
                tensorflow/core/framework/tensor_util.cc \
                tensorflow/core/framework/tracking_allocator.cc \
                tensorflow/core/framework/types.cc \
                tensorflow/core/graph/algorithm.cc \
                tensorflow/core/graph/colors.cc \
                tensorflow/core/graph/costmodel.cc \
                tensorflow/core/graph/costutil.cc \
                tensorflow/core/graph/dot.cc \
                tensorflow/core/graph/edgeset.cc \
                tensorflow/core/graph/equal_graph_def.cc \
                tensorflow/core/graph/graph.cc \
                tensorflow/core/graph/graph_constructor.cc \
                tensorflow/core/graph/graph_def_builder.cc \
                tensorflow/core/graph/graph_partition.cc \
                tensorflow/core/graph/node_builder.cc \
                tensorflow/core/graph/optimizer_cse.cc \
                tensorflow/core/graph/subgraph.cc \
                tensorflow/core/graph/tensor_id.cc \
                tensorflow/core/lib/core/arena.cc \
                tensorflow/core/lib/core/coding.cc \
                tensorflow/core/lib/core/command_line_flags.cc \
                tensorflow/core/lib/core/refcount.cc \
                tensorflow/core/lib/core/status.cc \
                tensorflow/core/lib/core/stringpiece.cc \
                tensorflow/core/lib/core/threadpool.cc \
                tensorflow/core/lib/hash/crc32c.cc \
                tensorflow/core/lib/hash/hash.cc \
                tensorflow/core/lib/histogram/histogram.cc \
                tensorflow/core/lib/io/block.cc \
                tensorflow/core/lib/io/block_builder.cc \
                tensorflow/core/lib/io/format.cc \
                tensorflow/core/lib/io/inputbuffer.cc \
                tensorflow/core/lib/io/iterator.cc \
                tensorflow/core/lib/io/match.cc \
                tensorflow/core/lib/io/path.cc \
                tensorflow/core/lib/io/record_reader.cc \
                tensorflow/core/lib/io/record_writer.cc \
                tensorflow/core/lib/io/table.cc \
                tensorflow/core/lib/io/table_builder.cc \
                tensorflow/core/lib/io/two_level_iterator.cc \
                tensorflow/core/lib/random/distribution_sampler.cc \
                tensorflow/core/lib/random/random.cc \
                tensorflow/core/lib/random/simple_philox.cc \
                tensorflow/core/lib/random/weighted_picker.cc \
                tensorflow/core/lib/strings/numbers.cc \
                tensorflow/core/lib/strings/ordered_code.cc \
                tensorflow/core/lib/strings/str_util.cc \
                tensorflow/core/lib/strings/strcat.cc \
                tensorflow/core/lib/strings/stringprintf.cc \
                tensorflow/core/ops/array_ops.cc \
                tensorflow/core/ops/attention_ops.cc \
                tensorflow/core/ops/candidate_sampling_ops.cc \
                tensorflow/core/ops/control_flow_ops.cc \
                tensorflow/core/ops/data_flow_ops.cc \
                tensorflow/core/ops/image_ops.cc \
                tensorflow/core/ops/io_ops.cc \
                tensorflow/core/ops/linalg_ops.cc \
                tensorflow/core/ops/logging_ops.cc \
                tensorflow/core/ops/math_ops.cc \
                tensorflow/core/ops/nn_ops.cc \
                tensorflow/core/ops/no_op.cc \
                tensorflow/core/ops/parsing_ops.cc \
                tensorflow/core/ops/random_ops.cc \
                tensorflow/core/ops/sendrecv_ops.cc \
                tensorflow/core/ops/sparse_ops.cc \
                tensorflow/core/ops/state_ops.cc \
                tensorflow/core/ops/string_ops.cc \
                tensorflow/core/ops/summary_ops.cc \
                tensorflow/core/ops/training_ops.cc \
                tensorflow/core/platform/default/logging.cc \
                tensorflow/core/platform/default/test_benchmark.cc \
                tensorflow/core/platform/default/tracing.cc \
                tensorflow/core/platform/env.cc \
                tensorflow/core/platform/posix/env.cc \
                tensorflow/core/platform/posix/port.cc \
                tensorflow/core/platform/protobuf_util.cc \
                tensorflow/core/platform/tensor_coding.cc \
                tensorflow/core/platform/tracing.cc \
                tensorflow/core/util/bcast.cc \
                tensorflow/core/util/device_name_utils.cc \
                tensorflow/core/util/guarded_philox_random.cc \
                tensorflow/core/util/padding.cc \
                tensorflow/core/util/port.cc \
                tensorflow/core/util/saved_tensor_slice_util.cc \
                tensorflow/core/util/sparse/group_iterator.cc \
                tensorflow/core/util/tensor_slice_reader.cc \
                tensorflow/core/util/tensor_slice_reader_cache.cc \
                tensorflow/core/util/tensor_slice_set.cc \
                tensorflow/core/util/tensor_slice_writer.cc \
                tensorflow/core/util/use_cudnn.cc \
                tensorflow/core/util/util.cc \
                tensorflow/core/util/work_sharder.cc \
                tensorflow/core/kernels/ops_util.cc \
                tensorflow/core/kernels/pooling_ops_common.cc \
                external/re2/re2/bitstate.cc \
                external/re2/re2/filtered_re2.cc \
                external/re2/re2/onepass.cc \
                external/re2/re2/prefilter.cc \
                external/re2/re2/re2.cc \
                external/re2/re2/simplify.cc \
                external/re2/re2/unicode_casefold.cc \
                external/re2/re2/compile.cc \
                external/re2/re2/mimics_pcre.cc \
                external/re2/re2/parse.cc \
                external/re2/re2/prefilter_tree.cc \
                external/re2/re2/regexp.cc \
                external/re2/re2/stringpiece.cc \
                external/re2/re2/unicode_groups.cc \
                external/re2/re2/dfa.cc \
                external/re2/re2/nfa.cc \
                external/re2/re2/perl_groups.cc \
                external/re2/re2/prog.cc \
                external/re2/re2/set.cc \
                external/re2/re2/tostring.cc \
                external/re2/util/benchmark.cc \
                external/re2/util/logging.cc \
                external/re2/util/random.cc \
                external/re2/util/stringprintf.cc \
                external/re2/util/hash.cc \
                external/re2/util/pcre.cc \
                external/re2/util/rune.cc \
                external/re2/util/strutil.cc \
                external/re2/util/thread.cc \
                google/protobuf/any.cc \
                google/protobuf/type.pb.cc \
                google/protobuf/any.pb.cc \
                google/protobuf/api.pb.cc \
                google/protobuf/arena.cc \
                google/protobuf/arenastring.cc \
                google/protobuf/descriptor.cc \
                google/protobuf/descriptor.pb.cc \
                google/protobuf/descriptor_database.cc \
                google/protobuf/duration.pb.cc \
                google/protobuf/dynamic_message.cc \
                google/protobuf/empty.pb.cc \
                google/protobuf/extension_set.cc \
                google/protobuf/extension_set_heavy.cc \
                google/protobuf/field_mask.pb.cc \
                google/protobuf/generated_message_reflection.cc \
                google/protobuf/generated_message_util.cc \
                google/protobuf/map_field.cc \
                google/protobuf/message.cc \
                google/protobuf/message_lite.cc \
                google/protobuf/reflection_ops.cc \
                google/protobuf/repeated_field.cc \
                google/protobuf/service.cc \
                google/protobuf/source_context.pb.cc \
                google/protobuf/struct.pb.cc \
                google/protobuf/text_format.cc \
                google/protobuf/timestamp.pb.cc \
                google/protobuf/unknown_field_set.cc \
                google/protobuf/wire_format.cc \
                google/protobuf/wire_format_lite.cc \
                google/protobuf/wrappers.pb.cc \
                google/protobuf/io/coded_stream.cc \
                google/protobuf/io/gzip_stream.cc \
                google/protobuf/io/printer.cc \
                google/protobuf/io/strtod.cc \
                google/protobuf/io/tokenizer.cc \
                google/protobuf/io/zero_copy_stream.cc \
                google/protobuf/io/zero_copy_stream_impl.cc \
                google/protobuf/io/zero_copy_stream_impl_lite.cc \
                google/protobuf/stubs/atomicops_internals_x86_gcc.cc \
                google/protobuf/stubs/bytestream.cc \
                google/protobuf/stubs/common.cc \
                google/protobuf/stubs/int128.cc \
                google/protobuf/stubs/mathlimits.cc \
                google/protobuf/stubs/once.cc \
                google/protobuf/stubs/status.cc \
                google/protobuf/stubs/statusor.cc \
                google/protobuf/stubs/stringpiece.cc \
                google/protobuf/stubs/stringprintf.cc \
                google/protobuf/stubs/structurally_valid.cc \
                google/protobuf/stubs/strutil.cc \
                google/protobuf/stubs/substitute.cc \
                google/protobuf/stubs/time.cc \
                google/protobuf/util/field_comparator.cc \
                google/protobuf/util/field_mask_util.cc \
                google/protobuf/util/json_format_proto3.pb.cc \
                google/protobuf/util/json_util.cc \
                google/protobuf/util/message_differencer.cc \
                google/protobuf/util/time_util.cc \
                google/protobuf/util/type_resolver_util.cc \
                google/protobuf/util/internal/datapiece.cc \
                google/protobuf/util/internal/default_value_objectwriter.cc \
                google/protobuf/util/internal/error_listener.cc \
                google/protobuf/util/internal/field_mask_utility.cc \
                google/protobuf/util/internal/json_escaping.cc \
                google/protobuf/util/internal/json_objectwriter.cc \
                google/protobuf/util/internal/json_stream_parser.cc \
                google/protobuf/util/internal/object_writer.cc \
                google/protobuf/util/internal/protostream_objectsource.cc \
                google/protobuf/util/internal/protostream_objectwriter.cc \
                google/protobuf/util/internal/type_info.cc \
                google/protobuf/util/internal/utility.cc \
                tensorflow/core/example/example.pb.cc \
                tensorflow/core/example/feature.pb.cc \
                tensorflow/core/framework/allocation_description.pb.cc \
                tensorflow/core/framework/attr_value.pb.cc \
                tensorflow/core/framework/config.pb.cc \
                tensorflow/core/framework/device_attributes.pb.cc \
                tensorflow/core/framework/function.pb.cc \
                tensorflow/core/framework/graph.pb.cc \
                tensorflow/core/framework/kernel_def.pb.cc \
                tensorflow/core/framework/op_def.pb.cc \
                tensorflow/core/framework/step_stats.pb.cc \
                tensorflow/core/framework/summary.pb.cc \
                tensorflow/core/framework/tensor.pb.cc \
                tensorflow/core/framework/tensor_description.pb.cc \
                tensorflow/core/framework/tensor_shape.pb.cc \
                tensorflow/core/framework/tensor_slice.pb.cc \
                tensorflow/core/framework/types.pb.cc \
                tensorflow/core/kernels/reader_base.pb.cc \
                tensorflow/core/lib/core/error_codes.pb.cc \
                tensorflow/core/util/event.pb.cc \
                tensorflow/core/util/saved_tensor_slice.pb.cc \
                tensorflow/python/training/checkpoint_state.pb.cc \
                tensorflow/python/training/saver.pb.cc \
                tensorflow/python/util/protobuf/compare_test.pb.cc

LOCAL_SRC_FILES := $(FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_LDLIBS    := -llog -landroid -lm -ljnigraphics -lz
LOCAL_CPP_FEATURES += rtti exceptions

LOCAL_CPPFLAGS += -DHAVE_PTHREAD -std=c++11 -O2

ifeq ($(TARGET_ARCH_ABI),$(filter $(TARGET_ARCH_ABI), armeabi armeabi-v7a arm64-v8a))
    LOCAL_CPPFLAGS += -mfpu=neon
endif

ifeq ($(TARGET_ARCH_ABI), x86)
    LOCAL_CPPFLAGS += -mssse3
endif

LOCAL_C_INCLUDES := $(LOCAL_PATH)/third_party/eigen3 $(LOCAL_PATH)/third_party/eigen3/unsupported/Eigen/CXX11 $(LOCAL_PATH)/external/re2 \
                    $(LOCAL_PATH)/tensorflow/core/platform $(LOCAL_PATH)/tensorflow/core/kernels $(LOCAL_PATH)/tensorflow/core/util \
                    $(LOCAL_PATH)/tensorflow/core/public tensorflow/core/lib/strings $(LOCAL_PATH)/tensorflow/core/lib/random $(LOCAL_PATH)/tensorflow/core/lib/io \
                    $(LOCAL_PATH)/tensorflow/core/lib/gtl $(LOCAL_PATH)/tensorflow/core/lib/core $(LOCAL_PATH)/tensorflow/core/graph \
                    $(LOCAL_PATH)/tensorflow/core/framework $(LOCAL_PATH)/tensorflow/core/common_runtime \
                    $(LOCAL_PATH)/tensorflow/core/common_runtime/gpu $(LOCAL_PATH)/tensorflow/core/kernels
LOCAL_CPP_INCLUDES := $(LOCAL_PATH)/third_party/eigen3 $(LOCAL_PATH)/third_party/eigen3/unsupported/Eigen/CXX11 $(LOCAL_PATH)/external/re2 \
                    $(LOCAL_PATH)/tensorflow/core/platform $(LOCAL_PATH)/tensorflow/core/kernels $(LOCAL_PATH)/tensorflow/core/util \
                    $(LOCAL_PATH)/tensorflow/core/public tensorflow/core/lib/strings $(LOCAL_PATH)/tensorflow/core/lib/random $(LOCAL_PATH)/tensorflow/core/lib/io \
                    $(LOCAL_PATH)/tensorflow/core/lib/gtl $(LOCAL_PATH)/tensorflow/core/lib/core $(LOCAL_PATH)/tensorflow/core/graph \
                    $(LOCAL_PATH)/tensorflow/core/framework $(LOCAL_PATH)/tensorflow/core/common_runtime \
                    $(LOCAL_PATH)/tensorflow/core/common_runtime/gpu $(LOCAL_PATH)/tensorflow/core/kernels

include $(BUILD_SHARED_LIBRARY)
