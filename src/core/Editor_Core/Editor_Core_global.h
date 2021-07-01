#ifndef EDITOR_CORE_GLOBAL_H
#define EDITOR_CORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(EDITOR_CORE_LIBRARY)
#  define EDITOR_CORE_EXPORT Q_DECL_EXPORT
#else
#  define EDITOR_CORE_EXPORT Q_DECL_IMPORT
#endif

#endif // EDITOR_CORE_GLOBAL_H
