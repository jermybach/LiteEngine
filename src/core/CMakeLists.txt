add_library(core STATIC)
target_precompile_headers(core PUBLIC "Precompiled.h")
target_sources(core 
PRIVATE
"Core.cpp"
"Precompiled.h"
 "Str.h")