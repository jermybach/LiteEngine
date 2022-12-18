add_library(addonmanager STATIC)
target_link_libraries(addonmanager PUBLIC sys)
target_sources(addonmanager PUBLIC 
	"CAddonNativeWin32.cpp"
	"CAddonNativeWin32.h"
	"IAddon.h"
	"IAddonManager.h"
)
