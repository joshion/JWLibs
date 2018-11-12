#include "TestSingleton.h"

#include <iostream>

using namespace std;

int main(int argc, char* args)
{
   TestSingleton *a = &TestSingleton::instance();
   return 0;
}