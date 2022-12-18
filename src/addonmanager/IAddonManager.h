#pragma once
#include "IAddon.h"

class AddonPath : public Str
{
public:
    uint32_t GetId();
};

class IAddonManager
{
public:
    virtual IAddon *GetAddon(const char *name) = 0;
    virtual IAddon *GetAddon(uint32_t id) = 0;

    virtual void MountAddon(const Str &path) = 0;
    virtual void UnmountAddon

};

extern IAddonManager *addonmanager;
