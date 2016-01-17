// DlgStructTreePropProcess.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "PeraProcessDesigner.h"
#include "DlgStructTreePropProcess.h"
#include "afxdialogex.h"
#include "DlgSvg.h"
#include "PeraProcessDesignerUtility.h"
#include "WebDataDefine.h"
#include "ConvertData.h"
#include "CStringChecker.h"

// CDlgStructTreePropProcess �Ի���

BEGIN_MESSAGE_MAP(CDlgStructTreePropProcess, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgStructTreePropProcess::OnBnClickedOk)
	//ON_BN_CLICKED(IDCANCEL, &CDlgStructTreePropProcess::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_STPP_OK, &CDlgStructTreePropProcess::OnBnClickedStppOk)
	ON_BN_CLICKED(IDC_STPP_CANCEL, &CDlgStructTreePropProcess::OnBnClickedStppCancel)

END_MESSAGE_MAP()

void CDlgStructTreePropProcess::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STPP_NAME, m_wndName);
	DDX_Control(pDX, IDC_STPP_AUTHOR, m_wndAuthor);
	DDX_Control(pDX, IDC_STPP_CREATED, m_wndCreated);
	DDX_Control(pDX, IDC_STPP_VERSION, m_wndVersion);
	DDX_Control(pDX, IDC_STPP_DESCRP, m_wndDescrp);
	DDX_Control(pDX, IDC_STPP_OK, m_wndOk);
	DDX_Control(pDX, IDC_STPP_CANCEL, m_wndCancel);
}

IMPLEMENT_DYNAMIC(CDlgStructTreePropProcess, CDialogEx)

CDlgStructTreePropProcess::CDlgStructTreePropProcess(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgStructTreePropProcess::IDD, pParent)
{
	m_pNode = NULL;
}

CDlgStructTreePropProcess::~CDlgStructTreePropProcess()
{
}



void CDlgStructTreePropProcess::OnBnClickedOk()
{
}


void CDlgStructTreePropProcess::OnBnClickedCancel()
{
}


BOOL CDlgStructTreePropProcess::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	if (m_pNode != NULL)
	{
		m_wndAuthor.SetWindowText(m_pNode->m_strAuthor);
		m_wndCreated.SetWindowText(m_pNode->m_strCreated);
		m_wndDescrp.SetWindowText(m_pNode->m_strDescription);
		m_wndName.SetWindowText(m_pNode->m_strText);
		m_wndVersion.SetWindowText(m_pNode->m_strVersion);
	}
	HICON hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(hIcon,TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}



// CDlgStructTreePropComponent ��Ϣ��������


void CDlgStructTreePropProcess::OnBnClickedStppOk()
{
	CDlgSvg * pSvg = GetSvgDilogPtr();
	if ( pSvg == NULL )
	{
		EndDialog(FALSE); return;
	}

	if(true)
	{//���������
		bool b; 
		b = CheckEdit(m_wndAuthor, STRATEGY_DEFAULT, "����");
		if(b == false)
		{//���ʧ��ֱ�ӷ���
			return;
		}

		b = CheckEdit(m_wndCreated, STRATEGY_DEFAULT, "����");
		if(b == false)
		{//���ʧ��ֱ�ӷ���
			return;
		}

		b = CheckEdit(m_wndDescrp, STRATEGY_DEFAULT, "����", 200);
		if(b == false)
		{//���ʧ��ֱ�ӷ���
			return;
		}

		b = CheckEdit(m_wndName, STRATEGY_NODE, "����");
		if(b == false)
		{//���ʧ��ֱ�ӷ���
			return;
		}

		b = CheckEdit(m_wndVersion, STRATEGY_DEFAULT, "�汾");
		if(b == false)
		{//���ʧ��ֱ�ӷ���
			return;
		}
	}

	BOOL bModified = FALSE;
	CString str;

	CCxStructTreeNodeFlow * pTempNode = new CCxStructTreeNodeFlow( NULL );
	pTempNode->m_strID = m_pNode->m_strID;

	m_wndAuthor.GetWindowText(pTempNode->m_strAuthor);
	if ( m_pNode->m_strAuthor != pTempNode->m_strAuthor )
	{
		bModified = TRUE; 
	}
	m_wndCreated.GetWindowText(pTempNode->m_strCreated);
	if ( m_pNode->m_strCreated != pTempNode->m_strCreated )
	{
		bModified = TRUE;
	}
	m_wndDescrp.GetWindowText(pTempNode->m_strDescription);
	if ( m_pNode->m_strDescription != pTempNode->m_strDescription )
	{
		bModified = TRUE;
	}
	m_wndName.GetWindowText(pTempNode->m_strOriName);
	pTempNode->m_strText = pTempNode->m_strOriName;
	if ( m_pNode->m_strOriName != pTempNode->m_strOriName )
	{
		bModified = TRUE;
	}
	m_wndVersion.GetWindowText(pTempNode->m_strVersion);
	if ( m_pNode->m_strVersion != pTempNode->m_strVersion )
	{
		bModified = TRUE;
	}

	if ( !bModified )
	{
		delete pTempNode; pTempNode = NULL; EndDialog(FALSE); return;
	}

	CWebMethodParamData * pParam = NULL;
	CWebMethodData wmd;
	//
	wmd.m_sMethodName = "propUpdate";
	//��1������
	pParam = new CWebMethodParamData();
	pParam->m_sName = "jsonData";
	pParam->m_sValue = pTempNode->GetUpdatePropJsonStr();
	wmd.m_vParams.push_back(pParam);
	//
	if ( !pSvg->InvokeJsMethod( &wmd ) )
	{
		MessageBox("�޸�����ʧ�ܡ���ȷ��svg����������", g_lpszAppTitle, MB_OK|MB_ICONERROR );
		delete pTempNode; pTempNode = NULL;
		EndDialog(FALSE); return;
	}
	if ( wmd.m_sResult.IsEmpty() )
	{
		m_pNode->m_strAuthor = pTempNode->m_strAuthor;
		m_pNode->m_strCreated = pTempNode->m_strCreated;
		m_pNode->m_strDescription = pTempNode->m_strDescription;
		m_pNode->m_strOriName = pTempNode->m_strOriName;
		m_pNode->m_strText = pTempNode->m_strText;
		m_pNode->m_strVersion = pTempNode->m_strVersion;
		delete pTempNode; pTempNode = NULL;
		EndDialog( TRUE ); return;
	}
	else
	{
		vector< CString > vErrFlag;
		CString2Vector( vErrFlag, wmd.m_sResult );
		for (int i=0; i<(int)vErrFlag.size(); i++)
		{
			if ( vErrFlag[i] == "same_name" )
			{
				MessageBox("���Ʊ���ȷ��Ψһ", g_lpszAppTitle, MB_OK|MB_ICONINFORMATION );
				m_wndName.SetSel(0, -1);
				m_wndName.SetFocus();
				break;
			}
		}
		delete pTempNode; pTempNode = NULL;
	}
}


void CDlgStructTreePropProcess::OnBnClickedStppCancel()
{
	EndDialog(FALSE); return;
}

// Edit�ؼ��ִ�����
bool CDlgStructTreePropProcess::CheckEdit( CEdit& edit, STRATEGY strategy /*= STRATEGY_DEFAULT */, CString cName /*= ""*/,int nLenLimit /*= 20*/ )
{
	CString str;
	BOOL b;
	edit.GetWindowText(str);

	switch(strategy)
	{
	case STRATEGY_NODE:
		b = CStringChecker::CheckNodeName(str);
		break;
	case STRATEGY_DIR:
		b = CStringChecker::CheckDirName(str);
		break;
	case STRATEGY_NAME:
		b = CStringChecker::CheckName(str);
		break;
	case STRATEGY_VERSION:
		b = CStringChecker::CheckVersion(str);
		break;
	case STRATEGY_DEFAULT:
		b = CStringChecker::CheckLength(str, nLenLimit);
		break;
	}

	if(!b)
	{//���ʧ��
		str = cName + CStringChecker::GetLastErr();
		edit.GetParent()->MessageBox(str, g_lpszAppTitle, MB_ICONERROR);
		edit.SetSel(0, -1);
		edit.SetFocus();
		return false;
	}

	return true;
}