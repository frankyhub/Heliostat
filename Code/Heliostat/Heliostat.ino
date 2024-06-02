
/*************************************************************************************************
                                      PROGRAMMINFO
**************************************************************************************************
Funktion: Heliostat mit Servos

Modi:
-Calibrate Mode
-Slow Mode
-Rotate Stage
-Circle at an angle

**************************************************************************************************
Version: 12.04.2022
**************************************************************************************************
Board: NANO
**************************************************************************************************
Libraries:
https://github.com/espressif/arduino-esp32/tree/master/libraries
C:\Users\User\Documents\Arduino
D:\gittemp\Arduino II\A156_Wetterdaten_V3
**************************************************************************************************
C++ Arduino IDE V1.8.19
**************************************************************************************************
Einstellungen:
https://dl.espressif.com/dl/package_esp32_index.json
http://dan.drown.org/stm32duino/package_STM32duino_index.json
http://arduino.esp8266.com/stable/package_esp8266com_index.json
*************************************************************************************************.
 
 */

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

void setup() 
{
  servo1.attach(11);
  servo2.attach(12);
  servo3.attach(13);
  
  pinMode(7, INPUT);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);

}

void loop() 
{  

  //Calibrate Mode
  //The Gear Stack Should be assembled when the servo-motors are in
  //the 90 deg position
  /*
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  delay(2000); 
   */


  //Toggle Servo1
  for(int j = 0; j<3; j++)
  {
    for(int i = 90; i<140; i+=1)
    {
      servo1.write(i);
      delay(20);
    }
  
    for(int i = 140; i>40; i-=1)
    {
      servo1.write(i);
      delay(20);
    }
  
    for(int i = 40; i<90; i+=1)
    {
      servo1.write(i);
      delay(20);
    }  
  }

  servo1.write(90);

  //Toggle Servo2
  for(int j = 0; j<3; j++)
  {
    for(int i = 90; i<140; i+=1)
    {
      servo2.write(i);
      delay(20);
    }
  
    for(int i = 140; i>40; i-=1)
    {
      servo2.write(i);
      delay(20);
    }
  
    for(int i = 40; i<90; i+=1)
    {
      servo2.write(i);
      delay(20);
    }  
  }

  servo2.write(90);

  //Toggle Servo3
  for(int j = 0; j<3; j++)
  {
    for(int i = 90; i<140; i+=1)
    {
      servo3.write(i);
      delay(20);
    }
  
    for(int i = 140; i>40; i-=1)
    {
      servo3.write(i);
      delay(20);
    }
  
    for(int i = 40; i<90; i+=1)
    {
      servo3.write(i);
      delay(20);
    }  
  }

  servo3.write(90);
  
 /* 

  //Rotate Stage
  for(int j = 0; j<3; j++)
  {
    for(int i = 90; i<160; i+=1)
    {
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      delay(20);
    }
  
    for(int i = 160; i>20; i-=1)
    {
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      delay(20);
    }
  
    for(int i = 20; i<90; i+=1)
    {
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      delay(20);
    }  
  }
*/
/*

  //Circle at an angle
  double angle = 0;
  double servoAngle1 = 0;
  double servoAngle2 = 0;
  double servoAngle3 = 0;
  
  for(int i = 0; i<1000; i++)
  {
    angle = ((double)i)/24;
    servoAngle1 = 90+ 30*sin(angle);
    servoAngle2 = 90+ 30*sin(angle + 2* PI/3);
    servoAngle3 = 90+ 30*sin(angle + 4*PI/3);
    servo1.write(servoAngle1);
    servo2.write(servoAngle2);
    servo3.write(servoAngle3);
    delay(20);
  }
  */

/*
  //quick move
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);

  delay(500);
  servo2.write(60);
  delay(400);
  servo3.write(120);
  delay(400);
  servo1.write(75);
  delay(400);
  servo3.write(105);
  delay(400);
  servo1.write(110);
  delay(400);
  servo2.write(75);
  delay(400);
  servo3.write(65);
  delay(400);
  servo1.write(90);
  delay(400);
  servo3.write(115);
  delay(400);
  servo2.write(120);
  delay(400);
  servo1.write(60);
  delay(400);

*/
/*

  //random move
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);

  for(int j = 0; j<10; j++)
  {
    servo1.write((int)random(50,130));    
    servo2.write((int)random(50,130));    
    servo3.write((int)random(50,130));
    delay(600);    
  }
*/
  
}
