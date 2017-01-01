#include<Data\\Headers\\acknex.h>
#include<Data\\Headers\\litec.h>
#include<Data\\Headers\\windows.h>
#include<Data\\Headers\\default.c>
#include<safari.c>
/////////////////////////
BMAP * M1="Txd\\Mean1.tga";
BMAP * M2="Txd\\Mean2.tga";
BMAP * M3="Txd\\Mean3.tga";
BMAP * ExitFin_B ="Txd\\BAckground\\Exit.tga";
BMAP * TP1 ="Txd\\EI\\TP1.tga";
BMAP * TP2 ="Txd\\EI\\TP2.tga";
BMAP * Ani1 ="Txd\\EI\\Animals1.tga";
BMAP * Ani2 ="Txd\\EI\\Animals2.tga";
BMAP * Key1 ="Txd\\EI\\KW1.tga";
BMAP * Key2 ="Txd\\EI\\KeyWords2.tga";
BMAP * Return1 ="Txd\\Return1.tga";
BMAP * Return2 ="Txd\\Return2.tga";
BMAP * Aspen ="Txd\\EI\\B\\Aspen.tga";
BMAP * Brich ="Txd\\EI\\B\\Brich.tga";
BMAP * Chestnut ="Txd\\EI\\B\\ChestNut.tga";
BMAP * Cork ="Txd\\EI\\B\\Cork.tga";
BMAP * Cypress ="Txd\\EI\\B\\Cypress.tga";
BMAP * Dogberry ="Txd\\EI\\B\\Dogberry.tga";
BMAP * Hornbeam ="Txd\\EI\\B\\Hornbeam.tga";
BMAP * Koala ="Txd\\EI\\B\\Koala.tga";
BMAP * Larch ="Txd\\EI\\B\\Larch.tga";
BMAP * Loris ="Txd\\EI\\B\\Loris.tga";
BMAP * Orangutan ="Txd\\EI\\B\\Orangutan.tga";
BMAP * Platypus ="Txd\\EI\\B\\Platypus.tga";
BMAP * Quoll ="Txd\\EI\\B\\Quoll.tga";
BMAP * Tasmanain ="Txd\\EI\\B\\Tasmanian.tga";
BMAP * Wonderboom ="Txd\\EI\\B\\Wonderboom.tga";
BMAP * Exit1 ="AutoPlay\\Exit1.tga";
BMAP * Exit2 ="AutoPlay\\Exit2.tga";
BMAP * Aspen1="Txd\\EI\\PA\\Aspen1.tga";
BMAP * Aspen2="Txd\\EI\\PA\\Aspen2.tga";
BMAP * Brich1="Txd\\EI\\PA\\Brich1.tga";
BMAP * Brich2="Txd\\EI\\PA\\Brich2.tga";
BMAP * Chestnut1="Txd\\EI\\PA\\Chestnut1.tga";
BMAP * Chestnut2="Txd\\EI\\PA\\Chestnut2.tga";
BMAP * Cork1="Txd\\EI\\PA\\Cork1.tga";
BMAP * Cork2="Txd\\EI\\PA\\Cork2.tga";
BMAP * Cypress1="Txd\\EI\\PA\\Cypress1.tga";
BMAP * Cypress2="Txd\\EI\\PA\\Cypress2.tga";
BMAP * Dogberry1="Txd\\EI\\PA\\Dogberry1.tga";
BMAP * Dogberry2="Txd\\EI\\PA\\Dogberry2.tga";
BMAP * Hornbeam1="Txd\\EI\\PA\\Hornbeam1.tga";
BMAP * Hornbeam2="Txd\\EI\\PA\\Hornbeam2.tga";
BMAP * Koala1="Txd\\EI\\PA\\Koala1.tga";
BMAP * Koala2="Txd\\EI\\PA\\Koala2.tga";
BMAP * Larch1="Txd\\EI\\PA\\Larch1.tga";
BMAP * Larch2="Txd\\EI\\PA\\Larch2.tga";
BMAP * Loris1="Txd\\EI\\PA\\Loris1.tga";
BMAP * Loris2="Txd\\EI\\PA\\Loris2.tga";
BMAP * Orangutan1="Txd\\EI\\PA\\Orangutan1.tga";
BMAP * Orangutan2="Txd\\EI\\PA\\Orangutan2.tga";
BMAP * Platypus1="Txd\\EI\\PA\\Platypus1.tga";
BMAP * Platypus2="Txd\\EI\\PA\\Platypus2.tga";
BMAP * Quoll1="Txd\\EI\\PA\\Quoll1.tga";
BMAP * Quoll2="Txd\\EI\\PA\\Quoll2.tga";
BMAP * TD1="Txd\\EI\\PA\\TD1.tga";
BMAP * TD2="Txd\\EI\\PA\\TD2.tga";
BMAP * Wonderboom1="Txd\\EI\\PA\\Wonderboom1.tga";
BMAP * Wonderboom2="Txd\\EI\\PA\\Wonderboom2.tga";
BMAP * Images_OPTA1 ="Txd\\Buttons\\TreePlant1.tga";
BMAP * Images_OPTA2 ="Txd\\Buttons\\TreePlant2.tga";
BMAP * Images_OPTB1 ="Txd\\Buttons\\Animals1.tga";
BMAP * Images_OPTB2 ="Txd\\Buttons\\Animals2.tga";
BMAP * Images_OPTC1 ="Txd\\Buttons\\Products1.tga";
BMAP * Images_OPTC2 ="Txd\\Buttons\\Products2.tga";
BMAP * Images_OPTD1 ="Txd\\Buttons\\Keywords1.tga";
BMAP * Images_OPTD2 ="Txd\\Buttons\\Keywords2.tga";
BMAP * Back1="Txd\\Buttons\\Back1.tga";
BMAP * Back2="Txd\\Buttons\\Back2.tga";
BMAP * Next1="Txd\\Buttons\\Next1.tga";
BMAP * Next2="Txd\\Buttons\\Next2.tga";
BMAP * Auto1="Txd\\Buttons\\AutoC1.tga";
BMAP * Auto2="Txd\\Buttons\\AutoC2.tga";
BMAP * Images_Plant1 ="Txd\\Images\\Acer.tga";
BMAP * Images_Plant2 ="Txd\\Images\\Aspen.tga";
BMAP * Images_Plant3 ="Txd\\Images\\Brich.tga";
BMAP * Images_Plant4 ="Txd\\Images\\ChestNut.tga";
BMAP * Images_Plant5 ="Txd\\Images\\Cork.tga";
BMAP * Images_Plant6 ="Txd\\Images\\Cypress.tga";
BMAP * Images_Plant7 ="Txd\\Images\\Dogberry.tga";
BMAP * Images_Plant8 ="Txd\\Images\\HornBeam.tga";
BMAP * Images_Plant9 ="Txd\\Images\\Larch.tga";
BMAP * Images_Plant10 ="Txd\\Images\\WonderBoom.tga";
BMAP * Images_Products ="Txd\\Images\\Products.tga";
BMAP * Images_Animals1 ="Txd\\Images\\Set1.tga";
BMAP * Images_Animals2 ="Txd\\Images\\Set2.tga";
BMAP * Images_Animals3 ="Txd\\Images\\Set3.tga";
BMAP * Images_Key1 ="Txd\\Images\\Type1.tga";
BMAP * Images_Key2 ="Txd\\Images\\Type2.tga";
BMAP * Images_Key3 ="Txd\\Images\\Type3.tga"; 
BMAP * Safari = "Txd\\Logo\\Safari.tga";
BMAP * BackgroundMeanings ="Txd\\Background\\MeaningsMain.tga";
BMAP * HomeBar ="Txd\\Background\\HomeBar.tga";
BMAP * BackgroundMain ="Txd\\Background\\Main.tga";
BMAP * BackgroundImages ="Txd\\Background\\ImagesMain.tga";
BMAP * BackgroundExtraInfo ="Txd\\Background\\ExtrainfoMain.tga";
BMAP * BackgroundWelcome ="Txd\\Background\\WelcomeMain.tga";
BMAP * BackgroundWelcomeLoad ="Txd\\Background\\WelcomeLoad.tga";
BMAP * BackgroundExitLoad ="Txd\\Background\\WelcomeLoad.tga";
BMAP * BackgroundPowerpoint ="Txd\\Background\\PowerPointMain.tga";
BMAP * HomeOptA1="Txd\\Buttons\\Meanings1.tga";
BMAP * HomeOptA2="Txd\\Buttons\\Meanings2.tga";
BMAP * HomeOptB1="Txd\\Buttons\\Images1.tga";
BMAP * HomeOptB2="Txd\\Buttons\\Images2.tga";
BMAP * HomeOptC1="Txd\\Buttons\\Extrainfo1.tga";
BMAP * HomeOptC2="Txd\\Buttons\\Extrainfo2.tga";
BMAP * HomeOptD1="Txd\\Buttons\\OurTeam1.tga";
BMAP * HomeOptD2="Txd\\Buttons\\OurTeam2.tga";
BMAP * HomeOptExit1="Txd\\Buttons\\Exit1.tga";
BMAP * HomeOptExit2="Txd\\Buttons\\Exit2.tga";
BMAP * HomeOptE1="Txd\\Buttons\\Powerpoint1.tga";
BMAP * HomeOptE2="Txd\\Buttons\\Powerpoint2.tga";
BMAP * Play1="Txd\\Buttons\\Play1.tga";
BMAP * Play2="Txd\\Buttons\\Play1.tga";
BMAP * ToolBar ="Txd\\Background\\Toolbar.tga";
SOUND* Beep1 ="Audio\\beep1.wav"; 
SOUND* Beep2 ="Audio\\beep2.wav"; 
PANEL * Mean1 =
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;
	bmap = M1;
}
PANEL * Mean2 =
{
	layer = 5;	
	pos_x = 330;
	pos_y = 100;
	bmap = M2;
	
}
PANEL * Mean3 =
{
	layer = 5;	
	pos_x = 330;
	pos_y = 100;
	bmap = M3;
	
}
PANEL * Koala_B =
{
	layer = 9;
	button(350,600,Return1,Return2,Return1,RET_EI_A,NULL,NULL);	
}
PANEL * Loris_B =
{
	layer = 9;
	button(350,600,Return1,Return2,Return1,RET_EI_A,NULL,NULL);	
}
PANEL * Orangutan_B=
{
	layer = 9;
	button(350,600,Return1,Return2,Return1,RET_EI_A,NULL,NULL);	
}
PANEL * Platypus_B =
{
	layer = 9;
	button(350,600,Return1,Return2,Return1,RET_EI_A,NULL,NULL);	
}
PANEL * Quoll_B =
{
	layer = 9;
	button(350,600,Return1,Return2,Return1,RET_EI_A,NULL,NULL);		
}
PANEL * Tasmanain_B =
{
	layer = 9;
	button(350,600,Return1,Return2,Return1,RET_EI_A,NULL,NULL);	
}
PANEL * Koala_pan =
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;	
	bmap = Koala;	
}
PANEL * Loris_pan =
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;	
	bmap = Loris;	
}
PANEL * Orangutan_pan=
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;	
	bmap = Orangutan;

	
}
PANEL * Platypus_pan =
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;	
	bmap = Platypus;

	
}
PANEL * Quoll_pan =
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;	
	bmap = Quoll;

	
}
PANEL * Tasmanain_pan =
{
	layer = 5;
	pos_x = 330;
	pos_y = 100;	
	bmap = Tasmanain;

	
}
PANEL * EI_P=
{
	layer = 9;
	button(300,100,Aspen1,Aspen2,Aspen1,EI_P_1,NULL,NULL);
	button(300,200,Brich1,Brich2,Brich1,EI_P_2,NULL,NULL);
	button(300,300,Chestnut1,Chestnut2,Chestnut1,EI_P_3,NULL,NULL);
	button(300,400,Cork1,Cork2,Cork1,EI_P_4,NULL,NULL);
	button(300,500,Cypress1,Cypress2,Cypress1,EI_P_5,NULL,NULL);
	button(600,100,Dogberry1,Dogberry2,Dogberry1,EI_P_6,NULL,NULL);
	button(600,200,Hornbeam1,Hornbeam2,Hornbeam1,EI_P_7,NULL,NULL);
	button(600,300,Wonderboom1,Wonderboom2,Wonderboom1,EI_P_8,NULL,NULL);
	button(600,400,Larch1,Larch2,Larch1,EI_P_9,NULL,NULL);
	button(600,500,Return1,Return2,Return1,NULL,NULL,NULL);	
}
PANEL * EI_A=
{
	layer = 9;
	pos_x =330 ;
	pos_y =100 ;
	button(000,100,Koala1,Koala2,Koala1,EI_A_1,NULL,NULL);
	button(000,200,Loris2,Loris1,Loris2,EI_A_2,NULL,NULL);
	button(000,300,Orangutan1,Orangutan2,Orangutan1,EI_A_3,NULL,NULL);
	button(000,400,Platypus2,Platypus1,Platypus2,EI_A_4,NULL,NULL);
	button(000,500,Quoll1,Quoll2,Quoll1,EI_A_5,NULL,NULL);
	button(300,100,TD1,TD1,TD1,EI_A_6,NULL,NULL);
	//button(600,200,,,,NULL,NULL,NULL);
	//button(600,300,,,,NULL,NULL,NULL);
	//button(600,400,,,,NULL,NULL,NULL);
	//button(600,500,,,,NULL,NULL,NULL);	
}
PANEL * EI_Pan =
{
	pos_x = 330 ;
	pos_y = 100;
	layer = 5;	
	bmap = BackgroundExtraInfo ;
}
PANEL *EI_B =
{
	layer= 9;
	button(350,400,TP1,TP2,TP1,toggle_EI_P,NULL,NULL);
	button(350,500,Ani1,Ani2,Ani1,toggle_Ani,NULL,NULL);
	//button(300,600,Key1,Key2,Key1,NULL,NULL,NULL);
	//button(300,100,,,,NULL,NULL,NULL);
	
}
PANEL * Aspen_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Aspen;	
}
PANEL * Brich_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Brich;	
}
PANEL * Chestnut_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Chestnut;	
}
PANEL * Cork_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Cork;	
}
PANEL * Cypress_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Cypress;	
}
PANEL * Dogberry_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Dogberry;	
}
PANEL * Hornbeam_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  = Hornbeam;	
}
PANEL * Larch_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Larch;	
}
PANEL * Wonderboom_pan=
{
	layer = 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap  =Wonderboom;	
}
PANEL * Aspen_B=
{
	layer = 99999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Brich_B=
{
	layer = 9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Chestnut_B=
{
	layer = 99999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Cork_B=
{
	layer = 9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Cypress_B=
{
	layer = 9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Dogberry_B=
{
	layer = 9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Hornbeam_B=
{
	layer =9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);	
}
PANEL * Larch_B=
{
	layer = 9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Wonderboom_B=
{
	layer = 9999;
	pos_x =330 ;
	pos_y =100 ;
	button(300,500,Back1,Back2,Back1,RET_EI_P,NULL,NULL);
}
PANEL * Products =
{
	pos_x =330;
	pos_y =100;
	bmap =Images_Products;
}
PANEL * Animals1_B = 
{
	layer = 9;	
	//button(380,500,Back1,Back2,Back1,NULL,NULL,NULL);	
	button(480,600,Next1,Next2,Next1,Next_Animals1,NULL,NULL);
}
PANEL * Animals2_B = 
{
	layer = 9;	
	button(280,600,Back1,Back2,Back1,Start_Animals ,NULL,NULL);	
	button(620,600,Next1,Next2,Next1,Next_Animals2,NULL,NULL);
}
PANEL * Animals3_B = 
{
	layer = 9;	
	button(480,600,Back1,Back2,Back1,Next_Animals1,NULL,NULL);	
	//button(580,500,Next1,Next2,Next1,NULL,NULL,NULL);
}
PANEL * Animals1 =
{
	layer = 5;
	pos_x= 330;
	pos_y = 100;
	bmap = Images_Animals1;	
}
PANEL * Animals2 =
{
	layer= 5;
	pos_x= 330;
	pos_y = 100;
	bmap = Images_Animals2;	
}
PANEL * Animals3 =
{
	layer= 5;
	pos_x= 330;
	pos_y = 100;
	bmap = Images_Animals3;	
}

PANEL * KeyWords1 =
{
	layer = 5;
	pos_x =330;
	pos_y =100;
	bmap =Images_Key1;	
}
PANEL * KeyWords2 =
{
	layer = 5;
	pos_x =330;
	pos_y =100;
	bmap =Images_Key2;		
}
PANEL * KeyWords3 =
{
	layer = 5;
	pos_x =330;
	pos_y =100;
	bmap =Images_Key3;		
}
PANEL * KeyWords1_B =
{
	layer = 9;
	pos_x =330;
	pos_y =100;
	button(350,500,Next1,Next2,Next1,Key_Next1,NULL,NULL);
}
PANEL * KeyWords2_B =
{
	layer = 9;
	pos_x =330;
	pos_y =100;	
	button(-50,500,Back1,Back2,Back1,Toggle_Key,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Key_Next2,NULL,NULL);
}
PANEL * KeyWords3_B =
{
	layer = 9;
	pos_x =330;
	pos_y =100;
	button(-50,500,Back1,Back2,Back1,Key_Next1,NULL,NULL);	
}

function Key_Next1 ()
{
	set(KeyWords2_B,SHOW);	
	set(KeyWords2,SHOW);
	reset(KeyWords1_B,SHOW);
	reset(KeyWords1,SHOW);
	reset(KeyWords3_B,SHOW);
	reset(KeyWords3,SHOW);	
}
function Key_Next2 ()
{
	reset(KeyWords2_B,SHOW);	
	reset(KeyWords2,SHOW);
	reset(KeyWords1_B,SHOW);
	reset(KeyWords1,SHOW);
	set(KeyWords3_B,SHOW);
	set(KeyWords3,SHOW);
	
}
PANEL * Plants_Images1_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Auto1,Auto2,Auto1,AutoPlay_Plants,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant1_Next,NULL,NULL);		
}
PANEL * Plants_Images2_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Back1,Back2,Back1,Start_Plants,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant2_Next,NULL,NULL);
}
PANEL * Plants_Images3_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Back1,Back2,Back1,Plant1_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant3_Next,NULL,NULL);
}
PANEL * Plants_Images4_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Back1,Back2,Back1,Plant2_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant4_Next,NULL,NULL);
}
PANEL * Plants_Images5_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Back1,Back2,Back1,Plant3_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant5_Next,NULL,NULL);
}
PANEL * Plants_Images6_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 
	button(50,500,Back1,Back2,Back1,Plant4_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant6_Next,NULL,NULL);
}
PANEL * Plants_Images7_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Back1,Back2,Back1,Plant5_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant7_Next,NULL,NULL);
}
PANEL * Plants_Images8_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 	
	button(50,500,Back1,Back2,Back1,Plant6_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant8_Next,NULL,NULL);
}
PANEL * Plants_Images9_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 
	button(50,500,Back1,Back2,Back1,Plant7_Next,NULL,NULL);	
	button(350,500,Next1,Next2,Next1,Plant9_Next,NULL,NULL);
}
PANEL * Plants_Images10_B =
{
	layer = 9;
	pos_x =330;
	pos_y = 100; 
	button(50,500,Back1,Back2,Back1,Plant8_Next,NULL,NULL);	
	//	button(200,500,Next1,Next2,Next1,Plant10_Next,NULL,NULL);
}
PANEL * Plants_Images1 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100; 
	bmap =Images_Plant1; 
}
PANEL * Plants_Images2 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100; 
	bmap =Images_Plant2; 
}
PANEL * Plants_Images3 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant3; 
	
}
PANEL * Plants_Images4 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant4; 	
}
PANEL * Plants_Images5 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant5; 		
}
PANEL * Plants_Images6 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant6; 
	
}
PANEL * Plants_Images7 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant7; 
	
}
PANEL * Plants_Images8 =
{
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant8;
	
}
PANEL * Plants_Images9 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant9;
	
}
PANEL * Plants_Images10 =
{	
	layer = 5;
	pos_x =330;
	pos_y = 100;
	bmap =Images_Plant10;
	
}

function Plant1_Next ()
{

	reset(Plants_Images1_B,SHOW);
	set(Plants_Images2_B,SHOW);
	reset(Plants_Images1,SHOW);
	set(Plants_Images2,SHOW);	
}
function Plant2_Next ()
{

	reset(Plants_Images2_B,SHOW);
	set(Plants_Images3_B,SHOW);
	reset(Plants_Images4,SHOW);
	reset(Plants_Images2,SHOW);
	set(Plants_Images3,SHOW);	
}
function Plant3_Next ()
{

	reset(Plants_Images3_B,SHOW);
	set(Plants_Images4_B,SHOW);
	reset(Plants_Images5,SHOW);
	reset(Plants_Images3,SHOW);
	set(Plants_Images4,SHOW);	
}
function Plant4_Next ()
{

	reset(Plants_Images4_B,SHOW);
	set(Plants_Images5_B,SHOW);
	reset(Plants_Images6,SHOW);
	reset(Plants_Images4,SHOW);
	set(Plants_Images5,SHOW);	
}
function Plant5_Next ()
{

	reset(Plants_Images5_B,SHOW);
	set(Plants_Images6_B,SHOW);
	reset(Plants_Images7,SHOW);
	reset(Plants_Images5,SHOW);
	set(Plants_Images6,SHOW);	
}
function Plant6_Next ()
{

	reset(Plants_Images6_B,SHOW);
	set(Plants_Images7_B,SHOW);
	reset(Plants_Images8,SHOW);
	reset(Plants_Images6,SHOW);
	set(Plants_Images7,SHOW);	
}
function Plant7_Next ()
{

	reset(Plants_Images7_B,SHOW);
	set(Plants_Images8_B,SHOW);
	reset(Plants_Images9,SHOW);
	reset(Plants_Images7,SHOW);
	set(Plants_Images8,SHOW);	
}
function Plant8_Next ()
{

	reset(Plants_Images10_B,SHOW);
	reset(Plants_Images10,SHOW);
	reset(Plants_Images8_B,SHOW);
	set(Plants_Images9_B,SHOW);
	reset(Plants_Images8,SHOW);
	set(Plants_Images9,SHOW);	
}
function Plant9_Next ()
{

	reset(Plants_Images9_B,SHOW);
	set(Plants_Images10_B,SHOW);
	reset(Plants_Images9,SHOW);
	set(Plants_Images10,SHOW);	
}
PANEL * Presentation_pan =
{
	layer = 4;
	bmap = BackgroundPowerpoint;		
}
PANEL * WelcomeScreen =
{
	button(0,720,ToolBar,ToolBar,ToolBar,NULL,NULL,NULL);
	bmap = BackgroundExitLoad ;
}
PANEL * ExitScreen =
{
	layer = 9999;
	
}
PANEL * Images_Opt =
{
	layer = 9999;
	pos_x = 330;
	pos_y = 100;
	bmap = BackgroundImages ;
	button(50,350,Images_OPTA1,Images_OPTA2,Images_OPTA1,AutoPlay_Plants,NULL,NULL);	
	button(50,400,Images_OPTB1,Images_OPTB2,Images_OPTB1,Start_Animals,NULL,NULL);
	button(300,350,Images_OPTC1,Images_OPTC2,Images_OPTC1,toggle_products,NULL,NULL);
	button(300,400,Images_OPTD1,Images_OPTD2,Images_OPTD1,Toggle_Key,NULL,NULL);
}

PANEL* Time =
{
	pos_x = -100;
	layer = 999;
	digits (50,720,11,"Arial#50b", 1,sys_hours); 
	digits (150,720,11,"Arial#50b", 1,sys_minutes); 
	digits (250,720,11,"Arial#50b", 1,sys_seconds);   
	digits (400,720,11, "Arial#50b", 1,sys_day); 
	digits (500,720,11,"Arial#50b", 1,sys_month);
	digits (600,720,10,"Arial#50b", 1,sys_year);
	flags = OUTLINE;
}
PANEL * HomeButtons =
{
	layer = 9;
	//button(600,660,Exit1,Exit2,Exit1,ExitApp,NULL,NULL);
	button(7,30,HomeOptA1,HomeOptA2,HomeOptA1,toggle_Meanings ,NULL,NULL);
	button(7,130,HomeOptE1,HomeOptE2,HomeOptE1,toggle_PP,NULL,NULL);
	button(7,230,HomeOptC1,HomeOptC2,HomeOptC1,toggle_EI,NULL,NULL);
	button(7,330,HomeOptB1,HomeOptB2,HomeOptB1,Toggle_Images,NULL,NULL;
	button(7,430,HomeOptD1,HomeOptD2,HomeOptD1,NULL,NULL,NULL);
	button(700,700,Exit1,Exit2,Exit1,ExitFinal,NULL,NULL);
}
PANEL * Meanings_Buttons =
{
	layer = 55;	
	button(470,600,Play1,Play2,Play1,	toggle_srt_m,NULL,NULL);
}
PANEL * Meanings_pan =
{
	layer =5;
	pos_x = 330;
	pos_y = 25;
	bmap = BackgroundMeanings;
	
}
PANEL * Products_Opt =
{
	layer= 5;
	pos_x =330 ;
	pos_y =100 ;
	bmap = Images_Products;		
}
PANEL * PowerPoint_Buttons =
{
	layer = 99999;
	button(470,600,Play1,Play2,Play1,Start_PP,NULL,NULL);	
}
PANEL * PowerPoint =
{
	pos_x = 330;
	pos_y = 50;
	layer = 44;
	bmap = BackgroundPowerpoint ;	
}
PANEL * ExitFin =
{
	bmap = ExitFin_B ;	
	
}
PANEL * Welcome_Home =
{
	layer = 3;
	pos_x = 330;
	pos_y = 50;
	bmap = BackgroundWelcome;
}
PANEL * Home =
{
	bmap = BackgroundMain;
	layer =1;
	button(0,0,HomeBar,HomeBar,HomeBar,NULL,NULL,NULL);
	button(0,720,ToolBar,ToolBar,ToolBar,NULL,NULL,NULL);
	button(20,500,Safari,Safari,Safari,NULL,NULL,NULL);
}
function ExitApp ()
{
	set(ExitScreen,SHOW);
	wait(-5);
	sys_exit("hWnd");
}
function Start_PP ()
{
	
	exec("Data\\PPT\\All.ppt",NULL);
}
function Next_Animals1 ()
{
	reset(Animals3,SHOW);
	reset(Animals3_B,SHOW);
	set(Animals2,SHOW);
	set(Animals2_B,SHOW);
	reset(Animals1,SHOW);
	reset(Animals1_B,SHOW);
}
function Next_Animals2 ()
{
	set(Animals3,SHOW);
	set(Animals3_B,SHOW);
	reset(Animals2,SHOW);	
	reset(Animals2_B,SHOW);
}
function Toggle_Images ()
{

	reset(KeyWords1_B,SHOW);
	reset(KeyWords1,SHOW);	
	reset(KeyWords2_B,SHOW);
	reset(KeyWords2,SHOW);	
	reset(KeyWords3_B,SHOW);
	reset(KeyWords3,SHOW);	
	reset(Plants_Images1,SHOW);	
	reset(Plants_Images1_B,SHOW);
	reset(Plants_Images2,SHOW);	
	reset(Plants_Images2_B,SHOW);
	reset(Plants_Images3,SHOW);	
	reset(Plants_Images3_B,SHOW);
	reset(Plants_Images4,SHOW);	
	reset(Plants_Images4_B,SHOW);
	reset(Plants_Images5,SHOW);	
	reset(Plants_Images5_B,SHOW);
	reset(Plants_Images6,SHOW);	
	reset(Plants_Images6_B,SHOW);
	reset(Plants_Images7,SHOW);	
	reset(Plants_Images7_B,SHOW);
	reset(Plants_Images8,SHOW);	
	reset(Plants_Images8_B,SHOW);
	reset(Plants_Images9,SHOW);	
	reset(Plants_Images9_B,SHOW);
	reset(Plants_Images10,SHOW);	
	reset(Plants_Images10_B,SHOW);
	reset(Animals1,SHOW);
	reset(Animals1_B,SHOW);
	set(Images_Opt,SHOW);	

	reset(Welcome_Home,SHOW);
	
	while(1)
	{
		if(key_r)
		{
		
			set(Welcome_Home,SHOW);
			reset(Images_Opt,SHOW);		
		}
		wait(1);
	}

}
function toggle_EI ()
{
	reset(Welcome_Home,SHOW);
	set(EI_Pan,SHOW);
	set(EI_B,SHOW);	
	while(1)
	{
		if(key_r)
		{
			set(Welcome_Home,SHOW);
			reset(EI_Pan,SHOW);	
			reset(EI_B,SHOW);		
		}
		wait(1);
	}
}
function RET_EI_P ()
{
	reset(Aspen_pan,SHOW);
	reset(Brich_pan,SHOW);
	reset(Chestnut_pan,SHOW);
	reset(Cork_pan,SHOW);
	reset(Cypress_pan,SHOW);
	reset(Dogberry_pan,SHOW);
	reset(Hornbeam_pan,SHOW);
	reset(Koala_pan,SHOW);
	reset(Larch_pan,SHOW);
	reset(Loris_pan,SHOW);
	reset(Orangutan_pan,SHOW);
	reset(Platypus_pan,SHOW);
	reset(Quoll_pan,SHOW);
	reset(Tasmanain_pan,SHOW);	
	reset(Wonderboom_pan,SHOW);
	
	reset(Aspen_B,SHOW);
	reset(Brich_B,SHOW);
	reset(Chestnut_B,SHOW);
	reset(Cork_B,SHOW);
	reset(Cypress_B,SHOW);
	reset(Dogberry_B,SHOW);
	reset(Hornbeam_B,SHOW);
	reset(Koala_B,SHOW);
	reset(Larch_B,SHOW);
	reset(Orangutan_B,SHOW);
	reset(Platypus_B,SHOW);
	reset(Quoll_B,SHOW);
	reset(Tasmanain_B,SHOW);	
	reset(Wonderboom_B,SHOW);	
	set(EI_P,SHOW);	
}
function RET_EI_A ()
{
	reset(Aspen_pan,SHOW);
	reset(Brich_pan,SHOW);
	reset(Chestnut_pan,SHOW);
	reset(Cork_pan,SHOW);
	reset(Cypress_pan,SHOW);
	reset(Dogberry_pan,SHOW);
	reset(Hornbeam_pan,SHOW);
	reset(Koala_pan,SHOW);
	reset(Larch_pan,SHOW);
	reset(Loris_pan,SHOW);
	reset(Orangutan_pan,SHOW);
	reset(Platypus_pan,SHOW);
	reset(Quoll_pan,SHOW);
	reset(Tasmanain_pan,SHOW);	
	reset(Wonderboom_pan,SHOW);
	
	reset(Aspen_B,SHOW);
	reset(Brich_B,SHOW);
	reset(Chestnut_B,SHOW);
	reset(Cork_B,SHOW);
	reset(Cypress_B,SHOW);
	reset(Dogberry_B,SHOW);
	reset(Hornbeam_B,SHOW);
	reset(Koala_B,SHOW);
	reset(Larch_B,SHOW);
	reset(Loris_B,SHOW);
	reset(Orangutan_B,SHOW);
	reset(Platypus_B,SHOW);
	reset(Quoll_B,SHOW);
	reset(Tasmanain_B,SHOW);	
	reset(Wonderboom_B,SHOW);
	
	set(EI_A,SHOW);		
	//	set(,SHOW);	
}function EI_P_1 ()
{
	set(Aspen_B,SHOW);
	set(Aspen_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}		
}
function EI_P_2 ()
{
	set(Brich_B,SHOW);
	set(Brich_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);	
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}		
}
function EI_P_3 ()
{
	set(Chestnut_B,SHOW);
	set(Chestnut_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);	
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}		
}
function EI_P_4()
{
	set(Cork_B,SHOW);
	set(Cork_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}			
}
function EI_P_5 ()
{
	set(Cypress_B,SHOW);
	set(Cypress_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);	
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}		
}
function EI_P_6 ()
{
	set(Dogberry_B,SHOW);
	set(Dogberry_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);	
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}		
}
function EI_P_7 ()
{
	set(Hornbeam_B,SHOW);
	set(Hornbeam_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);	
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}		
}
function EI_P_8()
{
	set(Larch_B,SHOW);
	set(Larch_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}			
}
function EI_P_9 ()
{
	set(Wonderboom_B,SHOW);
	set(Wonderboom_pan,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_P,SHOW);	
	while(1)
	{
		if(key_m)
		{
			
			RET_EI_P();
			
			
		}
		
		
		wait(1);
	}	
}
function toggle_Ani ()
{
	set(EI_A,SHOW);
	reset(EI_B,SHOW);
	reset(EI_Pan,SHOW);
	reset(Welcome_Home,SHOW);
	while(1)
	{
		if(key_i)
		{
			reset(Aspen_pan,SHOW);
			reset(Brich_pan,SHOW);
			reset(Chestnut_pan,SHOW);
			reset(Cork_pan,SHOW);
			reset(Cypress_pan,SHOW);
			reset(Dogberry_pan,SHOW);
			reset(Hornbeam_pan,SHOW);
			reset(Koala_pan,SHOW);
			reset(Larch_pan,SHOW);
			reset(Loris_pan,SHOW);
			reset(Orangutan_pan,SHOW);
			reset(Platypus_pan,SHOW);
			reset(Quoll_pan,SHOW);
			reset(Tasmanain_pan,SHOW);	
			reset(Wonderboom_pan,SHOW);
			reset(Aspen_B,SHOW);
			reset(Brich_B,SHOW);
			reset(Chestnut_B,SHOW);
			reset(Cork_B,SHOW);
			reset(Cypress_B,SHOW);
			reset(Dogberry_B,SHOW);
			reset(Hornbeam_B,SHOW);
			reset(Koala_B,SHOW);
			reset(Larch_B,SHOW);
			reset(Loris_B,SHOW);
			reset(Orangutan_B,SHOW);
			reset(Platypus_B,SHOW);
			reset(Quoll_B,SHOW);
			reset(Tasmanain_B,SHOW);	
			reset(Wonderboom_B,SHOW);
			reset(EI_A,SHOW);
			set(EI_Pan,SHOW);	
			set(EI_B,SHOW);		
		}
		wait(1);
	}
}
function EI_A_1 ()
{
	set(Koala_B,SHOW);
	set(Koala_pan,SHOW);
	reset(EI_A,SHOW);
}
function EI_A_2 ()
{
	set(Loris_pan,SHOW);
	set(Loris_B,SHOW);
	reset(EI_A,SHOW);
}
function EI_A_3()
{
	set(Orangutan_B,SHOW);
	set(Orangutan_pan,SHOW);
	reset(EI_A,SHOW);
}
function EI_A_4 ()
{
	set(Platypus_B,SHOW);
	set(Platypus_pan,SHOW);
	reset(EI_A,SHOW);
}
function EI_A_5 ()
{
	set(Quoll_B,SHOW);
	set(Quoll_pan,SHOW);
	reset(EI_A,SHOW);
}
function EI_A_6 ()
{
	set(Tasmanain_B,SHOW);
	set(Tasmanain_pan,SHOW);
	reset(EI_A,SHOW);
}
function Toggle_Key ()
{
	reset(Images_Opt,SHOW);
	set(KeyWords1_B,SHOW);
	set(KeyWords1,SHOW);	
	while(1)
	{
		if(key_b)
		{
			reset(Products_Opt,SHOW);	
			Toggle_Images();
		}
		wait(1);
	}
}
function toggle_products ()
{
	set(Products_Opt,SHOW);
	reset(Images_Opt,SHOW);	
	while(1)
	{
		if(key_b)
		{
			set(Images_Opt,SHOW);
			reset(Products_Opt,SHOW);	
			Toggle_Images();
		}
		wait(1);
	}
	
}
function Start_Plants ()
{
	reset(Images_Opt,SHOW);
	set(Plants_Images1,SHOW);	
	set(Plants_Images1_B,SHOW);
	reset(Plants_Images2,SHOW);	
	reset(Plants_Images2_B,SHOW);
	while(1)
	{
		if(key_b)
		{
			Toggle_Images();
		}
		wait(1);
	}
	
}
function Start_Animals ()
{
	reset(Animals2,SHOW);
	reset(Animals2_B,SHOW);
	reset(Animals3,SHOW);
	reset(Animals3_B,SHOW);
	set(Animals1,SHOW);
	set(Animals1_B,SHOW);
	reset(Images_Opt,SHOW);	
	while(1)
	{
		if(key_b)
		{
			Toggle_Images();
		}
		wait(1);
	}
}
function toggle_PP ()
{
	reset(Images_Opt,SHOW);
	reset(Welcome_Home,SHOW);
	toggle(PowerPoint,SHOW);
	toggle(PowerPoint_Buttons,SHOW);
	while(1)
	{
		if(key_r)
		{
			set(Welcome_Home,SHOW);
			reset(PowerPoint,SHOW);
			reset(PowerPoint_Buttons,SHOW);
			
		}
		wait(1);
	}
}	
function toggle_EI_P()
{
	reset(Welcome_Home,SHOW);
	reset(EI_Pan,SHOW);
	reset(EI_B,SHOW);
	set(EI_P,SHOW);
	while(1)
	{
		if(key_i)
		{
			reset(Aspen_pan,SHOW);
			reset(Brich_pan,SHOW);
			reset(Chestnut_pan,SHOW);
			reset(Cork_pan,SHOW);
			reset(Cypress_pan,SHOW);
			reset(Dogberry_pan,SHOW);
			reset(Hornbeam_pan,SHOW);
			reset(Koala_pan,SHOW);
			reset(Larch_pan,SHOW);
			reset(Loris_pan,SHOW);
			reset(Orangutan_pan,SHOW);
			reset(Platypus_pan,SHOW);
			reset(Quoll_pan,SHOW);
			reset(Tasmanain_pan,SHOW);	
			reset(Wonderboom_pan,SHOW);
			reset(Aspen_B,SHOW);
			reset(Brich_B,SHOW);
			reset(Chestnut_B,SHOW);
			reset(Cork_B,SHOW);
			reset(Cypress_B,SHOW);
			reset(Dogberry_B,SHOW);
			reset(Hornbeam_B,SHOW);
			reset(Koala_B,SHOW);
			reset(Larch_B,SHOW);
			reset(Loris_B,SHOW);
			reset(Orangutan_B,SHOW);
			reset(Platypus_B,SHOW);
			reset(Quoll_B,SHOW);
			reset(Tasmanain_B,SHOW);	
			reset(Wonderboom_B,SHOW);
			reset(EI_P,SHOW);
			set(EI_Pan,SHOW);	
			set(EI_B,SHOW);		
		}
		wait(1);
	}
}
function toggle_Meanings ()
{
	reset(Images_Opt,SHOW);
	reset(Welcome_Home,SHOW);
	toggle(Meanings_pan,SHOW);
	toggle(Meanings_Buttons,SHOW);
	while(1)
	{
		if(key_r)
		{
			set(Welcome_Home,SHOW);
			reset(Meanings_pan,SHOW);
			reset(Meanings_Buttons,SHOW);
			
		}
		wait(1);
	}
}	
BMAP * Exx ="Txd\\Exx.tga";
PANEL * ExitScreen_P =
{
	bmap = Exx ;	
	
}
function toggle_srt_m ()
{
	reset(Meanings_pan,SHOW);
	reset(Meanings_Buttons,SHOW);
	set(Mean1,SHOW);
	wait(-25);
	reset(Mean1,SHOW);
	set(Mean2,SHOW);
	wait(-25);
	reset(Mean2,SHOW);
	set(Mean3,SHOW);
	wait(-25);
	reset(Mean3,SHOW);
	set(Meanings_pan,SHOW);
	set(Meanings_Buttons,SHOW);
}
function ExitFinal ()
{
	video_window(nullvector,nullvector,NULL,"Removing TempFiles.(Shedder:%Systemroot%Yashas\\YashasMain_System_MS.sys)");
	set(ExitFin,SHOW);
	reset(Home,SHOW);
	reset(HomeButtons,SHOW);
	reset(Welcome_Home,SHOW);
	reset(Time,SHOW);
	wait(-20);
	reset(ExitFin,SHOW);
	set(ExitScreen_P,SHOW);
	wait(-6);
	sys_exit("");
}
function AutoPlay_Plants ()
{
	reset(Images_Opt,SHOW);
	//set(Plants_Images1_B,SHOW);
	set(Plants_Images1,SHOW);
	wait(-5);
	//reset(Plants_Images1_B,SHOW);
	//set(Plants_Images2_B,SHOW);
	reset(Plants_Images1,SHOW);
	set(Plants_Images2,SHOW);
	wait(-5);
	reset(Plants_Images2_B,SHOW);
//	set(Plants_Images3_B,SHOW);
	reset(Plants_Images2,SHOW);
	set(Plants_Images3,SHOW);
	wait(-5);
	reset(Plants_Images3_B,SHOW);
	//set(Plants_Images4_B,SHOW);
	reset(Plants_Images3,SHOW);
	set(Plants_Images4,SHOW);
	wait(-5);
	reset(Plants_Images4_B,SHOW);
//	set(Plants_Images5_B,SHOW);
	reset(Plants_Images4,SHOW);
	set(Plants_Images5,SHOW);
	wait(-5);
	reset(Plants_Images5_B,SHOW);
//	set(Plants_Images6_B,SHOW);
	reset(Plants_Images5,SHOW);
	set(Plants_Images6,SHOW);
	wait(-5);
	reset(Plants_Images6_B,SHOW);
//	set(Plants_Images7_B,SHOW);
	reset(Plants_Images6,SHOW);
	set(Plants_Images7,SHOW);
	wait(-5);
	reset(Plants_Images7_B,SHOW);
	//set(Plants_Images8_B,SHOW);
	reset(Plants_Images7,SHOW);
	set(Plants_Images8,SHOW);
	wait(-5);
	reset(Plants_Images8_B,SHOW);
	//set(Plants_Images9_B,SHOW);
	reset(Plants_Images8,SHOW);
	set(Plants_Images9,SHOW);
	wait(-5);
	reset(Plants_Images9_B,SHOW);
//	set(Plants_Images10_B,SHOW);
	reset(Plants_Images9,SHOW);
	set(Plants_Images10,SHOW);
	wait(-5);
	reset(Plants_Images10,SHOW);
Toggle_Images();
}
var MenuSound_handle;
var Volume = 100;
function Safari_main_func ()
{
	reset(AutoPlay_Main,SHOW);
	reset(MainBmapAP,SHOW);
	set(Time,SHOW);
	MenuSound_handle = media_loop("Audio\\Main.wma",NULL,Volume);
	video_window(nullvector,nullvector,NULL,"Loading Yashas.cab to SystemTemp");
	shadow_stencil = 2; 
	set(WelcomeScreen,SHOW);
	wait(-1);
	video_window(nullvector,nullvector,NULL,"Jungle Safari:Forests:OurLifeline");
	reset(WelcomeScreen,SHOW);
	set(Home,SHOW);
	set(HomeButtons,SHOW);
	set(Welcome_Home,SHOW);
	set(Time,SHOW);
}