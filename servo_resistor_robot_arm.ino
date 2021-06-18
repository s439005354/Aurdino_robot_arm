#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
float resistor1 = A0;
float resistor2 = A1;
float resistor3 = A2;
float resistor4 = A3;
float resistor5 = A4;

float anglemotor1;
float anglemotor2;
float anglemotor3;
float anglemotor4;
float anglemotor5;

float anglemotor11;
float anglemotor21;
float anglemotor31;
float anglemotor41;
float anglemotor51;

void setup() {
  // put your setup code here, to run once:
myservo1.attach(11);
myservo2.attach(10);
myservo3.attach(9);
myservo4.attach(6);
myservo5.attach(5);  
}

void loop() {
  // put your main code here, to run repeatedly:
  anglemotor1 = analogRead(resistor1);
  anglemotor2 = analogRead(resistor2);
  anglemotor3 = analogRead(resistor3);
  anglemotor4 = analogRead(resistor4);
  anglemotor5 = analogRead(resistor5);
  
  anglemotor11= anglemotor1*90/675;
  anglemotor21= anglemotor2*90/675;
  anglemotor31= anglemotor3*90/675;
  anglemotor41= anglemotor4*90/675;
  anglemotor51= anglemotor5*90/675;
  
  myservo1.write(anglemotor11);
  myservo2.write(anglemotor21);
  myservo3.write(anglemotor31);
  myservo4.write(anglemotor41);
  myservo5.write(anglemotor51);

}
