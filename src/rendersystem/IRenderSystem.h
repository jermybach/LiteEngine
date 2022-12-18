#pragma once

#include "IFont.h"

class IRenderSystem
{

public:

    virtual IFont *LoadFont(const char *pathToFont, int size) = 0;

};

extern IRenderSystem *rendersystem;
