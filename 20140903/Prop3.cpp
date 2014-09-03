// Prop3.cpp : implementation file
//

#include "stdafx.h"
#include "20140903.h"
#include "Prop3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProp3 property page

IMPLEMENT_DYNCREATE(CProp3, CPropertyPage)

CProp3::CProp3() : CPropertyPage(CProp3::IDD)
{
	//{{AFX_DATA_INIT(CProp3)
	//}}AFX_DATA_INIT
}

CProp3::~CProp3()
{
}

void CProp3::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProp3)
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProp3, CPropertyPage)
	//{{AFX_MSG_MAP(CProp3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProp3 message handlers

BOOL CProp3::OnSetActive() 
{
	// TODO: Add your specialized code here and/or call the base class
	((CPropertySheet *)GetParent())->SetWizardButtons(PSWIZB_FINISH | PSWIZB_BACK);
	return CPropertyPage::OnSetActive();
}

BOOL CProp3::OnInitDialog() 
{
	CPropertyPage::OnInitDialog();
	
	// TODO: Add extra initialization here
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("低于1000元");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("1000元-2000元");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("2000元-3000元");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("高于3000元");
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

BOOL CProp3::OnWizardFinish() 
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData();
	int index = ((CComboBox*)GetDlgItem(IDC_COMBO1))->GetCurSel();
	if(-1==index){
		MessageBox("请选择薪资水平");
		return 0;
	}
	else{
		((CComboBox*)GetDlgItem(IDC_COMBO1))->GetLBText(index, m_strSalary);
		return CPropertyPage::OnWizardFinish();
	}
}
