#include<aa.c>
BMAP * Start1 ="AutoPlay\\Start1.tga";
BMAP * Mouse_Main ="Txd\\cursor.pcx";
BMAP * Start2 ="AutoPlay\\Start2.tga";
BMAP * Exit1AP ="AutoPlay\\Exit1.tga";
BMAP * Exit2AP ="AutoPlay\\Exit2.tga";
BMAP * MainAutoPlay ="AutoPlay\\Main.tga";
BMAP * Ans1 ="Txd\\Ans\\Ans1.tga";
BMAP * Ans2="Txd\\Ans\\Ans2.tga";
BMAP * A1="Txd\\Ans\\1.tga";
BMAP * A2="Txd\\Ans\\2.tga";
BMAP * A3="Txd\\Ans\\3.tga";
function exit_AP ()
{
	
	while(key_any){wait(1);}
	sys_exit("");	
	
}
PANEL * MainBmapAP =
{
	bmap =MainAutoPlay;
}
PANEL * Ans_1 =
{
	pos_x =330;
	pos_y =100;
	layer = 10;
	bmap = A1;
}
PANEL * Ans_2 =
{
	pos_x =330;
	pos_y =100;
	layer = 10;
	bmap = A2;
}
PANEL * Ans_3 =
{
	pos_x =330;
	pos_y =100;
	layer = 10;	
	bmap = A3;
}
PANEL* AutoPlay_Main =
{
	layer = 99999;
	button(300,500,Start1,Start2,Start1,Safari_main_func,NULL,NULL);
	button(300,600,Exit2AP,Exit1AP,Exit2AP,exit_AP,NULL,NULL);
	button(650,550,Ans1,Ans2,Ans1,toggle_Answers,NULL,NULL);
}
function toggle_A_3 ()
{
	while(1)
	{
		
		if(key_c)
		{
			set(AutoPlay_Main,SHOW);
			reset(Ans_1,SHOW);
			reset(Ans_2,SHOW);
			reset(Ans_3,SHOW);	
		}	
		wait(1);	
		
		
	}
}
function toggle_A_2 ()
{
	reset(Ans_1,SHOW);
		set(Ans_2,SHOW);
	while(1)
	{
		if(key_x)
		{
			reset(Ans_2,SHOW);
			set(Ans_3,SHOW);	
			toggle_A_3();
		}
		wait(1);
		
		
	}
}
function toggle_Answers  ()
{
	reset(AutoPlay_Main,SHOW);
	set(Ans_1,SHOW);
	while(1)
	{
		if(key_z)
		{
			
			toggle_A_2();
			
		}	
		wait(1);	
	}
	
}
function main ()
{	
	video_mode = 8;
	mouse_mode = 4;
	video_alpha = 90;
	video_window(nullvector,nullvector,NULL,"Jungle Safari CD Autoplay Application");
	mouse_map = Mouse_Main;
	media_play("Movies\\APP.wmv",NULL,100);
	wait(-9);
	media_play("Movies\\AP.wmv",NULL,100);
	wait(-30);
	media_play("Movies\\Welcome.wmv",NULL,100);
	wait(-4);
	set(AutoPlay_Main,SHOW);
	set(MainBmapAP,SHOW);		
}