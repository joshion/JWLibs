#pragma once

#include "tlglobal.h"

// The compiler would warning
__pragma(warning(disable: 4150))  /* class 'type' needs to have dll-interface to be used by clients of class 'type2' */

template <class SELF>
class Impl
{
public:
   virtual ~Impl() = default;
   SELF *__self__;
};


// The dynamic project need to define macro TEMPLATELIBS_LIB to export pImpl<...>
template <class IMPL>
class TEMPLATELIBS_EXPORT pImpl final
{
public:
   inline pImpl() : __impl__(new IMPL) {};
   inline ~pImpl() { delete __impl__; }
   inline IMPL* get() { return __impl__; }
   inline  const IMPL* get() const { return __impl__; }
protected:
   IMPL *__impl__;
private:
   pImpl(const pImpl&) = delete;
   pImpl& operator= (const pImpl&) = delete;
   bool operator==(const pImpl&) = delete;
   bool operator!=(const pImpl&) = delete;
};

#define JW_DISABLE_COPY(C) C (const C&) = delete; C& operator==(const C&) = delete
#define JW_DECLARE_IMPL(C) friend class C##Impl; pImpl<C##Impl> __pImpl__

#define JW_I(C) __pImpl__.get()->__self__ = this; C##Impl* d = static_cast<C##Impl*>(__pImpl__.get())
#define JW_D(C) C##Impl* d = static_cast<C##Impl*>(__pImpl__.get())
#define JW_C(C) const C##Impl* d = static_cast<const C##Impl*>(__pImpl__.get())
#define JW_Q(C) C* q = __self__
