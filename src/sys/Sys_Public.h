#pragma once

enum EKeyCode
{
    EKEY_A = 'a',
    EKEY_B,
    EKEY_C,
    EKEY_D,
    EKEY_E,
    EKEY_F,
    EKEY_G,
    EKEY_H,
    EKEY_I,
    EKEY_J,
    EKEY_K,
    EKEY_L,
    EKEY_M,
    EKEY_N,
    EKEY_O,
    EKEY_P,
    EKEY_Q,
    EKEY_R,
    EKEY_S,
    EKEY_T,
    EKEY_U,
    EKEY_V,
    EKEY_W,
    EKEY_X,
    EKEY_Y,
    EKEY_Z,
};

class bkrSys
{
public:
    virtual void Init() = 0;
    virtual void Shutdown() = 0;
    virtual void PumpEvents() = 0;
};

extern bkrSys *sys;
