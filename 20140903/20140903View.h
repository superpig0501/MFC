// 20140903View.h : interface of the CMy20140903View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_20140903VIEW_H__5B1D4086_6F66_4EA3_91C3_6B61A54C7BA7__INCLUDED_)
#define AFX_20140903VIEW_H__5B1D4086_6F66_4EA3_91C3_6B61A54C7BA7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy20140903View : public CView
{
protected: // create from serialization only
	CMy20140903View();
	DECLARE_DYNCREATE(CMy20140903View)

// Attributes
public:
	CMy20140903Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy20140903View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy20140903View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy20140903View)
	afx_msg void OnPropertysheet();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	int			m_iOccupation;
	CString		m_strWorkAddr;
	BOOL		m_bLike[4];
	CString		m_strSalary;

};

#ifndef _DEBUG  // debug version in 20140903View.cpp
inline CMy20140903Doc* CMy20140903View::GetDocument()
   { return (CMy20140903Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_20140903VIEW_H__5B1D4086_6F66_4EA3_91C3_6B61A54C7BA7__INCLUDED_)
