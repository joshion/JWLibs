#pragma once

#include "Singleton.h"

class TestSingleton : public Singleton<TestSingleton>
{
   friend Singleton<TestSingleton>;
protected:
   TestSingleton();
public:
   virtual ~TestSingleton();
};



TestSingleton::TestSingleton()
{
}


TestSingleton::~TestSingleton()
{
}

/*
According to the C++ features, the static member function could not be a virtual function,
and also the virtual member function could not be called in a static member function. So it's
impossible to use the factory method to implement a singleton base class. And that's to say,
we can't write code as below.

template <class T>
class Singleton
{
protected:
   virtual T* getSelf() = 0;
public:
   static T& instance(Types ...args)
      { return getSelf(); }
}

Class A : public Singleton<A>
{
protected:
   T* getSelf() override { return new A; };
}

*/
