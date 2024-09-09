cmake_minimum_required(VERSION 3.15)
project(ProjectTest LANGUAGES C CXX)

# 啟用Google單元測試
include(CTest)
enable_testing()
if(BUILD_TESTING)
  message(STATUS  "Test!!! " ${BUILD_TESTING})
  ADD_SUBDIRECTORY(test)
endif()

ADD_SUBDIRECTORY(src bin)
