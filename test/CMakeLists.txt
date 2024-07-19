enable_testing()
find_package(GTest REQUIRED)

file(GLOB_RECURSE TEST_FILES
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  CONFIGURE_DEPENDS
  *_tests.cpp)

include(GoogleTest)

foreach(TEST_FILE ${TEST_FILES})
  string(REGEX REPLACE "\.cpp" "" TEST ${TEST_FILE})
  string(REGEX REPLACE "/" "-" TEST ${TEST_FILE})
  add_executable(${TEST} ${TEST_FILE})
  target_link_libraries(${TEST} designpatterns GTest::gtest_main GTest::gmock)
  gtest_discover_tests(${TEST})
endforeach()
