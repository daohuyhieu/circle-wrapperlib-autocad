// CircleWrapper.cpp : Implementation of CCircleWrapper

#include "pch.h"
#include "CircleWrapper.h"
#include "axpnt3d.h"
#include "axlock.h"

// CCircleWrapper

STDMETHODIMP CCircleWrapper::InterfaceSupportsErrorInfo(REFIID riid) {
	static const IID* arr[] = {
		&IID_ICircleWrapper
	};

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (InlineIsEqualGUID(*arr[i], riid))
			return (S_OK);
	}
	return (S_FALSE);
}

HRESULT CCircleWrapper::CreateNewObject(AcDbObjectId& objId, AcDbObjectId& ownerId, TCHAR* keyName) {
	try {
		HRESULT hr;
		if (FAILED(hr = CreateObject(ownerId, keyName)))
			throw hr;
		if (FAILED(hr = AddToDb(objId, ownerId, keyName)))
			throw hr;
	}
	catch (HRESULT hr) {
		return (hr);
	}
	return (S_OK);
}
STDMETHODIMP CCircleWrapper::ForceDbResident(VARIANT_BOOL* forceDbResident) {
	if (forceDbResident == NULL)
		return (E_POINTER);
	//----- Return ACAX_VARIANT_TRUE if the object must be database resident to be functional
	*forceDbResident = ACAX_VARIANT_FALSE;
	return (S_OK);
}

STDMETHODIMP CCircleWrapper::CreateObject(AcDbObjectId ownerId /*=AcDbObjectId::kNull*/, TCHAR* keyName /*=NULL*/) {
	try {
		Acad::ErrorStatus es;
		AcDbObjectPointer<AcDbLine> obj;
		if ((es = obj.create()) != Acad::eOk)
			throw es;

		obj->setDatabaseDefaults(ownerId.database());

		AcDbLine* pTmp = NULL;
		obj.release(pTmp);

		SetObject((AcDbObject*&)pTmp);
	}
	catch (const Acad::ErrorStatus) {
		return (Error(L"Failed to create AcDbLine", IID_ICircleWrapper, E_FAIL));
	}
	return (S_OK);
}

STDMETHODIMP CCircleWrapper::AddToDb(AcDbObjectId& objId, AcDbObjectId ownerId /*=AcDbObjectId::kNull*/, TCHAR* keyName /*=NULL*/) {
	try {
		AcAxDocLock docLock(ownerId);

		Acad::ErrorStatus es;
		AcAxObjectRefPtr<AcDbLine> obj(&m_objRef, AcDb::kForRead);

		//----- Entities can be owned by block table records only
		AcDbBlockTableRecordPointer pBlockTableRecord(ownerId, AcDb::kForWrite, true);
		if ((es = pBlockTableRecord.openStatus()) != Acad::eOk)
			throw es;

		if ((es = pBlockTableRecord->appendAcDbEntity(objId, obj.object())) != Acad::eOk)
			throw es;
	}
	catch (const Acad::ErrorStatus) {
		return (Error(L"Failed to add AcDbLine to database", IID_ICircleWrapper, E_FAIL));
	}
	return (SetObjectId(objId));
}
STDMETHODIMP CCircleWrapper::Blue()
{
	// TODO: Add your implementation code here

	return S_OK;
}
