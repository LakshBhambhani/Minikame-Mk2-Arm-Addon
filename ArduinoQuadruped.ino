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
  turnLeft();
} 

void leanDemo()
{
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

void turnLeft()
{
  // Front left and back right leg
  // Home position for front right and back left leg
  FR_HIP.write(130);
  FR_FOOT.write(70);
  BL_HIP.write(130);
  BL_FOOT.write(70);

  delay(200);

  // raises the foot in air
  FL_FOOT.write(130);
  BR_FOOT.write(130);

  delay(200);

  // turns the hip around
  FL_HIP.write(90);
  BR_HIP.write(90);

  delay(200);

  // puts the foot down again
  FL_FOOT.write(110);
  BR_FOOT.write(110);

  delay(200);

  // puts the hip back in original place
  FL_HIP.write(40);
  BR_HIP.write(40);

  delay(200);

  // Front Right and Back Left Leg
  // raises the foot in air
  FR_FOOT.write(50);
  BL_FOOT.write(50);

  delay(200);

  // turns the hip around
  FR_HIP.write(180);
  BL_HIP.write(180);

  delay(200);

  // puts the foot down again
  FR_FOOT.write(70);
  BL_FOOT.write(70);

  delay(200);

  // puts the hip back in original place
  FR_HIP.write(130);
  BL_HIP.write(130);
}
