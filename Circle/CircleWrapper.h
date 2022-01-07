// CircleWrapper.h : Declaration of the CCircleWrapper

#pragma once
#include "resource.h"       // main symbols
#include "axtempl.h"
#include "category.h"
#include "tchar.h"
#include "Circle_i.h"
#include "Circle_i.c"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCircleWrapper

class ATL_NO_VTABLE CCircleWrapper :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCircleWrapper, &CLSID_AcadCircle>,
	public ISupportErrorInfo,
	public IAcadEntityDispatchImpl<CCircleWrapper, &CLSID_AcadCircle, ICircleWrapper, &IID_IAcadCircle, &LIBID_CircleLib>
{
public:
	CCircleWrapper()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CCircleWrapper)
	COM_INTERFACE_ENTRY(ICircleWrapper)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IAcadBaseObject)
	COM_INTERFACE_ENTRY(IAcadBaseObject2)
	COM_INTERFACE_ENTRY(IAcadObject)
	COM_INTERFACE_ENTRY(IAcadEntity)
	COM_INTERFACE_ENTRY(IRetrieveApplication)
END_COM_MAP()

STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return (S_OK);
	}

	void FinalRelease()
	{
	}
	virtual HRESULT CreateNewObject(AcDbObjectId& objId, AcDbObjectId& ownerId, TCHAR* keyName);
	STDMETHOD(ForceDbResident)(VARIANT_BOOL* forceDbResident);
	STDMETHOD(CreateObject)(AcDbObjectId ownerId = AcDbObjectId::kNull, TCHAR* keyName = NULL);
	STDMETHOD(AddToDb)(AcDbObjectId& objId, AcDbObjectId ownerId = AcDbObjectId::kNull, TCHAR* keyName = NULL);
public:



	STDMETHOD(Blue)();
};

OBJECT_ENTRY_AUTO(__uuidof(CircleWrapper), CCircleWrapper)
