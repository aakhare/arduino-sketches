#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() 
{
  servoLeft.attach(13);
  servoRight.attach(12);

}

void loop() {

rotation_forwardbackward();
delay(5000);
v_move(); 
delay(500);

delay(2000); 

}

void rotation_forwardbackward () 
 { 

for  (int count = 0; count < 4; count++)
{

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay (500); 

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay (500); 

  servoLeft.write(0);
  servoRight.write(0);

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay (500); 

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay (500); 

  servoLeft.write(90);
  servoRight.write(90);

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay (500); 

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay (500);

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1600);
  delay(2000);
}


 }

 void v_move ()

 {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay (500);

  servoLeft.write(135); 
  servoRight.write(135);

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  
  
 }
