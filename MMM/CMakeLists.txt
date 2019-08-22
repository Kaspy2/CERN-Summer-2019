set(_common_libraries
  ActsCore
  ACTFramework
  ACTFWExamplesCommon
  ${Boost_LIBRARIES})

set(_plugin_libraries
  ACTFWRootPlugin
  ACTFWJsonPlugin
  ACTFWBFieldPlugin
  ACTFWPlyPlugin)

add_executable(BMM src/BasicMM.cpp)
target_include_directories(BMM PRIVATE 
  ${Boost_INCLUDE_DIRS})
target_link_libraries(BMM PRIVATE 
  ${_common_libraries} ${_plugin_libraries})
target_link_libraries(BMM PRIVATE 
  ACTFWMaterialMapping ACTFWGenericDetector)
install(TARGETS BMM RUNTIME DESTINATION 
  ${CMAKE_INSTALL_BINDIR})
