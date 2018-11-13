#pragma once

#include "Singleton.h"

#include "TestBridgeGlobal.h"

class TESTBRIDGE_EXPORT TestBridge final
{
protected:
   TestBridge();
public:
   virtual ~TestBridge();

public:
   static void func();
private:
   JW_DECLARE_IMPL(TestBridge);
   JW_DISABLE_COPY(TestBridge);
   JW_DECLARE_STATIC(TestBridge);
};
