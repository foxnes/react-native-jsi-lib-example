cmake_minimum_required(VERSION 3.4.1)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

file(TO_CMAKE_PATH "${NODE_MODULES_DIR}/react-native/ReactCommon/jsi/jsi/jsi.cpp" libPath)

# Specifies a path to native header files.
include_directories(
        ../cpp
        "${NODE_MODULES_DIR}/react-native/React"
        "${NODE_MODULES_DIR}/react-native/React/Base"
        "${NODE_MODULES_DIR}/react-native/ReactCommon/jsi"
)


add_library(cpp
            SHARED
            ${libPath}
            ../cpp/react-native-fast-jsi-lib.cpp
            ../cpp/react-native-fast-jsi-lib.h
            cpp-adapter.cpp
)

target_link_libraries(cpp)
