// 20140903.h : main header file for the 20140903 application
//

#if !defined(AFX_20140903_H__6BC1440A_E919_4671_810A_1149D91D2C4C__INCLUDED_)
#define AFX_20140903_H__6BC1440A_E919_4671_810A_1149D91D2C4C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy20140903App:
// See 20140903.cpp for the implementation of this class
//

class CMy20140903App : public CWinApp
{
public:
	CMy20140903App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy20140903App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy20140903App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_20140903_H__6BC1440A_E919_4671_810A_1149D91D2C4C__INCLUDED_)
