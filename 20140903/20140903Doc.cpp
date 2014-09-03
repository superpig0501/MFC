// 20140903Doc.cpp : implementation of the CMy20140903Doc class
//

#include "stdafx.h"
#include "20140903.h"

#include "20140903Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy20140903Doc

IMPLEMENT_DYNCREATE(CMy20140903Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy20140903Doc, CDocument)
	//{{AFX_MSG_MAP(CMy20140903Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy20140903Doc construction/destruction

CMy20140903Doc::CMy20140903Doc()
{
	// TODO: add one-time construction code here

}

CMy20140903Doc::~CMy20140903Doc()
{
}

BOOL CMy20140903Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy20140903Doc serialization

void CMy20140903Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMy20140903Doc diagnostics

#ifdef _DEBUG
void CMy20140903Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy20140903Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy20140903Doc commands
