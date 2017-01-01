/////////////////////////////////////////////////////////////////////
// Model / Level viever functions
// This script is used when the engine runs a level or model.
// (c) jcl / oP group  2009
/////////////////////////////////////////////////////////////////////
#ifndef viewer_c
#define viewer_c

//#define VIEW_LIGHTMAPS

#include <default.c> // default key functions
#ifndef VIEW_LIGHTMAPS
 #include <mtlfx.c>  // standard shaders
#endif

void viewer_startup() 
{ 
	diag_mode = 2;
	collision_mode = 1;
#ifdef VIEW_LIGHTMAPS
   d3d_lines |= 4;
#endif   
// activate default movement and settings in entity viewer mode
    if (2 == run_mode) // level
    {
       def_move(); 
    }
    else if (3 == run_mode) // entity
    {
        wait(1);    // load the entity
        if (NULL != player) 
        {
            STRING* sPlayerModel = str_for_entfile(NULL,player);
            video_window(NULL,NULL,0,sPlayerModel);
            if (4 == ent_type(player)) { // terrain
                camera.z = player.max_z;
#ifndef VIEW_LIGHTMAPS
                if (ent_status(player,8) >= 3) // 3 skins or more
                    player.material = mtl_terraintex;
#endif
                def_move(); 
            } else 
            {
// place the entity so that it's full in the camera view
                c_setminmax(player);
                camera.pan = -180;
                vec_zero(camera.x);
                var ent_size_z = maxv(0,player.max_z) - minv(0,player.min_z);
                var ent_size_y = maxv(0,player.max_y) - minv(0,player.min_y);
                player.x = -2*maxv(ent_size_z,ent_size_y);
                player.z = -0.6*(player.max_z + player.min_z);
                while (1) 
                {
// rotate and move the entity
                    if (!def_camera) 
                    {
                        player.pan += 5*time_step*(key_force.x + key_d-key_a + 5*mouse_right*mouse_force.x);
                        player.tilt += 5*time_step*(5*mouse_right*mouse_force.y);
                        player.x += 0.1*ent_size_y*time_step*(key_force.y+key_w-key_s);
                        player.z -= 0.1*ent_size_z*time_step*(key_force.z+key_home-key_end);
                    }
                    wait(1);
                }
            }
        }
    }
}

#endif