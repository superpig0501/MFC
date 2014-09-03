// 20140903Doc.h : interface of the CMy20140903Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_20140903DOC_H__1F6B6C8D_DA30_4F98_BBCC_DBA19CDFB223__INCLUDED_)
#define AFX_20140903DOC_H__1F6B6C8D_DA30_4F98_BBCC_DBA19CDFB223__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy20140903Doc : public CDocument
{
protected: // create from serialization only
	CMy20140903Doc();
	DECLARE_DYNCREATE(CMy20140903Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy20140903Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy20140903Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy20140903Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_20140903DOC_H__1F6B6C8D_DA30_4F98_BBCC_DBA19CDFB223__INCLUDED_)
