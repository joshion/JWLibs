#include "TestBridge.h"

class TestBridgeImpl : public Impl<TestBridge>
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
   JW_I(TestBridge)
}

TestBridge::~TestBridge()
{

}