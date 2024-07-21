#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(LOADDEMOPLUGIN_LIB)
#  define LOADDEMOPLUGIN_EXPORT Q_DECL_EXPORT
# else
#  define LOADDEMOPLUGIN_EXPORT Q_DECL_IMPORT
# endif
#else
# define LOADDEMOPLUGIN_EXPORT
#endif
