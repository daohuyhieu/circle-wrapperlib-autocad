// dllmain.h : Declaration of module class.

class CCircleModule : public ATL::CAtlDllModuleT< CCircleModule >
{
public :
	DECLARE_LIBID(LIBID_CircleLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CIRCLE, "{f0455ab6-7121-4973-b07c-c5ceafc0c022}")
};

extern class CCircleModule _AtlModule;
