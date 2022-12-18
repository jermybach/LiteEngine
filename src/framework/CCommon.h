#pragma once
#include "ICommon.h"

class CCommon : public ICommon
{
public:
    CCommon() = default;
    ~CCommon() = default;

    virtual void Init();
    virtual void Shutdown();
    virtual void Frame();
};

