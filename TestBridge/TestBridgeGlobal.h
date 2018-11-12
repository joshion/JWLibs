#pragma once

#ifndef BUILD_STATIC
# if defined(TESTBRIDGE_LIB)
#  define TESTBRIDGE_EXPORT  __declspec(dllexport)
# else
#  define TESTBRIDGE_EXPORT __declspec(dllimport)
# endif
#else
# define TESTBRIDGE_EXPORT
#endif
