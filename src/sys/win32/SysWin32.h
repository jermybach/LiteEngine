#pragma once
#include "../../core/Precompiled.h"
#include "../Sys_Public.h"

#if OS_WINDOWS
#include <Windows.h>

class bkrSysWin32 : public bkrSys
{
    HINSTANCE m_hInstance;
    HWND m_hWnd;

public:
    virtual void Init() override;
    virtual void Shutdown() override;
    virtual void PumpEvents() override;

    static LRESULT CALLBACK MainWndProc(HWND hWnd, UINT msg, WPARAM wParam,
                                        LPARAM lParam);
};

#endif
