#pragma once

class ICommon
{
public:
    virtual void Init() = 0;
    virtual void Shutdown() = 0;
    virtual void Frame() = 0;

};

extern ICommon *common;
