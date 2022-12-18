#pragma once
#include "Precompiled.h"

class Str
{
    static const int SSBUFFER_LEN = 24;

    char *m_data;
    size_t m_size, m_capacity;
    char m_ssbuffer[SSBUFFER_LEN];

public:
    Str();
    Str(const char *str);
    Str(const Str &other)
    {
    }
    
    void Set(const char *value);
};

inline Str::Str()
{
    m_data = m_ssbuffer;
    m_size = 0;
    m_capacity = 0;
    m_ssbuffer[0] = '\0';
}

inline Str::Str(const char *str)
{
    Str();
    Set(str);
}

inline void Str::Set(const char *value)
{
    size_t length = strlen(value);
    if (length < SSBUFFER_LEN)
    {
        m_data = m_ssbuffer;
        m_size = length;
        m_capacity = SSBUFFER_LEN - 1;
        memcpy(m_ssbuffer, value, length + 1);
    }
    else
    {
        if (m_data != nullptr && m_data != m_ssbuffer) MemFree(m_data);
        m_data = MemStrDup(value);
        m_size = length;
        m_capacity = length;
    }
}
