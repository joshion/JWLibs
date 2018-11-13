#include "TestBridge.h"

class TestBridgeImpl : public Impl<TestBridge>, public Singleton<TestBridge>
{
public:
   TestBridgeImpl();
   ~TestBridgeImpl();
};

TestBridgeImpl::TestBridgeImpl()
{
}

TestBridgeImpl::~TestBridgeImpl()
{
}


TestBridge::TestBridge()
{
   JW_I(TestBridge);
}

TestBridge::~TestBridge()
{

}

void TestBridge::func()
{
   JW_STATIC_D(TestBridge);
}
