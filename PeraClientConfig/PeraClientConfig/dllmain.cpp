// dllmain.cpp : DllMain ��ʵ�֡�

#include "stdafx.h"
#include "resource.h"
#include "PeraClientConfig_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CPeraClientConfigModule _AtlModule;

class CPeraClientConfigApp : public CWinApp
{
public:

// ��д
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CPeraClientConfigApp, CWinApp)
END_MESSAGE_MAP()

CPeraClientConfigApp theApp;

BOOL CPeraClientConfigApp::InitInstance()
{
#ifdef _MERGE_PROXYSTUB
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
#endif
	return CWinApp::InitInstance();
}

int CPeraClientConfigApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
