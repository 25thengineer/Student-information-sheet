// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__BAEBFAE3_A8DE_4BA8_8532_316C4077EAC6__INCLUDED_)
#define AFX_STDAFX_H__BAEBFAE3_A8DE_4BA8_8532_316C4077EAC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensionsK
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__BAEBFAE3_A8DE_4BA8_8532_316C4077EAC6__INCLUDED_)
#include <afxcontrolbars.h>

#define WM_USER_UP_SERACH    WM_USER+0x001
#define WM_USER_DOWN_SERACH  WM_USER+0x002