#pragma once
#include <windows.h>

class Memory
{
public:
    // 取得指定模組與函式名稱的函式位址
    static void* GetFunctionAddress(const char* moduleName, const char* functionName);
    static bool SetHook(bool attach, void** ptrTarget, void* ptrDetour);
    static void FillBytes(DWORD dwOriginAddress, unsigned char ucValue, int nCount);
    static void WriteString(DWORD dwOriginAddress, const char* sContent);
    static void WriteByte(DWORD dwOriginAddress, unsigned char ucValue);
    static void WriteShort(DWORD dwOriginAddress, unsigned short usValue);
    static void WriteInt(DWORD dwOriginAddress, unsigned int dwValue);
    static void WriteDouble(DWORD dwOriginAddress, double dwValue);
    static void CodeCave(void* ptrCodeCave, DWORD dwOriginAddress, int nNOPCount);
    static void WriteByteArray(DWORD dwOriginAddress, unsigned char* ucValue, const int ucValueSize);
    static bool UseVirtuProtect;
};

