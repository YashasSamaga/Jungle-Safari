///////////////////////////////////////////////////
// level.c - level helper functions
// (c) oP group - jcl 2009
// save/load not supported due to use of pointers
///////////////////////////////////////////////////
#ifndef level_c
#define level_c

// helper function prototypes /////////////////////
function view_copy(VIEW* view);
function terrain_vertex(x,y,numverts_x,numverts_y);
function terrain_get_z(ENTITY* ent,number);
function terrain_set_z(ENTITY* ent,number,z);
function terrain_height(ENTITY* ent,VECTOR* position);


// main functions /////////////////////////////////

// load a level while displaying a splash screen for 2 seconds
function level_loadsplash(char* levelname,char* bmapname,var mode)
{
	PANEL* splash = pan_create(NULL,0);
	splash.bmap = bmap_create(bmapname);
	var splash_ticks = total_ticks;
	if(splash.bmap) {
// adapt bmap to screen size		
		wait(1);	// make sure video is initialized
		splash.scale_x = screen_size.x / bmap_width(splash.bmap);
		splash.scale_y = screen_size.y / bmap_height(splash.bmap);
		set(splash,SHOW);
// put splash screen to foreground _before_ level_load; 
// needs 3 frames on a triple buffer display		
		wait(3);
	}
	level_load(levelname);
// make sure to display the splash screen for at least 2 seconds	
	if(splash.bmap) 
	{
		while (total_ticks - splash_ticks < 2*16) wait(1);
// fade out for 0.5 seconds
		splash.alpha = 100;
		set(splash,TRANSLUCENT);
		while (splash.alpha > 0) {
			splash.alpha -= 100/8*time_step;
			wait(1);
		}
		ptr_remove(splash.bmap);
	}
	ptr_remove(splash);
}


// load a level that endlessly repeats in all directions
function level_loadendless(char* filename)
{
	level_load(filename); 
	if (!level_ent) return NULL;

// generate a separate view for the sky.
	VIEW* sky_view = view_create(0);
	set(sky_view,SKY | SHOW);

// generate 8 views around the camera view, 
// for extending the level in all directions
	int i;
	VIEW* horizon[8];
	for (i=0; i<8; i++) {
	  horizon[i] = view_create(1);
	  set(horizon[i],NOSKY | SHOW);
	}
	
	VECTOR mins,maxs;
	vec_set(mins,level_ent.min_x);
	vec_set(maxs,level_ent.max_x);
// clip the camera to the level size and set it as the last view
	var dx = maxs.x-mins.x; 
	var dy = maxs.y-mins.y; 
	camera.clip_far = minv(dx,dy);
	layer_sort(camera,2);
	set(camera,NOSKY | SHOW);
	
	while(1) 
	{
// displace the camera back when the level border is crossed
	   if (camera.x > maxs.x) 
	      camera.x -= dx; 
	   else if (camera.x < mins.x) 
	      camera.x += dx;   
	   if (camera.y > maxs.y) 
	      camera.y -= dy; 
	   else if (camera.y < mins.y) 
	      camera.y += dy;   
	
// update the additional views	   
	   view_copy(sky_view);
      for (i=0; i<8; i++) view_copy(horizon[i]);
	      
// arrange the 8 extra views at the borders of the camera view
      vec_add(horizon[0].x,vector(-dx,  0,0)); 
      vec_add(horizon[1].x,vector( dx,  0,0)); 
      vec_add(horizon[2].x,vector(  0,-dy,0)); 
      vec_add(horizon[3].x,vector(-dx,-dy,0)); 
      vec_add(horizon[4].x,vector( dx,-dy,0)); 
      vec_add(horizon[5].x,vector(  0, dy,0)); 
      vec_add(horizon[6].x,vector(-dx, dy,0)); 
      vec_add(horizon[7].x,vector( dx, dy,0)); 
	  
      proc_mode = PROC_LATE; // the extra views must be updated after the camera	   
	   wait(1);   
	}
}


// make terrain tiled by adjusting all border vertices to the same height
function terrain_tile(ENTITY* terrain)
{
   if (!terrain) return NULL;
   var i,j,start_z,end_z;

   var numverts_x = ent_status(terrain,2)+1;
   var numverts_y = ent_status(terrain,3)+1;
   var overlap = 4;

// fit vertical borders (y direction)
   var offset = numverts_x-1;
   for (i=1; i<=numverts_x*numverts_y; i+=numverts_x)
   {
      start_z = terrain_get_z(terrain,i+overlap);
      end_z = terrain_get_z(terrain,i+offset-overlap);
      for (j=0; j<overlap; j++) {
        terrain_set_z(terrain,i+j,start_z+(end_z-start_z)*0.5/(j+1));
        terrain_set_z(terrain,i+offset-j,end_z+(start_z-end_z)*0.5/(j+1));
      }
   }

// fit horizontal borders (x direction)
   offset = (numverts_y-1)*numverts_x;
   for (i=1; i<=numverts_x; i++)
   {
      start_z = terrain_get_z(terrain,i+overlap*numverts_x);
      end_z = terrain_get_z(terrain,i+offset-overlap*numverts_x);
      for (j=0; j<overlap; j++) {
        terrain_set_z(terrain,i+j*numverts_x,start_z+(end_z-start_z)*0.5/(j+1));
        terrain_set_z(terrain,i+offset-j*numverts_x,end_z+(start_z-end_z)*0.5/(j+1));
      }
   }
}

// place an entity at a random position in terrain valleys
// uses: skill60
function ent_terrain_place(ENTITY* ent,ENTITY* terrain,minheight,maxheight)
{
   if (!ent || !terrain) return;
	var num,ground_z,height;
// initialize places array	
	if (!terrain.skill60)
	   terrain.skill60 = sys_nxalloc(ent_status(terrain,1));
	char* terrain_places = (char*)terrain.skill60;

   var i=0,j=0;   
   do 
   {
// calculate random position on terrain      
	   ent.x = terrain.min_x + random(terrain.max_x-terrain.min_x);
	   ent.y = terrain.min_y + random(terrain.max_y-terrain.min_y);

// check the vertex height at that place
   	num = ent_nextvertex(terrain,ent.x);
	   ground_z = terrain_get_z(terrain,num);
	   if (terrain.max_z == terrain.min_z)
	   	height = 50;
	   else 	
	   	height = 100*(ground_z-terrain.min_z)/(terrain.max_z-terrain.min_z); // height factor, 0..1
	   
	   if (j++ > 50) break;       // place anyway when desired height range is not available
	   if (terrain_places[num-1]) // when place already occupied 
	      if (i++ < 10) continue; // make 10 attempts to place it elsewhere
   } 
   while (minheight > height || height > maxheight); // continue when outside height limits
   
   terrain_places[num-1] = 1; // mark place as occupied
   ent.z = ground_z - ent.scale_z*ent.min_z - 2; // plant entity on terrain ground
} 

// helper functions /////////////////////////////////////////

// copy camera to target view
function view_copy(VIEW* view)
{
   vec_set(view.x,camera.x);
   vec_set(view.pan,camera.pan);
   view.clip_far = camera.clip_far;
   view.clip_near = camera.clip_near;
   view.fog_start = camera.fog_start;
   view.fog_end = camera.fog_end;
   view.arc = camera.arc;
   view.aspect = camera.aspect;
   view.size_x = camera.size_x;
   view.size_y = camera.size_y;
   view.flags = (view.flags & ~NOSHADER) | (camera.flags & NOSHADER);
}

// get and set terrain height
function terrain_get_z(ENTITY* ent,number)
{
   CONTACT c;
   if (!ent_getvertex(ent,c,number)) return 0;
   return c.z;
}

function terrain_set_z(ENTITY* ent,number,z)
{
   CONTACT c;
   if (!ent_getvertex(ent,c,number)) return 0;
   c.v = NULL;
   c.z = z;
   ent_setvertex(ent,c,0);
}

// returns the 1-based vertex number for 0-based x and y quad numbers
function terrain_vertex(ENTITY* terrain,x,y)
{
   return(y*(ent_status(terrain,2)+1)+x+1);
}

// returns the height of the next vertex at the given position
function terrain_height(ENTITY* ent,VECTOR* position)
{
	if (!position) return 0;
  if (!ent) ent = level_ent; 
	return (terrain_get_z(ent,ent_nextvertex(ent,position))); 
// works only for chunked terrain, or terrain placed at (0,0,0).
// Otherwise a local/world coordinate conversion is required
}

// return a terrain position above ground
VECTOR* terrain_pos(ENTITY* terrain,x,y,z)
{
	return vector(x,y,z+terrain_height(terrain,vector(x,y,z)));
}

//////////////////////////////////////////////////////////////
#endif
