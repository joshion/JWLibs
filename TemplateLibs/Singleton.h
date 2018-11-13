#pragma once

#include <memory>
#include <mutex>

#include "Bridge.h"

template <class T>
class Singleton
{
protected:
   Singleton() = default;
   Singleton(const Singleton &other) = delete;
   Singleton& operator= (const Singleton &other) = delete;
public:
   virtual ~Singleton() = default;

public:

   // Don't call this function in the T constructor or destructor.
   template<class ...Types>
   static T& instance(Types ...args)
   {
      std::call_once(m_flag, [&]() {
         m_instance = std::shared_ptr<T>(new T(args...));
      });
      return *m_instance;
   }

private:
   static std::shared_ptr<T> m_instance;
   static std::once_flag m_flag;
};

template <class T>
std::shared_ptr<T> Singleton<T>::m_instance;

template <class T>
std::once_flag Singleton<T>::m_flag;


#define JW_DECLARE_STATIC(C) friend class Singleton<##C>

#define JW_STATIC_D(C) C##Impl* sd = static_cast<C##Impl*>(C##Impl::instance().__pImpl__.get())
// #define JW_STATIC_Q(C) C& sq = C##Impl::instance()