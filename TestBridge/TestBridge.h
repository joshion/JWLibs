#pragma once

#include "Bridge.h"

#include "TestBridgeGlobal.h"

class TESTBRIDGE_EXPORT TestBridge
{
public:
   TestBridge();
   virtual ~TestBridge();

private:
   JW_DECLARE_IMPL(TestBridge)
   JW_DISABLE_COPY(TestBridge)
};
