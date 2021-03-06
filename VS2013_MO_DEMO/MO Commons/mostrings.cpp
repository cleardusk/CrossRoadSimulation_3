// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "mostrings.h"


/////////////////////////////////////////////////////////////////////////////
// CMoStrings properties

short CMoStrings::GetCount()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void CMoStrings::SetCount(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

BOOL CMoStrings::GetUnique()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void CMoStrings::SetUnique(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

long CMoStrings::GetCount2()
{
	long result;
	GetProperty(0x13, VT_I4, (void*)&result);
	return result;
}

void CMoStrings::SetCount2(long propVal)
{
	SetProperty(0x13, VT_I4, propVal);
}

BOOL CMoStrings::GetPopulateUsingNewConstants()
{
	BOOL result;
	GetProperty(0x14, VT_BOOL, (void*)&result);
	return result;
}

void CMoStrings::SetPopulateUsingNewConstants(BOOL propVal)
{
	SetProperty(0x14, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoStrings operations

CString CMoStrings::Item(const VARIANT& Item)
{
	CString result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		&Item);
	return result;
}

BOOL CMoStrings::Add(LPCTSTR string)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		string);
	return result;
}

void CMoStrings::Clear()
{
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CMoStrings::Find(LPCTSTR itemName, const VARIANT& startPos)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		itemName, &startPos);
	return result;
}

void CMoStrings::PopulateWithUnits()
{
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithSpheroids()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithDatums()
{
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithMeridians()
{
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithProjections()
{
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithProjectedCoordSys()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithGeographicCoordSys()
{
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithGeoTransformations()
{
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::PopulateWithParameters(long Projection)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Projection);
}

void CMoStrings::PopulateWithMethods()
{
	InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoStrings::Sort(long sortOrder)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 sortOrder);
}
