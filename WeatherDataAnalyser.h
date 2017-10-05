
// WeatherDataAnalyser.h : main header file for the WeatherDataAnalyser application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CWeatherDataAnalyserApp:
// See WeatherDataAnalyser.cpp for the implementation of this class
//

class CWeatherDataAnalyserApp : public CWinAppEx
{
public:
	CWeatherDataAnalyserApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeatherDataAnalyserApp theApp;
