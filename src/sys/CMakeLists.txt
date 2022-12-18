add_library(sys STATIC)

target_sources(sys PUBLIC
"Sys_Public.h"
"win32/SysWin32.cpp"
"win32/SysWin32.h"
)