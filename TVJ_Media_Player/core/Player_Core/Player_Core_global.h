#ifndef PLAYER_CORE_GLOBAL_H
#define PLAYER_CORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLAYER_CORE_LIBRARY)
#  define PLAYER_CORE_EXPORT Q_DECL_EXPORT
#else
#  define PLAYER_CORE_EXPORT Q_DECL_IMPORT
#endif

#endif // PLAYER_CORE_GLOBAL_H
