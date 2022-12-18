#pragma once
#include "../core/Precompiled.h"

struct ADDON_HEADER
{
    char8_t s;
};

class IAddon
{
public:
    virtual const char *GetName() = 0;
    virtual const char *GetPath() = 0;
    virtual bool LoadFile(const char *filename, size_t *pSize,
                          void **ppData) = 0;
    virtual uint32_t GetId() = 0;

};

