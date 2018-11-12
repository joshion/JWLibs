/*
We could find that this project built failured because the pImpl<TestBridge> has not been import.
And there's no a convenient way for us to export the pImpl<TestBridge> in the TestBridge project.
*/

#include "../TestBridge/TestBridge.h"

#include <iostream>

using namespace std;

int main(int argc, char* args)
{
   {
      TestBridge a;
   }
   TestBridge *b = new TestBridge;
   delete b;
   return 0;
}

/**/