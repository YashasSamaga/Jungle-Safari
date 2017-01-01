#include <picture.h>

#define DDSD_CAPS 1
#define DDSD_HEIGHT 2
#define DDSD_WIDTH 4
#define DDSD_PITCH 8
#define DDSD_BACKBUFFERCOUNT 32
#define DDSD_ZBUFFERBITDEPTH 64
#define DDSD_ALPHABITDEPTH 128
#define DDSD_LPSURFACE 2048
#define DDSD_PIXELFORMAT 4096
#define DDSD_CKDESTOVERLAY 0x2000
#define DDSD_CKDESTBLT 0x4000
#define DDSD_CKSRCOVERLAY 0x8000
#define DDSD_CKSRCBLT 0x10000
#define DDSD_MIPMAPCOUNT 0x20000
#define DDSD_REFRESHRATE 0x40000
#define DDSD_LINEARSIZE 0x80000
#define DDSD_TEXTURESTAGE 0x100000
#define DDSD_FVF 0x200000
#define DDSD_SRCVBHANDLE 0x400000
#define DDSD_ALL 0x7ff9ee
#define DDOSD_GUID 1
#define DDOSD_COMPRESSION_RATIO 2
#define DDOSD_SCAPS 4
#define DDOSD_OSCAPS 8
#define DDOSD_ALL 15
#define DDOSDCAPS_OPTCOMPRESSED 1
#define DDOSDCAPS_OPTREORDERED 2
#define DDOSDCAPS_MONOLITHICMIPMAP 4
#define DDOSDCAPS_VALIDSCAPS 0x30004800
#define DDOSDCAPS_VALIDOSCAPS 7
#define DDCOLOR_BRIGHTNESS 1
#define DDCOLOR_CONTRAST 2
#define DDCOLOR_HUE 4
#define DDCOLOR_SATURATION 8
#define DDCOLOR_SHARPNESS 16
#define DDCOLOR_GAMMA 32
#define DDCOLOR_COLORENABLE 64
#define DDSCAPS_RESERVED1 1
#define DDSCAPS_ALPHA 2
#define DDSCAPS_BACKBUFFER 4
#define DDSCAPS_COMPLEX 8
#define DDSCAPS_FLIP 16
#define DDSCAPS_FRONTBUFFER 32
#define DDSCAPS_OFFSCREENPLAIN 64
#define DDSCAPS_OVERLAY 128
#define DDSCAPS_PALETTE 256
#define DDSCAPS_PRIMARYSURFACE 512
#define DDSCAPS_RESERVED3 1024
#define DDSCAPS_SYSTEMMEMORY 2048
#define DDSCAPS_TEXTURE 4096
#define DDSCAPS_3DDEVICE 0x2000
#define DDSCAPS_VIDEOMEMORY 0x4000
#define DDSCAPS_VISIBLE 0x8000
#define DDSCAPS_WRITEONLY 0x10000
#define DDSCAPS_ZBUFFER 0x20000
#define DDSCAPS_OWNDC 0x40000
#define DDSCAPS_LIVEVIDEO 0x80000
#define DDSCAPS_HWCODEC 0x100000
#define DDSCAPS_MODEX 0x200000
#define DDSCAPS_MIPMAP 0x400000
#define DDSCAPS_RESERVED2 0x800000
#define DDSCAPS_ALLOCONLOAD 0x4000000
#define DDSCAPS_VIDEOPORT 0x8000000
#define DDSCAPS_LOCALVIDMEM 0x10000000
#define DDSCAPS_NONLOCALVIDMEM 0x20000000
#define DDSCAPS_STANDARDVGAMODE 0x40000000
#define DDSCAPS_OPTIMIZED 0x80000000
#define DDSCAPS2_HARDWAREDEINTERLACE 2
#define DDSCAPS2_HINTDYNAMIC 4
#define DDSCAPS2_HINTSTATIC 8
#define DDSCAPS2_TEXTUREMANAGE 16
#define DDSCAPS2_RESERVED1 32
#define DDSCAPS2_RESERVED2 64
#define DDSCAPS2_OPAQUE 128
#define DDSCAPS2_HINTANTIALIASING 256
#define DDSCAPS2_CUBEMAP 512
#define DDSCAPS2_CUBEMAP_POSITIVEX 1024
#define DDSCAPS2_CUBEMAP_NEGATIVEX 2048
#define DDSCAPS2_CUBEMAP_POSITIVEY 4096
#define DDSCAPS2_CUBEMAP_NEGATIVEY 0x2000
#define DDSCAPS2_CUBEMAP_POSITIVEZ 0x4000
#define DDSCAPS2_CUBEMAP_NEGATIVEZ 0x8000
#define DDSCAPS2_CUBEMAP_ALLFACES (DDSCAPS2_CUBEMAP_POSITIVEX | DDSCAPS2_CUBEMAP_NEGATIVEX | DDSCAPS2_CUBEMAP_POSITIVEY | DDSCAPS2_CUBEMAP_NEGATIVEY | DDSCAPS2_CUBEMAP_POSITIVEZ | DDSCAPS2_CUBEMAP_NEGATIVEZ)
#define DDSCAPS2_MIPMAPSUBLEVEL 0x10000
#define DDSCAPS2_D3DTEXTUREMANAGE 0x20000
#define DDSCAPS2_DONOTPERSIST 0x40000
#define DDSCAPS2_STEREOSURFACELEFT 0x80000
#define DDCAPS_3D 1
#define DDCAPS_ALIGNBOUNDARYDEST 2
#define DDCAPS_ALIGNSIZEDEST 4
#define DDCAPS_ALIGNBOUNDARYSRC 8
#define DDCAPS_ALIGNSIZESRC 16
#define DDCAPS_ALIGNSTRIDE 32
#define DDCAPS_BLT 64
#define DDCAPS_BLTQUEUE 128
#define DDCAPS_BLTFOURCC 256
#define DDCAPS_BLTSTRETCH 512
#define DDCAPS_GDI 1024
#define DDCAPS_OVERLAY 2048
#define DDCAPS_OVERLAYCANTCLIP 4096
#define DDCAPS_OVERLAYFOURCC 0x2000
#define DDCAPS_OVERLAYSTRETCH 0x4000
#define DDCAPS_PALETTE 0x8000
#define DDCAPS_PALETTEVSYNC 0x10000
#define DDCAPS_READSCANLINE 0x20000
#define DDCAPS_RESERVED1 0x40000
#define DDCAPS_VBI 0x80000
#define DDCAPS_ZBLTS 0x100000
#define DDCAPS_ZOVERLAYS 0x200000
#define DDCAPS_COLORKEY 0x400000
#define DDCAPS_ALPHA 0x800000
#define DDCAPS_COLORKEYHWASSIST 0x1000000
#define DDCAPS_NOHARDWARE 0x2000000
#define DDCAPS_BLTCOLORFILL 0x4000000
#define DDCAPS_BANKSWITCHED 0x8000000
#define DDCAPS_BLTDEPTHFILL 0x10000000
#define DDCAPS_CANCLIP 0x20000000
#define DDCAPS_CANCLIPSTRETCHED 0x40000000
#define DDCAPS_CANBLTSYSMEM 0x80000000
#define DDCAPS2_CERTIFIED 1
#define DDCAPS2_NO2DDURING3DSCENE 2
#define DDCAPS2_VIDEOPORT 4
#define DDCAPS2_AUTOFLIPOVERLAY 8
#define DDCAPS2_CANBOBINTERLEAVED 16
#define DDCAPS2_CANBOBNONINTERLEAVED 32
#define DDCAPS2_COLORCONTROLOVERLAY 64
#define DDCAPS2_COLORCONTROLPRIMARY 128
#define DDCAPS2_CANDROPZ16BIT 256
#define DDCAPS2_NONLOCALVIDMEM 512
#define DDCAPS2_NONLOCALVIDMEMCAPS 1024
#define DDCAPS2_NOPAGELOCKREQUIRED 2048
#define DDCAPS2_WIDESURFACES 4096
#define DDCAPS2_CANFLIPODDEVEN 0x2000
#define DDCAPS2_CANBOBHARDWARE 0x4000
#define DDCAPS2_COPYFOURCC 0x8000
#define DDCAPS2_PRIMARYGAMMA 0x20000
#define DDCAPS2_CANRENDERWINDOWED 0x80000
#define DDCAPS2_CANCALIBRATEGAMMA 0x100000
#define DDCAPS2_FLIPINTERVAL 0x200000
#define DDCAPS2_FLIPNOVSYNC 0x400000
#define DDCAPS2_CANMANAGETEXTURE 0x800000
#define DDCAPS2_TEXMANINNONLOCALVIDMEM 0x1000000
#define DDCAPS2_STEREO 0x2000000
#define DDCAPS2_SYSTONONLOCAL_AS_SYSTOLOCAL 0x4000000
#define DDFXALPHACAPS_BLTALPHAEDGEBLEND 1
#define DDFXALPHACAPS_BLTALPHAPIXELS 2
#define DDFXALPHACAPS_BLTALPHAPIXELSNEG 4
#define DDFXALPHACAPS_BLTALPHASURFACES 8
#define DDFXALPHACAPS_BLTALPHASURFACESNEG 16
#define DDFXALPHACAPS_OVERLAYALPHAEDGEBLEND 32
#define DDFXALPHACAPS_OVERLAYALPHAPIXELS 64
#define DDFXALPHACAPS_OVERLAYALPHAPIXELSNEG 128
#define DDFXALPHACAPS_OVERLAYALPHASURFACES 256
#define DDFXALPHACAPS_OVERLAYALPHASURFACESNEG 512
#define DDFXCAPS_BLTARITHSTRETCHY 32
#define DDFXCAPS_BLTARITHSTRETCHYN 16
#define DDFXCAPS_BLTMIRRORLEFTRIGHT 64
#define DDFXCAPS_BLTMIRRORUPDOWN 128
#define DDFXCAPS_BLTROTATION 256
#define DDFXCAPS_BLTROTATION90 512
#define DDFXCAPS_BLTSHRINKX 1024
#define DDFXCAPS_BLTSHRINKXN 2048
#define DDFXCAPS_BLTSHRINKY 4096
#define DDFXCAPS_BLTSHRINKYN 0x2000
#define DDFXCAPS_BLTSTRETCHX 0x4000
#define DDFXCAPS_BLTSTRETCHXN 0x8000
#define DDFXCAPS_BLTSTRETCHY 0x10000
#define DDFXCAPS_BLTSTRETCHYN 0x20000
#define DDFXCAPS_OVERLAYARITHSTRETCHY 0x40000
#define DDFXCAPS_OVERLAYARITHSTRETCHYN 8
#define DDFXCAPS_OVERLAYSHRINKX 0x80000
#define DDFXCAPS_OVERLAYSHRINKXN 0x100000
#define DDFXCAPS_OVERLAYSHRINKY 0x200000
#define DDFXCAPS_OVERLAYSHRINKYN 0x400000
#define DDFXCAPS_OVERLAYSTRETCHX 0x800000
#define DDFXCAPS_OVERLAYSTRETCHXN 0x1000000
#define DDFXCAPS_OVERLAYSTRETCHY 0x2000000
#define DDFXCAPS_OVERLAYSTRETCHYN 0x4000000
#define DDFXCAPS_OVERLAYMIRRORLEFTRIGHT 0x8000000
#define DDFXCAPS_OVERLAYMIRRORUPDOWN 0x10000000
#define DDFXCAPS_BLTALPHA 1
#define DDFXCAPS_BLTFILTER DDFXCAPS_BLTARITHSTRETCHY
#define DDFXCAPS_OVERLAYALPHA 4
#define DDFXCAPS_OVERLAYFILTER DDFXCAPS_OVERLAYARITHSTRETCHY
#define DDSVCAPS_RESERVED1 1
#define DDSVCAPS_RESERVED2 2
#define DDSVCAPS_RESERVED3 4
#define DDSVCAPS_RESERVED4 8
#define DDSVCAPS_STEREOSEQUENTIAL 16
#define DDPCAPS_4BIT 1
#define DDPCAPS_8BITENTRIES 2
#define DDPCAPS_8BIT 4
#define DDPCAPS_INITIALIZE 0
#define DDPCAPS_PRIMARYSURFACE 16
#define DDPCAPS_PRIMARYSURFACELEFT 32
#define DDPCAPS_ALLOW256 64
#define DDPCAPS_VSYNC 128
#define DDPCAPS_1BIT 256
#define DDPCAPS_2BIT 512
#define DDPCAPS_ALPHA 1024
#define DDSPD_IUNKNOWNPOINTER 1
#define DDSPD_VOLATILE 2
#define DDBD_1 0x4000
#define DDBD_2 0x2000
#define DDBD_4 4096
#define DDBD_8 2048
#define DDBD_16 1024
#define DDBD_24 0X00000200l
#define DDBD_32 256
#define DDCKEY_COLORSPACE 1
#define DDCKEY_DESTBLT 2
#define DDCKEY_DESTOVERLAY 4
#define DDCKEY_SRCBLT 8
#define DDCKEY_SRCOVERLAY 16
#define DDCKEYCAPS_DESTBLT 1
#define DDCKEYCAPS_DESTBLTCLRSPACE 2
#define DDCKEYCAPS_DESTBLTCLRSPACEYUV 4
#define DDCKEYCAPS_DESTBLTYUV 8
#define DDCKEYCAPS_DESTOVERLAY 16
#define DDCKEYCAPS_DESTOVERLAYCLRSPACE 32
#define DDCKEYCAPS_DESTOVERLAYCLRSPACEYUV 64
#define DDCKEYCAPS_DESTOVERLAYONEACTIVE 128
#define DDCKEYCAPS_DESTOVERLAYYUV 256
#define DDCKEYCAPS_SRCBLT 512
#define DDCKEYCAPS_SRCBLTCLRSPACE 1024
#define DDCKEYCAPS_SRCBLTCLRSPACEYUV 2048
#define DDCKEYCAPS_SRCBLTYUV 4096
#define DDCKEYCAPS_SRCOVERLAY 0x2000
#define DDCKEYCAPS_SRCOVERLAYCLRSPACE 0x4000
#define DDCKEYCAPS_SRCOVERLAYCLRSPACEYUV 0x8000
#define DDCKEYCAPS_SRCOVERLAYONEACTIVE 0x10000
#define DDCKEYCAPS_SRCOVERLAYYUV 0x20000
#define DDCKEYCAPS_NOCOSTOVERLAY 0x40000
#define DDPF_ALPHAPIXELS 1
#define DDPF_ALPHA 2
#define DDPF_FOURCC 4
#define DDPF_PALETTEINDEXED4 8
#define DDPF_PALETTEINDEXEDTO8 16
#define DDPF_PALETTEINDEXED8 32
#define DDPF_RGB 64
#define DDPF_COMPRESSED 128
#define DDPF_RGBTOYUV 256
#define DDPF_YUV 512
#define DDPF_ZBUFFER 1024
#define DDPF_PALETTEINDEXED1 2048
#define DDPF_PALETTEINDEXED2 4096
#define DDPF_ZPIXELS 0x2000
#define DDPF_STENCILBUFFER 0x4000
#define DDPF_ALPHAPREMULT 0x8000
#define DDPF_LUMINANCE 0x20000
#define DDPF_BUMPLUMINANCE 0x40000
#define DDPF_BUMPDUDV 0x80000
#define DDENUMSURFACES_ALL 1
#define DDENUMSURFACES_MATCH 2
#define DDENUMSURFACES_NOMATCH 4
#define DDENUMSURFACES_CANBECREATED 8
#define DDENUMSURFACES_DOESEXIST 16
#define DDSDM_STANDARDVGAMODE 1
#define DDEDM_REFRESHRATES 1
#define DDEDM_STANDARDVGAMODES 2
#define DDSCL_FULLSCREEN 1
#define DDSCL_ALLOWREBOOT 2
#define DDSCL_NOWINDOWCHANGES 4
#define DDSCL_NORMAL 8
#define DDSCL_EXCLUSIVE 16
#define DDSCL_ALLOWMODEX 64
#define DDSCL_SETFOCUSWINDOW 128
#define DDSCL_SETDEVICEWINDOW 256
#define DDSCL_CREATEDEVICEWINDOW 512
#define DDSCL_MULTITHREADED 1024
#define DDSCL_FPUSETUP 2048
#define DDSCL_FPUPRESERVE 4096
#define DDBLT_ALPHADEST 1
#define DDBLT_ALPHADESTCONSTOVERRIDE 2
#define DDBLT_ALPHADESTNEG 4
#define DDBLT_ALPHADESTSURFACEOVERRIDE 8
#define DDBLT_ALPHAEDGEBLEND 16
#define DDBLT_ALPHASRC 32
#define DDBLT_ALPHASRCCONSTOVERRIDE 64
#define DDBLT_ALPHASRCNEG 128
#define DDBLT_ALPHASRCSURFACEOVERRIDE 256
#define DDBLT_ASYNC 512
#define DDBLT_COLORFILL 1024
#define DDBLT_DDFX 2048
#define DDBLT_DDROPS 4096
#define DDBLT_KEYDEST 0x2000
#define DDBLT_KEYDESTOVERRIDE 0x4000
#define DDBLT_KEYSRC 0x8000
#define DDBLT_KEYSRCOVERRIDE 0x10000
#define DDBLT_ROP 0x20000
#define DDBLT_ROTATIONANGLE 0x40000
#define DDBLT_ZBUFFER 0x80000
#define DDBLT_ZBUFFERDESTCONSTOVERRIDE 0x100000
#define DDBLT_ZBUFFERDESTOVERRIDE 0x200000
#define DDBLT_ZBUFFERSRCCONSTOVERRIDE 0x400000
#define DDBLT_ZBUFFERSRCOVERRIDE 0x800000
#define DDBLT_WAIT 0x1000000
#define DDBLT_DEPTHFILL 0x2000000
#define DDBLT_DONOTWAIT 0x8000000
#define DDBLTFAST_NOCOLORKEY 0
#define DDBLTFAST_SRCCOLORKEY 1
#define DDBLTFAST_DESTCOLORKEY 2
#define DDBLTFAST_WAIT 16
#define DDBLTFAST_DONOTWAIT 32
#define DDFLIP_WAIT 1
#define DDFLIP_EVEN 2
#define DDFLIP_ODD 4
#define DDFLIP_NOVSYNC 8
#define DDFLIP_INTERVAL2 0x2000000
#define DDFLIP_INTERVAL3 0x3000000
#define DDFLIP_INTERVAL4 0x4000000
#define DDFLIP_STEREO 16
#define DDFLIP_DONOTWAIT 32
#define DDOVER_ALPHADEST 1
#define DDOVER_ALPHADESTCONSTOVERRIDE 2
#define DDOVER_ALPHADESTNEG 4
#define DDOVER_ALPHADESTSURFACEOVERRIDE 8
#define DDOVER_ALPHAEDGEBLEND 16
#define DDOVER_ALPHASRC 32
#define DDOVER_ALPHASRCCONSTOVERRIDE 64
#define DDOVER_ALPHASRCNEG 128
#define DDOVER_ALPHASRCSURFACEOVERRIDE 256
#define DDOVER_HIDE 512
#define DDOVER_KEYDEST 1024
#define DDOVER_KEYDESTOVERRIDE 2048
#define DDOVER_KEYSRC 4096
#define DDOVER_KEYSRCOVERRIDE 0x2000
#define DDOVER_SHOW 0x4000
#define DDOVER_ADDDIRTYRECT 0x8000
#define DDOVER_REFRESHDIRTYRECTS 0x10000
#define DDOVER_REFRESHALL 0x20000
#define DDOVER_DDFX 0x80000
#define DDOVER_AUTOFLIP 0x100000
#define DDOVER_BOB 0x200000
#define DDOVER_OVERRIDEBOBWEAVE 0x400000
#define DDOVER_INTERLEAVED 0x800000
#define DDOVER_BOBHARDWARE 0x1000000
#define DDOVER_ARGBSCALEFACTORS 0x2000000
#define DDOVER_DEGRADEARGBSCALING 0x4000000
#define DDLOCK_SURFACEMEMORYPTR 0
#define DDLOCK_WAIT 1
#define DDLOCK_EVENT 2
#define DDLOCK_READONLY 16
#define DDLOCK_WRITEONLY 32
#define DDLOCK_NOSYSLOCK 2048
#define DDLOCK_NOOVERWRITE 4096
#define DDLOCK_DISCARDCONTENTS 0x2000
#define DDLOCK_OKTOSWAP 0x2000
#define DDLOCK_DONOTWAIT 0x4000
#define DDBLTFX_ARITHSTRETCHY 1
#define DDBLTFX_MIRRORLEFTRIGHT 2
#define DDBLTFX_MIRRORUPDOWN 4
#define DDBLTFX_NOTEARING 8
#define DDBLTFX_ROTATE180 16
#define DDBLTFX_ROTATE270 32
#define DDBLTFX_ROTATE90 64
#define DDBLTFX_ZBUFFERRANGE 128
#define DDBLTFX_ZBUFFERBASEDEST 256
#define DDOVERFX_ARITHSTRETCHY 1
#define DDOVERFX_MIRRORLEFTRIGHT 2
#define DDOVERFX_MIRRORUPDOWN 4
#define DDWAITVB_BLOCKBEGIN 1
#define DDWAITVB_BLOCKBEGINEVENT 2
#define DDWAITVB_BLOCKEND 4
#define DDGFS_CANFLIP 1
#define DDGFS_ISFLIPDONE 2
#define DDGBS_CANBLT 1
#define DDGBS_ISBLTDONE 2
#define DDENUMOVERLAYZ_BACKTOFRONT 0
#define DDENUMOVERLAYZ_FRONTTOBACK 1
#define DDOVERZ_SENDTOFRONT 0
#define DDOVERZ_SENDTOBACK 1
#define DDOVERZ_MOVEFORWARD 2
#define DDOVERZ_MOVEBACKWARD 3
#define DDOVERZ_INSERTINFRONTOF 4
#define DDOVERZ_INSERTINBACKOF 5
#define DDSGR_CALIBRATE 1
#define DDSMT_ISTESTREQUIRED 1
#define DDEM_MODEPASSED 1
#define DDEM_MODEFAILED 2
#define DD_OK 0
#define DD_FALSE S_FALSE
#define DDENUMRET_CANCEL 0
#define DDENUMRET_OK 1

#define DDERR_SURFACELOST 0x887601c2
#define DDERR_WASSTILLDRAWING 0x8876021c

typedef struct
{
	long dwColorSpaceLowValue; 
	long dwColorSpaceHighValue; 
}DDCOLORKEY;
typedef struct _DDPIXELFORMAT
{
	DWORD dwSize; 
	DWORD dwFlags; 
	DWORD dwFourCC;
	DWORD u1;
	DWORD u2;
	DWORD u3;
	DWORD u4;
	DWORD u5;
}DDPIXELFORMAT;
typedef struct _DDSCAPS
{
	DWORD dwCaps; 
}DDSCAPS;
typedef struct _DDSURFACEDESC
{
	DWORD dwSize; 
	DWORD dwFlags; 
	DWORD dwHeight; 
	DWORD dwWidth; 
	DWORD lPitch;
	DWORD dwBackBufferCount; 
	DWORD u2;
	DWORD dwAlphaBitDepth; 
	DWORD dwReserved; 
	LPVOID lpSurface; 
	DDCOLORKEY ddckCKDestOverlay; 
	DDCOLORKEY ddckCKDestBlt; 
	DDCOLORKEY ddckCKSrcOverlay; 
	DDCOLORKEY ddckCKSrcBlt; 
	DDPIXELFORMAT ddpfPixelFormat; 
	DDSCAPS ddsCaps; 
}DDSURFACEDESC;
typedef struct
{
	DWORD dwSize; 
	DWORD dwDDFX; 
	DWORD dwROP; 
	DWORD dwDDROP; 
	DWORD dwRotationAngle; 
	DWORD dwZBufferOpCode; 
	DWORD dwZBufferLow; 
	DWORD dwZBufferHigh; 
	DWORD dwZBufferBaseDest; 
	DWORD dwZDestConstBitDepth; 
	DWORD u1;
	DWORD dwZSrcConstBitDepth;
	DWORD u2;
	DWORD dwAlphaEdgeBlendBitDepth; 
	DWORD dwAlphaEdgeBlend; 
	DWORD dwReserved;
	DWORD dwAlphaDestConstBitDepth; 
	DWORD u3;
	DWORD dwAlphaSrcConstBitDepth; 
	DWORD u4;
	DWORD u5;
	DDCOLORKEY ddckDestColorkey; 
	DDCOLORKEY ddckSrcColorkey; 
} DDBLTFX;
typedef struct _IDirectDrawVtbl
{
	long __stdcall QueryInterface(long, long riid, void** ppvObj) ;
	long __stdcall AddRef(long ) ;
	long __stdcall Release(long ) ;
	long __stdcall Compact(long ) ;
	long __stdcall CreateClipper(long, DWORD, long, long) ;
	long __stdcall CreatePalette(long, DWORD, long, long,long) ;
	long __stdcall CreateSurface(long,long, long,long) ;
	long __stdcall DuplicateSurface(long, long,long) ;
	long __stdcall EnumDisplayModes(long, DWORD, long, long,long) ;
	long __stdcall EnumSurfaces(long, DWORD, long, long,long) ;
	long __stdcall FlipToGDISurface(long ) ;
	long __stdcall GetCaps(long, long, long) ;
	long __stdcall GetDisplayMode(long, long) ;
	long __stdcall GetFourCCCodes(long, long, long) ;
	long __stdcall GetGDISurface(long, long) ;
	long __stdcall GetMonitorFrequency(long, long) ;
	long __stdcall GetScanLine(long,long) ;
	long __stdcall GetVerticalBlankStatus(long,long) ;
	long __stdcall Initialize(long, GUID *) ;
	long __stdcall RestoreDisplayMode(long ) ;
	long __stdcall SetCooperativeLevel(long, HWND, DWORD) ;
	long __stdcall SetDisplayMode(long, DWORD, DWORD,DWORD) ;
	long __stdcall WaitForVerticalBlank(long, DWORD, HANDLE) ;
}IDirectDrawVtbl;

typedef interface _IDDraw
{
	IDirectDrawVtbl * lpVtbl;
}IDirectDraw;

typedef struct _IDirectDrawSurfaceVtbl
{
	long __stdcall QueryInterface(long, long riid, long  ppvObj);
	long __stdcall AddRef(long);
	long __stdcall Release(long);
	long __stdcall AddAttachedSurface(long, long);
	long __stdcall AddOverlayDirtyRect(long, long);
	long __stdcall Blt(long, long,long, long,DWORD, long);
	long __stdcall BltBatch(long, long, DWORD, DWORD);
	long __stdcall BltFast(long, DWORD,DWORD,long, long,DWORD);
	long __stdcall DeleteAttachedSurface(long, DWORD,long);
	long __stdcall EnumAttachedSurfaces(long, long,long);
	long __stdcall EnumOverlayZOrders(long, DWORD,long,long);
	long __stdcall Flip(long, long, DWORD);
	long __stdcall GetAttachedSurface(long, long, long *);
	long __stdcall GetBltStatus(long, DWORD);
	long __stdcall GetCaps(long, long);
	long __stdcall GetClipper(long, long);
	long __stdcall GetColorKey(long, DWORD, long);
	long __stdcall GetDC(long, HDC *);
	long __stdcall GetFlipStatus(long, DWORD);
	long __stdcall GetOverlayPosition(long, long,long);
	long __stdcall GetPalette(long, long);
	long __stdcall GetPixelFormat(long, long);
	long __stdcall GetSurfaceDesc(long, long);
	long __stdcall Initialize(long, long, long);
	long __stdcall IsLost(long);
	long __stdcall Lock(long, long,long,DWORD,HANDLE);
	long __stdcall ReleaseDC(long, HDC);
	long __stdcall Restore(long);
	long __stdcall SetClipper(long, long);
	long __stdcall SetColorKey(long, DWORD, long);
	long __stdcall SetOverlayPosition(long, LONG, LONG);
	long __stdcall SetPalette(long, long);
	long __stdcall Unlock(long, long);
	long __stdcall UpdateOverlay(long, long, long,long,DWORD, long);
	long __stdcall UpdateOverlayDisplay(long, DWORD);
	long __stdcall UpdateOverlayZOrder(long, DWORD, long);
}IDirectDrawSurfaceVtbl;

typedef interface _IDirectDrawSurface
{
	IDirectDrawSurfaceVtbl *lpVtbl;
}IDirectDrawSurface;

typedef struct _IDirectDrawClipperVtbl
{
	long __stdcall QueryInterface(long, long riid, long ppvObj) ;
	long __stdcall AddRef(long) ;
	long __stdcall Release(long) ;
	long __stdcall GetClipList(long, long, long, long) ;
	long __stdcall GetHWnd(long, HWND *) ;
	long __stdcall Initialize(long, long, DWORD) ;
	long __stdcall IsClipListChanged(long, BOOL *) ;
	long __stdcall SetClipList(long, long,DWORD) ;
	long __stdcall SetHWnd(long, DWORD, HWND) ;
}IDirectDrawClipperVtbl;

typedef interface _IDirectDrawClipper
{
	IDirectDrawClipperVtbl *lpVtbl;
}IDirectDrawClipper;

//typedef struct IDirectDraw *LPDIRECTDRAW;
//typedef struct IDirectDrawSurface *LPDIRECTDRAWSURFACE;
//typedef struct IDirectDrawPalette *LPDIRECTDRAWPALETTE;
//typedef struct IDirectDrawClipper *LPDIRECTDRAWCLIPPER;

HRESULT WINAPI DirectDrawCreate(GUID *lpGUID, long lplpDD, long pUnkOuter);