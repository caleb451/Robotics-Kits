// #include <motor_functions.h>
#include <Arduino.h>

#define motorPin1 11
#define motorPin2 10

#define motorPin3 12
#define motorPin4 13



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Robot motor;
  // motor.foward(2, "");
  // motor.Motor(motorPin1, motorPin2, "left");
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  Serial.print("Connected");
  
}
void loop(){
  Serial.print("\nMotor foward");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  delay(1000);
  Serial.print("\nMotor stopped");
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000);
  Serial.print("\nMotor back");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin4, HIGH);
  delay(1000);
  Serial.print("\nMotor stopped");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(1000);
  
}