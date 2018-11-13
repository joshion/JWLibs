#pragma once


#pragma once

#ifndef BUILD_STATIC
# if defined(TEMPLATELIBS_LIB)
#  define TEMPLATELIBS_EXPORT  __declspec(dllexport)
# else
#  define TEMPLATELIBS_EXPORT __declspec(dllimport)
# endif
#else
# define TEMPLATELIBS_EXPORT
#endif
