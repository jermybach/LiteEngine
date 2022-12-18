#pragma once

#if defined(_WIN32)
#define OS_WINDOWS 1
#endif

#ifndef OS_WINDOWS
#define OS_WINDOWS 0
#endif

#include "Config.h"

extern "C"
{
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
}

#define MemMalloc(sz) malloc(sz)
#define MemRealloc(ptr, sz) realloc(ptr, sz)
#define MemFree(ptr) free(ptr)

inline char *MemStrDup(const char *source)
{
    size_t length = strlen(source);
    char *buffer = (char *)MemMalloc(length + 1);
    memcpy(buffer, source, length + 1);
}

#include "Str.h"