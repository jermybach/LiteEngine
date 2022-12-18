add_library(rendersystem STATIC)
target_link_libraries(rendersystem PUBLIC glad)
target_sources(rendersystem 
PRIVATE
	"IFont.h"
	"IRenderSystem.h"
	"opengl/CFontGL.h"
	"opengl/CRenderSystemGL.cpp"
	"opengl/CRenderSystemGL.h"
	"opengl/GL_Local.h"

)