///////////////////////////////////////////////////
// particles.c - particles helper functions
// (c) oP group - jcl 2009
///////////////////////////////////////////////////
#ifndef particles_c
#define particles_c

#define SPRITE_DEFAULT "dot.tga"
#define _CREATOR  skill60
#define _VEL_X    skill61
#define _VEL_Y    skill62
#define _VEL_Z    skill63
#define _GRAVITY  skill64
#define _SIZE     skill65
#define _FADE     skill66
#define _LIFESPAN skill69
#define _MOVE     FLAG7


// particle helper functions /////////////////////////////////////

// sets the vector to random direction and length
function vec_randomize (VECTOR* vec, var range)
{
   vec_set(vec,vector(random(1)-0.5,random(1)-0.5,random(1)-0.5));
   vec_normalize(vec,random(range));
}

// fades out a particle 
function p_fade(PARTICLE* p)
{
    p.alpha -= p.skill_a*time_step;
    if (p.alpha <= 0) p.lifespan = 0;
}

// moves a particle together with the creator entity
function p_follow(PARTICLE* p)
{
   if (!you) return;
   if (p.skill_x != 0) { 
 // add the "you" position difference to the particle position
      vec_add(p.x,your.x);
      vec_sub(p.x,p.skill_x);
   }
   vec_set(p.skill_x,your.x); // store old "you" position
}


// sprite particle helper functions //////////////////////////////

// fades out a sprite particle
function p_fade_sprite(ENTITY* p)
{
    p.alpha -= p._FADE*time_step;
    if (p.alpha <= 0) p._LIFESPAN = 0;
}

// moves a particle sprite together with the creator entity
function p_follow_sprite(ENTITY* p)
{
   if (!p._CREATOR) return;
   you = p._CREATOR;
   if (p.skill70 != 0) { 
 // add the "you" position difference to the particle position
      vec_add(p.x,your.x);
      vec_sub(p.x,p.skill70);
   }
   vec_set(p.skill70,your.x); // store old "you" position
}


// internal sprite lifetime and movement function
function p_run_sprite(ENTITY* p)
{
   while (p._LIFESPAN > 0) 
   {
      vec_fill(p.scale_x,0.1*p._SIZE);
      wait(1);

	   if(is(p,_MOVE)) 
	   {
		   VECTOR speed;
		   vec_set(speed,p._VEL_X);
		   vec_scale(speed,time_step);
		   p._VEL_Z -= p._GRAVITY * time_step;
		   vec_add(p.x,speed);  
		}
	   
	   p._LIFESPAN -= time_step;
   }
   ent_remove(p); 
}

// sprite effect function
// can be called like effect_local(..), plus particle image or NULL as first parameter
function effect_sprite(STRING* image,EVENT func,var number,VECTOR* pos,VECTOR* vel)
{
   if (!image) image = SPRITE_DEFAULT;
   var i;
   for (i=0; i<number; i++)
   {
   	  var old_collision_mode = collision_mode;
   	  collision_mode = 0;
      ENTITY* p = ent_createlocal(image,pos,NULL);
      collision_mode = old_collision_mode;
      p._CREATOR = me; // creator entity
      p._LIFESPAN = 80;
      set(p,LIGHT|UNLIT|PASSABLE|UNTOUCHABLE);
      vec_set(p._VEL_X,vel);
      p.roll = 0.1;    // face the camera
      p.event = func;
      p.emask |= ENABLE_FRAME;
      p_run_sprite(p);
   }
}

#endif