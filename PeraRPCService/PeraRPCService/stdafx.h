// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// 某些 CString 构造函数将是显式的

#include <afxwin.h>
#include <afxext.h>
#include <afxole.h>
#include <afxodlgs.h>
#include <afxrich.h>
#include <afxhtml.h>
#include <afxcview.h>
#include <afxwinappex.h>
#include <afxframewndex.h>
#include <afxmdiframewndex.h>

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdisp.h>        // MFC 自动化类
#endif // _AFX_NO_OLE_SUPPORT

#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>


#include "json/reader.h"
#include "json/writer.h"
#include "json/value.h"
#ifdef _DEBUG
#pragma comment(lib, "jsond.lib")
#else
#pragma comment(lib, "json.lib")
#endif

// #define TIXML_USE_STL
// #include "tinyxml.h"
// #ifdef _DEBUG
// #pragma comment(lib, "tinyxmld_STL.lib")
// #else
// #pragma comment(lib, "tinyxml_STL.lib")
// #endif

#define ICE_STATIC_LIBS
#ifdef _DEBUG
#pragma comment(lib, "iced.lib")
#pragma comment(lib, "iceutild.lib")
#pragma comment(lib, "libbz2d.lib")
#else
#pragma comment(lib, "ice.lib")
#pragma comment(lib, "iceutil.lib")
#pragma comment(lib, "libbz2.lib")
#endif
#pragma comment(lib, "Rpcrt4.lib")
#pragma comment(lib, "Iphlpapi.lib")