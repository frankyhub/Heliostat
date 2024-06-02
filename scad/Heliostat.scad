
/*
*******************************************
Objekt Info: Heliostat

*******************************************
Version: 12.04.2022 khf
*******************************************
*/

//***************   Auswahl   *************

//keine

//***************   Libraries  ************

include <ma_lib/constants.scad>
use <ma_lib/transforms.scad>

//*****************************************

//***************  Parameter   *************
$fn=60; //Aufloesung


//*****************************************

//**************   Programm  **************


color("gray")	import ("01_base.stl", center=true);
    
    
    
//Servo-Stützen
    translate(v = [-18.5, 36.75, 6])	import ("02_MotorBracket.stl"); //unten re
    translate(v = [8.8, 36.75, 6]) zrot(180)	import ("02_MotorBracket.stl"); //unten li
    translate(v = [41.5, -2, 14])zrot(-120)	import ("02_MotorBracket.stl"); //mitte re
    translate(v = [28, -26, 14])zrot(60)	import ("02_MotorBracket.stl"); //mitte li
    translate(v = [-36.5, -10.5, 21.8])zrot(300)	import ("02_MotorBracket.stl"); //oben re      
    translate(v = [-22.5, -34.5, 21.8])zrot(120)	import ("02_MotorBracket.stl"); //oben re
   
   
//Servo-Zahnräder
    color("red") translate(v = [-30.5, -21.5, 56.5]) yrot(180)	import ("03_gear_drive.stl"); //oben
    color("red")translate(v = [35.5, -15.5, 49.5]) yrot(180)	import ("03_gear_drive.stl"); //mitte
    color("red")translate(v = [-5.5, 35.5,43.5]) yrot(180)	import ("03_gear_drive.stl"); //unten

//Zahnräder mitte
    color("Gainsboro") translate(v = [0, 0,35]) zrot(180)	import ("04_Gear_Level1.stl"); //unten    
    color("silver")translate(v = [0, 0,42]) zrot(180)	import ("05_Gear_Level2.stl"); //mitte 
    color("grey")translate(v = [0, 0,49]) zrot(180)	import ("06_Gear_Level3.stl"); //oben            
            
//Arme 
    translate(v = [0, 0,57]) zrot(-120)	import ("10_Link_Level3.stl"); //unten 
    translate(v = [0, 0,64]) zrot(120)	import ("09_Link_Level2.stl"); //mitte
    translate(v = [0, 0,71]) 	import ("08_Link_Level1.stl");//oben           
    translate(v = [-50, 15,79]) xrot(15) yrot(-45) zrot(-60)	import ("07_Link_90deg_3x.stl"); 
    translate(v = [37, 45,87]) xrot(-35) yrot(-5) zrot(-180)	import ("07_Link_90deg_3x.stl");
    translate(v = [11, -49,82]) xrot(35) yrot(30) zrot(-320)	import ("07_Link_90deg_3x.stl");
   
  
//Platform oben
    color("Cornsilk")translate(v = [0, 0,131]) zrot(-64) yrot(180)	import ("14_TopStage.stl");

//SG90
    use <sg90\sg90.scad>;
    translate([35,-14,14.5]) zrot(60) sg90();
    translate([-4.5, 36.75, 6.5])  sg90();
    translate([-29.5, -22.5, 22])zrot(300) sg90();   
 //--------------------------------------------------------------   

