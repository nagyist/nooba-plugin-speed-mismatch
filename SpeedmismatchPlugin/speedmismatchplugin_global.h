#ifndef SPEEDMISMATCHPLUGIN_GLOBAL_H
#define SPEEDMISMATCHPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef SPEEDMISMATCHPLUGIN_LIB
# define SPEEDMISMATCHPLUGIN_EXPORT Q_DECL_EXPORT
#else
# define SPEEDMISMATCHPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // SPEEDMISMATCHPLUGIN_GLOBAL_H