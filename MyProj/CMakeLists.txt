file(GLOB_RECURSE src_files "src/*.cpp")

add_executable(MyProj ${src_files})
target_include_directories(MyProj PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(MyProj PRIVATE ACTFramework ACTFWExamplesCommon)
target_link_libraries(MyProj PUBLIC ActsCore)
target_link_libraries(MyProj PRIVATE ${Boost_LIBRARIES})

install(TARGETS MyProj RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
