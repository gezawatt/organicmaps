include(FetchContent)

set(protobuf_BUILD_TESTS OFF)
set(protobuf_INSTALL OFF)
set(utf8_range_ENABLE_TESTS OFF)
set(utf8_range_ENABLE_INSTALL OFF)
set(ABSL_PROPAGATE_CXX_STD ON)
FetchContent_Declare(
  protobuf
  GIT_REPOSITORY https://github.com/protocolbuffers/protobuf.git
  GIT_TAG        v29.3
)
FetchContent_MakeAvailable(protobuf)
