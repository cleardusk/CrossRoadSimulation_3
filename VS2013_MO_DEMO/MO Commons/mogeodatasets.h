#if !defined(AFX_MOGEODATASETS_H__5EB35E56_BDC1_4BAA_9488_6723BA22D904__INCLUDED_)
#define AFX_MOGEODATASETS_H__5EB35E56_BDC1_4BAA_9488_6723BA22D904__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMoGeoDatasets wrapper class

class CMoGeoDatasets : public COleDispatchDriver
{
public:
	CMoGeoDatasets() {}		// Calls COleDispatchDriver default constructor
	CMoGeoDatasets(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoGeoDatasets(const CMoGeoDatasets& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetCount();
	void SetCount(short);

// Operations
public:
	LPDISPATCH Item(const VARIANT& Item);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOGEODATASETS_H__5EB35E56_BDC1_4BAA_9488_6723BA22D904__INCLUDED_)
