#if !defined(AFX_MOGEOTRANSFORMATION_H__46628133_34DC_40C9_ACB5_A2CF5856FC3C__INCLUDED_)
#define AFX_MOGEOTRANSFORMATION_H__46628133_34DC_40C9_ACB5_A2CF5856FC3C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoGeoCoordSys;

/////////////////////////////////////////////////////////////////////////////
// CMoGeoTransformation wrapper class

class CMoGeoTransformation : public COleDispatchDriver
{
public:
	CMoGeoTransformation() {}		// Calls COleDispatchDriver default constructor
	CMoGeoTransformation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoGeoTransformation(const CMoGeoTransformation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetType();
	void SetType(long);
	CString GetName();
	void SetName(LPCTSTR);
	CMoGeoCoordSys GetFromGeoCoordSys();
	void SetFromGeoCoordSys(LPDISPATCH);
	CMoGeoCoordSys GetToGeoCoordSys();
	void SetToGeoCoordSys(LPDISPATCH);
	long GetMethod();
	void SetMethod(long);
	long GetDirection();
	void SetDirection(long);
	long GetSecondType();
	void SetSecondType(long);
	CString GetSecondName();
	void SetSecondName(LPCTSTR);
	long GetSecondDirection();
	void SetSecondDirection(long);

// Operations
public:
	void SetParameter(long ParameterType, double ParameterValue);
	double GetParameter(long ParameterType);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOGEOTRANSFORMATION_H__46628133_34DC_40C9_ACB5_A2CF5856FC3C__INCLUDED_)
