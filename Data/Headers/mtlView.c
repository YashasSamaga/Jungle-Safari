////////////////////////////////////////////////////////////////////
//View for post processing effects
//
//desc: to use the camera.stage = ssView;

#ifndef mtlView
#define mtlView

#define PRAGMA_PATH "%EXE_DIR%\\code";

VIEW* ssView = { layer=2; flags=PROCESS_TARGET; }

////////////////////////////////////////////////////////////////////
//Shader Name: Blur
//Material Name: mtl_blur
//Variable1: facBlur
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_blur =
{
	effect = "pp_blur.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Bloom Blur
//Material Name: mtl_bloomblur
//Variable1: facBlur
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_bloomblur =
{
	effect = "pp_bloomblur.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Gaussian Blur
//Material Name: mtl_gaussian
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_gaussian =
{
	effect = "pp_gaussian.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Dilate
//Material Name: mtl_dilate
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_dilate =
{
	effect = "pp_dilate.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Displace
//Material Name: mtl_displace
//Variable1: displacement
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_displace =
{
	effect = "pp_displace.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Erode
//Material Name: mtl_erode
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_erode =
{
	effect = "pp_erode.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Kuwahara
//Material Name: mtl_kuwahara
//Variable1: nPixels
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_kuwahara =
{
	effect = "pp_kuwahara.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Median
//Material Name: mtl_median
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used
MATERIAL* mtl_median =
{
	effect = "pp_median.fx";
}

////////////////////////////////////////////////////////////////////
//Shader Name: Sharpen
//Material Name: mtl_sharpen
//Variable1: facSharpen
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_sharpen =
{
	effect = "pp_sharpen.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Sharpen More
//Material Name: mtl_sharpen2
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_sharpen2 =
{
	effect = "pp_sharpen2.fx";
}


////////////////////////////////////////////////////////////////////
//Shader Name: Bleach
//Material Name: mtl_bleach
//Variable1: opacity
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_bleach =
{
	effect = "pp_bleach.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Desaturate
//Material Name: mtl_desaturate
//Variable1: desat
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_desaturate =
{
	effect = "pp_desaturate.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Sepia
//Material Name: mtl_sepia
//Variable1: desat
//Variable2: toned
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_sepia =
{
	effect = "pp_sepia.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Monochrome
//Material Name: mtl_monochrome
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_monochrome =
{
	effect = "pp_monochrome.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Negative
//Material Name: mtl_negative
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_negative =
{
	effect = "pp_negative.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Colorshift
//Material Name: mtl_colorshift
//Variable1: xShift
//Variable2: yShift
//Variable3: zShift
//Variable4: Not used
MATERIAL* mtl_colorshift =
{
	effect = "pp_colorshift.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Colorspin
//Material Name: mtl_colorspin
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_colorspin =
{
	effect = "pp_colorspin.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Emboss
//Material Name: mtl_emboss
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_emboss =
{
	effect = "pp_emboss.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Laplace
//Material Name: mtl_laplace
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_laplace =
{
	effect = "pp_laplace.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Sobel
//Material Name: mtl_sobel
//Variable1: Not used
//Variable2: Not used
//Variable3: Not used
//Variable4: Not used
MATERIAL* mtl_sobel =
{
	effect = "pp_sobel.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Posterize
//Material Name: mtl_posterize
//Variable1: nColors
//Variable2: gamma
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_posterize =
{
	effect = "pp_posterize.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Lens
//Material Name: mtl_lens
//Variable1: xPos
//Variable2: yPos
//Variable3: Not used
//Variable4: Not used

MATERIAL* mtl_lens =
{
	effect = "pp_lens.fx";
}
////////////////////////////////////////////////////////////////////
//Shader Name: Bias
//Material Name: mtl_bias
//Variable1: bias
//Variable2: gradient
//Variable3: Not used
//Variable4: Not used
MATERIAL* mtl_bias =
{
	alpha = 100;
	effect = "pp_bias.fx";
}

///////////////////////////////////////////////////////////////////
// Section : Stencil Blur

#ifdef STENCIL_POSTPROCESS // old method 
MATERIAL* mtl_stencilBlur = 
{
  effect = "pp_stencilBlur.fx";	// 9x9 box blur
}

function stencil_switch(var on)
{
	if (on) {	
		ssView.material = mtl_stencilBlur;	
		camera.stage = ssView;	
		render_stencil = bmap_createblack(screen_size.x,screen_size.y,32);	
	} else {	
		ssView.material = NULL;					
		camera.stage = NULL;	
	}
}
#endif

function stencil_blur(var on)
{
	if (on) {
	   if (total_frames < 1) wait(1); // wait until video is open 
		effect_load(mat_shadow,"st_stencilBlur.fx"); // poisson blur
	} else	
		effect_load(mat_shadow,NULL);
}

function pp_set(VIEW* view,MATERIAL* m)
{
	if (m) {	
		ssView.material = m;	
		camera.stage = ssView;	
	} else {	
		ssView.material = NULL;					
		camera.stage = NULL;	
	}
}

#endif