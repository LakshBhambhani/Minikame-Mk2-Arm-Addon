#include <Servo.h>

Servo FL_HIP; 
Servo FL_FOOT;
Servo FR_HIP;
Servo FR_FOOT;
Servo BL_HIP; 
Servo BL_FOOT;
Servo BR_HIP;
Servo BR_FOOT;


void setup() { 
  FL_HIP.attach(4); 
  FL_FOOT.attach(5);
  FR_HIP.attach(6);
  FR_FOOT.attach(7);
  BL_HIP.attach(8);
  BL_FOOT.attach(9);
  BR_HIP.attach(10);
  BR_FOOT.attach(11);

  FL_HIP.write(40);
  FL_FOOT.write(110);
  FR_HIP.write(130);
  FR_FOOT.write(70);
  BL_HIP.write(130);
  BL_FOOT.write(70);
  BR_HIP.write(40);
  BR_FOOT.write(110);
}

void loop() {
 leanLeft();
 delay(1000);
 homePos();
 delay(1000);
 leanRight();
 delay(1000);
 homePos();
 delay(1000);
} 

void leanRight()
{
 FL_FOOT.write(15);
 FR_FOOT.write(15);
 BL_FOOT.write(140);
 BR_FOOT.write(140);
}

void leanLeft()
{
 FL_FOOT.write(140);
 FR_FOOT.write(140);
 BL_FOOT.write(15);
 BR_FOOT.write(15);
}

void homePos()
{
 FL_HIP.write(40);
 FL_FOOT.write(110);
 FR_HIP.write(130);
 FR_FOOT.write(70);
 BL_HIP.write(130);
 BL_FOOT.write(70);
 BR_HIP.write(40);
 BR_FOOT.write(110);
}

void bow()
{
  homePos();
  delay(200);
  FL_FOOT.write(15);
  FR_FOOT.write(15);
  delay(700);
  FL_FOOT.write(90);
  FR_FOOT.write(90);
  delay(700);
}

void stepLeftForward()
{
  FR_HIP.write(130);
  FR_FOOT.write(70);
  BL_HIP.write(130);
  BL_FOOT.write(70);

  delay(300);

  
  
}
