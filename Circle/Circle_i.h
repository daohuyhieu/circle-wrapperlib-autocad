

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 10:14:07 2038
 */
/* Compiler settings for Circle.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __Circle_i_h__
#define __Circle_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICircleWrapper_FWD_DEFINED__
#define __ICircleWrapper_FWD_DEFINED__
typedef interface ICircleWrapper ICircleWrapper;

#endif 	/* __ICircleWrapper_FWD_DEFINED__ */


#ifndef __CircleWrapper_FWD_DEFINED__
#define __CircleWrapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class CircleWrapper CircleWrapper;
#else
typedef struct CircleWrapper CircleWrapper;
#endif /* __cplusplus */

#endif 	/* __CircleWrapper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CircleLib_LIBRARY_DEFINED__
#define __CircleLib_LIBRARY_DEFINED__

/* library CircleLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_CircleLib;

#ifndef __ICircleWrapper_INTERFACE_DEFINED__
#define __ICircleWrapper_INTERFACE_DEFINED__

/* interface ICircleWrapper */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICircleWrapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36BB03E5-4534-4F21-9C9C-0C09C0DC1CF7")
    ICircleWrapper : public IAcadEntity
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Blue( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICircleWrapperVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICircleWrapper * This,
            /* [retval][out] */ unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICircleWrapper * This,
            /* [retval][out] */ unsigned long *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICircleWrapper * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectName )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetXData )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BSTR AppName,
            /* [out][idldescattr] */ VARIANT *XDataType,
            /* [out][idldescattr] */ VARIANT *XDataValue,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *SetXData )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT XDataType,
            /* [in][idldescattr] */ VARIANT XDataValue,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICircleWrapper * This,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            ICircleWrapper * This,
            /* [retval][out] */ LONG_PTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ICircleWrapper * This,
            /* [retval][out] */ IDispatch **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Database )( 
            ICircleWrapper * This,
            /* [retval][out] */ IAcadDatabase **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HasExtensionDictionary )( 
            ICircleWrapper * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetExtensionDictionary )( 
            ICircleWrapper * This,
            /* [retval][out] */ IAcadDictionary **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_OwnerID )( 
            ICircleWrapper * This,
            /* [retval][out] */ LONG_PTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Document )( 
            ICircleWrapper * This,
            /* [retval][out] */ IDispatch **retval);
        
        /* [id][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Erase )( 
            ICircleWrapper * This,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_TrueColor )( 
            ICircleWrapper * This,
            /* [retval][out] */ IAcadAcCmColor **retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_TrueColor )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ IAcadAcCmColor *noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Layer )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Layer )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Linetype )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Linetype )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LinetypeScale )( 
            ICircleWrapper * This,
            /* [retval][out] */ ACAD_NOUNITS *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_LinetypeScale )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ ACAD_NOUNITS noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            ICircleWrapper * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ArrayPolar )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ signed INT NumberOfObjects,
            /* [in][idldescattr] */ double AngleToFill,
            /* [in][idldescattr] */ VARIANT CenterPoint,
            /* [retval][out] */ VARIANT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ArrayRectangular )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ signed INT NumberOfRows,
            /* [in][idldescattr] */ signed INT NumberOfColumns,
            /* [in][idldescattr] */ signed INT NumberOfLevels,
            /* [in][idldescattr] */ double DistBetweenRows,
            /* [in][idldescattr] */ double DistBetweenCols,
            /* [in][idldescattr] */ double DistBetweenLevels,
            /* [retval][out] */ VARIANT *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Highlight )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BOOLEAN HighlightFlag,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ICircleWrapper * This,
            /* [retval][out] */ IDispatch **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Move )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT FromPoint,
            /* [in][idldescattr] */ VARIANT ToPoint,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT BasePoint,
            /* [in][idldescattr] */ double RotationAngle,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Rotate3D )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT Point1,
            /* [in][idldescattr] */ VARIANT Point2,
            /* [in][idldescattr] */ double RotationAngle,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Mirror )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT Point1,
            /* [in][idldescattr] */ VARIANT Point2,
            /* [retval][out] */ IDispatch **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Mirror3D )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT Point1,
            /* [in][idldescattr] */ VARIANT Point2,
            /* [in][idldescattr] */ VARIANT point3,
            /* [retval][out] */ IDispatch **retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ScaleEntity )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT BasePoint,
            /* [in][idldescattr] */ double ScaleFactor,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *TransformBy )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ VARIANT TransformationMatrix,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            ICircleWrapper * This,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            ICircleWrapper * This,
            /* [out][idldescattr] */ VARIANT *MinPoint,
            /* [out][idldescattr] */ VARIANT *MaxPoint,
            /* [retval][out] */ void *retval);
        
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IntersectWith )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ IDispatch *IntersectObject,
            /* [in][idldescattr] */ enum AcExtendOption option,
            /* [retval][out] */ VARIANT *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PlotStyleName )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_PlotStyleName )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Lineweight )( 
            ICircleWrapper * This,
            /* [retval][out] */ ACAD_LWEIGHT *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Lineweight )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ ACAD_LWEIGHT noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_EntityTransparency )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_EntityTransparency )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Hyperlinks )( 
            ICircleWrapper * This,
            /* [retval][out] */ IAcadHyperlinks **retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Material )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Material )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_EntityName )( 
            ICircleWrapper * This,
            /* [retval][out] */ BSTR *retval);
        
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_EntityType )( 
            ICircleWrapper * This,
            /* [retval][out] */ signed long *retval);
        
        /* [id][propget][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_color )( 
            ICircleWrapper * This,
            /* [retval][out] */ ACAD_COLOR *retval);
        
        /* [id][propput][hidden][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_color )( 
            ICircleWrapper * This,
            /* [in][idldescattr] */ ACAD_COLOR noname,
            /* [retval][out] */ void *retval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Blue )( 
            ICircleWrapper * This);
        
        END_INTERFACE
    } ICircleWrapperVtbl;

    interface ICircleWrapper
    {
        CONST_VTBL struct ICircleWrapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICircleWrapper_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICircleWrapper_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICircleWrapper_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICircleWrapper_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICircleWrapper_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICircleWrapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICircleWrapper_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICircleWrapper_get_Handle(This,retval)	\
    ( (This)->lpVtbl -> get_Handle(This,retval) ) 

#define ICircleWrapper_get_ObjectName(This,retval)	\
    ( (This)->lpVtbl -> get_ObjectName(This,retval) ) 

#define ICircleWrapper_GetXData(This,AppName,XDataType,XDataValue,retval)	\
    ( (This)->lpVtbl -> GetXData(This,AppName,XDataType,XDataValue,retval) ) 

#define ICircleWrapper_SetXData(This,XDataType,XDataValue,retval)	\
    ( (This)->lpVtbl -> SetXData(This,XDataType,XDataValue,retval) ) 

#define ICircleWrapper_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 

#define ICircleWrapper_get_ObjectID(This,retval)	\
    ( (This)->lpVtbl -> get_ObjectID(This,retval) ) 

#define ICircleWrapper_get_Application(This,retval)	\
    ( (This)->lpVtbl -> get_Application(This,retval) ) 

#define ICircleWrapper_get_Database(This,retval)	\
    ( (This)->lpVtbl -> get_Database(This,retval) ) 

#define ICircleWrapper_get_HasExtensionDictionary(This,retval)	\
    ( (This)->lpVtbl -> get_HasExtensionDictionary(This,retval) ) 

#define ICircleWrapper_GetExtensionDictionary(This,retval)	\
    ( (This)->lpVtbl -> GetExtensionDictionary(This,retval) ) 

#define ICircleWrapper_get_OwnerID(This,retval)	\
    ( (This)->lpVtbl -> get_OwnerID(This,retval) ) 

#define ICircleWrapper_get_Document(This,retval)	\
    ( (This)->lpVtbl -> get_Document(This,retval) ) 

#define ICircleWrapper_Erase(This,retval)	\
    ( (This)->lpVtbl -> Erase(This,retval) ) 

#define ICircleWrapper_get_TrueColor(This,retval)	\
    ( (This)->lpVtbl -> get_TrueColor(This,retval) ) 

#define ICircleWrapper_put_TrueColor(This,noname,retval)	\
    ( (This)->lpVtbl -> put_TrueColor(This,noname,retval) ) 

#define ICircleWrapper_get_Layer(This,retval)	\
    ( (This)->lpVtbl -> get_Layer(This,retval) ) 

#define ICircleWrapper_put_Layer(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Layer(This,noname,retval) ) 

#define ICircleWrapper_get_Linetype(This,retval)	\
    ( (This)->lpVtbl -> get_Linetype(This,retval) ) 

#define ICircleWrapper_put_Linetype(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Linetype(This,noname,retval) ) 

#define ICircleWrapper_get_LinetypeScale(This,retval)	\
    ( (This)->lpVtbl -> get_LinetypeScale(This,retval) ) 

#define ICircleWrapper_put_LinetypeScale(This,noname,retval)	\
    ( (This)->lpVtbl -> put_LinetypeScale(This,noname,retval) ) 

#define ICircleWrapper_get_Visible(This,retval)	\
    ( (This)->lpVtbl -> get_Visible(This,retval) ) 

#define ICircleWrapper_put_Visible(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Visible(This,noname,retval) ) 

#define ICircleWrapper_ArrayPolar(This,NumberOfObjects,AngleToFill,CenterPoint,retval)	\
    ( (This)->lpVtbl -> ArrayPolar(This,NumberOfObjects,AngleToFill,CenterPoint,retval) ) 

#define ICircleWrapper_ArrayRectangular(This,NumberOfRows,NumberOfColumns,NumberOfLevels,DistBetweenRows,DistBetweenCols,DistBetweenLevels,retval)	\
    ( (This)->lpVtbl -> ArrayRectangular(This,NumberOfRows,NumberOfColumns,NumberOfLevels,DistBetweenRows,DistBetweenCols,DistBetweenLevels,retval) ) 

#define ICircleWrapper_Highlight(This,HighlightFlag,retval)	\
    ( (This)->lpVtbl -> Highlight(This,HighlightFlag,retval) ) 

#define ICircleWrapper_Copy(This,retval)	\
    ( (This)->lpVtbl -> Copy(This,retval) ) 

#define ICircleWrapper_Move(This,FromPoint,ToPoint,retval)	\
    ( (This)->lpVtbl -> Move(This,FromPoint,ToPoint,retval) ) 

#define ICircleWrapper_Rotate(This,BasePoint,RotationAngle,retval)	\
    ( (This)->lpVtbl -> Rotate(This,BasePoint,RotationAngle,retval) ) 

#define ICircleWrapper_Rotate3D(This,Point1,Point2,RotationAngle,retval)	\
    ( (This)->lpVtbl -> Rotate3D(This,Point1,Point2,RotationAngle,retval) ) 

#define ICircleWrapper_Mirror(This,Point1,Point2,retval)	\
    ( (This)->lpVtbl -> Mirror(This,Point1,Point2,retval) ) 

#define ICircleWrapper_Mirror3D(This,Point1,Point2,point3,retval)	\
    ( (This)->lpVtbl -> Mirror3D(This,Point1,Point2,point3,retval) ) 

#define ICircleWrapper_ScaleEntity(This,BasePoint,ScaleFactor,retval)	\
    ( (This)->lpVtbl -> ScaleEntity(This,BasePoint,ScaleFactor,retval) ) 

#define ICircleWrapper_TransformBy(This,TransformationMatrix,retval)	\
    ( (This)->lpVtbl -> TransformBy(This,TransformationMatrix,retval) ) 

#define ICircleWrapper_Update(This,retval)	\
    ( (This)->lpVtbl -> Update(This,retval) ) 

#define ICircleWrapper_GetBoundingBox(This,MinPoint,MaxPoint,retval)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,MinPoint,MaxPoint,retval) ) 

#define ICircleWrapper_IntersectWith(This,IntersectObject,option,retval)	\
    ( (This)->lpVtbl -> IntersectWith(This,IntersectObject,option,retval) ) 

#define ICircleWrapper_get_PlotStyleName(This,retval)	\
    ( (This)->lpVtbl -> get_PlotStyleName(This,retval) ) 

#define ICircleWrapper_put_PlotStyleName(This,noname,retval)	\
    ( (This)->lpVtbl -> put_PlotStyleName(This,noname,retval) ) 

#define ICircleWrapper_get_Lineweight(This,retval)	\
    ( (This)->lpVtbl -> get_Lineweight(This,retval) ) 

#define ICircleWrapper_put_Lineweight(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Lineweight(This,noname,retval) ) 

#define ICircleWrapper_get_EntityTransparency(This,retval)	\
    ( (This)->lpVtbl -> get_EntityTransparency(This,retval) ) 

#define ICircleWrapper_put_EntityTransparency(This,noname,retval)	\
    ( (This)->lpVtbl -> put_EntityTransparency(This,noname,retval) ) 

#define ICircleWrapper_get_Hyperlinks(This,retval)	\
    ( (This)->lpVtbl -> get_Hyperlinks(This,retval) ) 

#define ICircleWrapper_get_Material(This,retval)	\
    ( (This)->lpVtbl -> get_Material(This,retval) ) 

#define ICircleWrapper_put_Material(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Material(This,noname,retval) ) 

#define ICircleWrapper_get_EntityName(This,retval)	\
    ( (This)->lpVtbl -> get_EntityName(This,retval) ) 

#define ICircleWrapper_get_EntityType(This,retval)	\
    ( (This)->lpVtbl -> get_EntityType(This,retval) ) 

#define ICircleWrapper_get_color(This,retval)	\
    ( (This)->lpVtbl -> get_color(This,retval) ) 

#define ICircleWrapper_put_color(This,noname,retval)	\
    ( (This)->lpVtbl -> put_color(This,noname,retval) ) 


#define ICircleWrapper_Blue(This)	\
    ( (This)->lpVtbl -> Blue(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICircleWrapper_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CircleWrapper;

#ifdef __cplusplus

class DECLSPEC_UUID("37EFB168-E408-4A83-AF0C-5ABC92D358D4")
CircleWrapper;
#endif
#endif /* __CircleLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


