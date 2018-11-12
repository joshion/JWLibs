#include "TestBridge.h"

#include <iostream>

using namespace std;

int main(int argc, char* args)
{
   {
      TestBridge test;
   }
   TestBridge *p = new TestBridge;
   delete p;
   return 0;
}