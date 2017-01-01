#include <com.h>

typedef struct _IPictureVtbl
{
	long __stdcall QueryInterface(long,long riid,void *ppvObject);
	long __stdcall AddRef(long);
	long __stdcall Release(long);
	long __stdcall get_Handle(long,long *pHandle);
	long __stdcall get_hPal(long,long *phPal);
	long __stdcall get_Type(long,short *pType);
	long __stdcall get_Width(long,long *pWidth);
	long __stdcall get_Height(long,long *pHeight);
	long __stdcall Render(long,HDC hDC,LONG x,LONG y,LONG cx,LONG cy,long xSrc,long ySrc,long cxSrc,long cySrc,RECT* pRcWBounds);
	long __stdcall set_hPal(long,long hPal);
	long __stdcall get_CurDC(long,HDC  *phDC);
	long __stdcall SelectPicture(long,HDC hDCIn,HDC  *phDCOut,long *phBmpOut);
	long __stdcall get_KeepOriginalFormat(long,BOOL  *pKeep);
	long __stdcall put_KeepOriginalFormat(long,BOOL keep);
	long __stdcall PictureChanged(long);
	long __stdcall SaveAsFile(long,long pStream,BOOL fSaveMemCopy,LONG  *pCbSize);
	long __stdcall get_Attributes(long,DWORD  *pDwAttr);
} IPictureVtbl;

typedef interface _IPicture
{
	IPictureVtbl *lpVtbl;
} IPicture;

typedef struct _IStreamVtbl
{
	long __stdcall QueryInterface(long,long riid,void **ppvObject);
	long __stdcall AddRef(long);
	long __stdcall Release(long);
	long __stdcall Read(long,void *pv,long cb,long *pcbRead);
	long __stdcall Write(long,void *pv,long cb,long *pcbWritten);
	long __stdcall Seek(long,ULARGE_INTEGER dlibMove,DWORD dwOrigin,ULARGE_INTEGER *plibNewPosition);
	long __stdcall SetSize(long,ULARGE_INTEGER libNewSize);
	long __stdcall CopyTo(long,long pstm,ULARGE_INTEGER cb,ULARGE_INTEGER *pcbRead,ULARGE_INTEGER *pcbWritten);
	long __stdcall Commit(long,DWORD grfCommitFlags);
	long __stdcall Revert(long);
	long __stdcall LockRegion(long,ULARGE_INTEGER libOffset,ULARGE_INTEGER cb,DWORD dwLockType);
	long __stdcall UnlockRegion(long,ULARGE_INTEGER libOffset,ULARGE_INTEGER cb,DWORD dwLockType);
	long __stdcall Stat(long,long pstatstg,DWORD grfStatFlag);
	long __stdcall Clone(long,long ppstm);
} IStreamVtbl;

typedef interface _IStream
{
	IStreamVtbl*	lpVtbl;
} IStream;

long __stdcall CreateStreamOnHGlobal (long hGlobal, BOOL fDeleteOnRelease,long ppstm);
long __stdcall OleLoadPicture(long lpstream, LONG lSize, BOOL fRunmode,long riid, long lplpvObj);

IPicture*  LoadPic(char* fname)
{
	HANDLE hFile = CreateFile(fname, GENERIC_READ, 0, 0, OPEN_EXISTING, 0, 0);
	if (hFile==INVALID_HANDLE_VALUE) return NULL;
	DWORD dwFileSize =GetFileSize(hFile, NULL);	
	
	LPVOID pvData = NULL;
	long hGlobal = GlobalAlloc(GMEM_MOVEABLE, dwFileSize);
	pvData = GlobalLock(hGlobal);
	DWORD dwBytesRead = 0;
	BOOL bRead = ReadFile(hFile, pvData, dwFileSize, &dwBytesRead, NULL);
	GlobalUnlock(hGlobal);
	CloseHandle(hFile);
	
	IStream* pstm = NULL;
	IPicture* pPic=NULL;
	
	long hr = CreateStreamOnHGlobal(hGlobal, TRUE, &pstm);
	
	IID IID_IPicture;
	IIDFromStr("{7BF80980-BF32-101A-8BBB-00AA00300CAB}",&IID_IPicture);
	if (pstm)
	{
		OleLoadPicture(pstm, dwFileSize, FALSE, &IID_IPicture,&pPic);	
		pstm->Release();
	}
	return pPic;
}