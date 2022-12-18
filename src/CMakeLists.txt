include_directories("${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_BINARY_DIR}")
configure_file(Config.h.in Config.h)

add_subdirectory(addonmanager)
add_subdirectory(core)
add_subdirectory(framework)
add_subdirectory(rendersystem)
add_subdirectory(sys)
