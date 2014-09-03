// 20140903View.cpp : implementation of the CMy20140903View class
//

#include "stdafx.h"
#include "20140903.h"

#include "20140903Doc.h"
#include "20140903View.h"

#include "PropSheet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy20140903View

IMPLEMENT_DYNCREATE(CMy20140903View, CView)

BEGIN_MESSAGE_MAP(CMy20140903View, CView)
	//{{AFX_MSG_MAP(CMy20140903View)
	ON_COMMAND(IDM_PROPERTYSHEET, OnPropertysheet)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy20140903View construction/destruction

CMy20140903View::CMy20140903View()
{
	// TODO: add construction code here
	m_iOccupation = -1;
	m_strWorkAddr = "";
	memset(m_bLike, 0, sizeof(m_bLike));
	m_strSalary = "";
}

CMy20140903View::~CMy20140903View()
{
}

BOOL CMy20140903View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy20140903View drawing

void CMy20140903View::OnDraw(CDC* pDC)
{
	CMy20140903Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CFont font;
	font.CreatePointFont(300,"宋体");
	
	CFont *pOldFont;
	pOldFont=pDC->SelectObject(&font);
	CString strTemp;
	strTemp = "职业：";
	switch(m_iOccupation)
	{
		case 0:
			strTemp += "程序员";
			break;
		case 1:
			strTemp += "系统工程师";
			break;
		case 2:
			strTemp += "项目经理";
			break;
		default:
			break;
	}
	pDC->TextOut(0, 0, strTemp);

	TEXTMETRIC tm;
	pDC->GetTextMetrics(&tm);

	strTemp = "工作地点：";
	strTemp += m_strWorkAddr;
	pDC->TextOut(0, tm.tmHeight, strTemp);

	strTemp = "兴趣爱好：";
	if(m_bLike[0])
		strTemp += "足球 ";
	if(m_bLike[1])
		strTemp += "篮球 ";
	if(m_bLike[2])
		strTemp += "排球 ";
	if(m_bLike[3])
		strTemp += "游泳";
	pDC->TextOut(0, tm.tmHeight * 2, strTemp);

	strTemp = "薪资水平：";
	strTemp += m_strSalary;
	pDC->TextOut(0, tm.tmHeight * 3, strTemp);


	pDC->SelectObject(pOldFont);
}

/////////////////////////////////////////////////////////////////////////////
// CMy20140903View diagnostics

#ifdef _DEBUG
void CMy20140903View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20140903View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20140903Doc* CMy20140903View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20140903Doc)));
	return (CMy20140903Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy20140903View message handlers

void CMy20140903View::OnPropertysheet() 
{
	// TODO: Add your command handler code here
	CPropSheet propSheet("属性表单程序");
	propSheet.SetWizardMode();
	if(ID_WIZFINISH == propSheet.DoModal()){
		m_iOccupation = propSheet.m_prop1.m_occupation;
		m_strWorkAddr = propSheet.m_prop1.m_workAddr;
		m_bLike[0] = propSheet.m_prop2.m_football;
		m_bLike[1] = propSheet.m_prop2.m_basketball;
		m_bLike[2] = propSheet.m_prop2.m_volleyball;
		m_bLike[3] = propSheet.m_prop2.m_swimming;
		m_strSalary = propSheet.m_prop3.m_strSalary;
		Invalidate();
	}
}
