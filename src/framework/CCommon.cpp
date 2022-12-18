#include "../core/Precompiled.h"
#include "CCommon.h"
#include "ICommon.h"

CCommon commonLocal;
ICommon *common = &commonLocal;

void CCommon::Init()
{
}

void CCommon::Shutdown()
{
}

void CCommon::Frame()
{
}