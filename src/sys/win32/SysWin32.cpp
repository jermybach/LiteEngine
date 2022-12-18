#include "SysWin32.h"
#include "framework/ICommon.h"

void InitInstance()
{
    static bool initialized = false;
    if (!initialized)
    {
        initialized = true;

        WNDCLASS wc = {};
        wc.lpfnWndProc = bkrSysWin32::MainWndProc;
    }
}

void bkrSysWin32::Init()
{
    m_hInstance = GetModuleHandle(NULL);


}

void bkrSysWin32::Shutdown()
{
}

void bkrSysWin32::PumpEvents()
{
}

LRESULT bkrSysWin32::MainWndProc(HWND hWnd, UINT msg, WPARAM wParam,
                                 LPARAM lParam)
{
    switch (msg)
    {

    case WM_CLOSE:
        common->Shutdown();       
        break;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}