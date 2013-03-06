/////////////////////////////////////////////////////////////////////////////
// MooseApp.h : main header file for the Moose DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "Resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMooseApp
// See MooseApp.cpp for the implementation of this class
//

class CMooseApp : public CWinApp
{
public:
	CMooseApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};
