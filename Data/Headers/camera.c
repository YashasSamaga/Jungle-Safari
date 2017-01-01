///////////////////////////////////////////////////////////////////////////////////////////
// Template camera
// Written by George Pirvu - v1.2 November 2009
// May 2010 - major cleanup (jcl)
///////////////////////////////////////////////////////////////////////////////////////////
// TODO: use c_trace to make obstacles transparent

#ifndef t_car_cameras_c
#define t_car_cameras_c
#include <keys.c>

var tcamera_mode = 1;
var tcamera_dist = 250;
var tcamera_height = 50;
var tcamera_minDist = 100;
var tcamera_maxDist = 2000;
var tcamera_zoomDist = 2;

// fixed camera position
var tcamera_pos_x = 0;
var tcamera_pos_y = 0; // also for 3rd person

// first person camera offset
var tcamera_offset_x = 0;
var tcamera_offset_y = 10; // also for 3rd person
var tcamera_offset_z = 20; 

///////////////////////////////////////////////////////////////////////////////////////

STRING* key_togglecamera = "c";
STRING* key_camera1 = "f1";
STRING* key_camera2 = "f2";
STRING* key_camera3 = "f3";
STRING* key_camera4 = "f4";
STRING* key_camera5 = "f5";
STRING* key_camera6 = "f6";

var joy_togglecamera = 4;

///////////////////////////////////////////////////////////////////////////////////////

// look at the entity from a fixed xy position and a given height
function camera_face(ENTITY* ent,var height)
{
	if (!ent) return;
// adjust height
	camera.z = ent.z + height;
// face ent
	vec_to_angle(camera.pan,vec_diff(NULL,ent.x,camera.x));
}

// look at the entity from position that moves with it
function camera_offset(ENTITY* ent,VECTOR* offset)
{
	if (!ent) return;
	vec_set(camera.x,offset);
	vec_add(camera.x,ent.x);
	camera_face(ent,offset.z);
}

// look at the entity from a given angle (0 == behind) and offset
function camera_orbit(ENTITY* ent,var angle,var dist,var height)
{
	if (!ent) return;
// set camera position at given angle and distance
	vec_set(camera.x,vector(dist,0,0));
	vec_rotate(camera.x,vector(ent.pan+180+angle,0,0));
	vec_add(camera.x,ent.x);
	camera_face(ent,height);
}

// chase the entity with the camera, while keeping distance and height
function camera_chase(ENTITY* ent,var dist,var height)
{	
	if (!ent) return;
// move camera along line to ent	
	VECTOR vLine;
	vec_diff(vLine,ent.x,camera.x);
	vec_normalize(vLine,dist);
	vec_set(camera.x,vec_diff(NULL,ent.x,vLine));
	camera_face(ent,height);
}

// first or third person camera
function camera_person(ENTITY* ent,VECTOR* offset,var factor)
{
	if (!ent) return;
	vec_set(camera.x,offset);
	vec_rotate(camera.x,ent.pan);
	vec_add(camera.x,ent.x);
	vec_set(camera.pan,vector(ent.pan,ent.tilt*factor,ent.roll*factor));
	if (camera.z < ent.z) { // don't move camera in the ground 
		camera.tilt = 0; 
		camera.z = ent.z;
	}
}

function camera_startup()
{
	while(!player) wait(1);
	if (!tcamera_mode) return;

	while(tcamera_mode)
	{
		if(key_hit(key_togglecamera) || joy_hit(joy_togglecamera))
			tcamera_mode = (tcamera_mode % 6)+1;
		else if(key_hit(key_camera1))
			tcamera_mode = 1;
		else if(key_hit(key_camera2))
			tcamera_mode = 2;
		else if(key_hit(key_camera3))
			tcamera_mode = 3;
		else if(key_hit(key_camera4))
			tcamera_mode = 4;
		else if(key_hit(key_camera5))
			tcamera_mode = 5;
		else if(key_hit(key_camera6))
			tcamera_mode = 6;
			
		tcamera_dist -= tcamera_zoomDist * time_step * mickey.z; // zoom using the mouse wheel
		tcamera_dist = clamp(tcamera_dist,tcamera_minDist,tcamera_maxDist);
		camera.genius = NULL;

		switch(tcamera_mode) // orbit or chase camera?
		{
			case 1: 
				camera_chase(player,tcamera_dist,tcamera_height); break;
			case 2: 
				camera_orbit(player,0,tcamera_dist,tcamera_height); break;
			case 3: 
				vec_set(camera.x,vector(tcamera_pos_x,tcamera_pos_y,0));
				camera_face(player,tcamera_dist); break;
			case 4: 
				camera_offset(player,vector(tcamera_dist,tcamera_dist,tcamera_height)); break;
			case 5: 
				camera.genius = player;
				camera_person(player,
					vector(tcamera_offset_x,tcamera_offset_y,tcamera_offset_z),0.5); 
				break;
			case 6: 
				camera_person(player,
					vector(-tcamera_dist,tcamera_offset_y,tcamera_height),0.8); 
				break;
		}
		wait(1);
	}
}



#endif //t_car_cameras_c
