#pragma once
#include "core/Precompiled.h"
#include "rendersystem/IRenderSystem.h"

class CRenderSystemGL : public IRenderSystem
{
public:
    // Inherited via IRenderSystem
    virtual IFont *LoadFont(const char *pathToFont, int size) override;
};

