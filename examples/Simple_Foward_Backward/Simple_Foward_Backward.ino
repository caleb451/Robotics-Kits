#include <motor_functions.h>
#include <Arduino.h>
//right motor
#define motorPin1 10
#define motorPin2 11
// left motor
#define motorPin3 12
#define motorPin4 13



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Connected");
  Robot motor1;
  Robot motor2;
  //
  motor1.Motor(motorPin1, motorPin2, "left"); //puts the motor pins to the left
  motor2.Motor(motorPin3, motorPin4, "right"); //puts the motor pins to the right
  
  for(int i = 0; i < 12; i++){
    motor1.stop();
    motor2.stop();
    Serial.print("\nMotor foward");
    motor1.foward(2, " ");
    motor2.foward(2, " ");
    delay(1000);
    Serial.print("\nMotor stopped");
    motor1.stop();
    motor2.stop();
    delay(1000);
  }
}

void loop(){

}
