# 使用 FetchContent 模組
include(FetchContent)
# 下載和引入 Google Test
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# 建立一個測試用的可執行檔 unit_test
add_executable(unit_test unit_test.cpp)
# 連結必要函示庫給 unit_test
target_link_libraries(unit_test PRIVATE gtest gtest_main)

# include(GoogleTest)
# gtest_discover_tests(unit_test)
add_test(
    NAME DFB_PdM_test
    COMMAND DFB_unit_test
)