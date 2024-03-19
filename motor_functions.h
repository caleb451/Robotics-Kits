#ifndef MOTOR_FUNCTIONS_H
#define MOTOR_FUNCTIONS_H
#include "Arduino.h"
#include <string.h>
using namespace std;

class Robot{
    private:
        double diameter = 67.26;
        String unit; 
        int x;
        int leftPinIn1, leftPinIn2, rightPinIn1, rightPinIn2;
        String motorSide;

    public:
        // Enables each of the output pins and side of the motor.
        Motor(int pinIn1, int pinIn2, String direction){
            leftPinIn1 = pinIn1;
            leftPinIn2 = pinIn2;
            rightPinIn1 = pinIn1;
            rightPinIn2 = pinIn2;
            motorSide = direction;
            if(motorSide == "left"){
                pinMode(leftPinIn1, OUTPUT);
                pinMode(leftPinIn2, OUTPUT);
            }
            else if (motorSide == "right"){
                pinMode(rightPinIn1, OUTPUT);
                pinMode(rightPinIn2, OUTPUT);
            }
            
        }
        double speed(double speed){
            return speed;
        }

        // when called, x will be the number of rotations that the robot will go if the unit is not specified. If the unit is specified, the robot will move
        // depending on the distance the user specified. Ex: x = 3 unit = undef, wheel rotation is 3. x = 5.7 unit = "inches", wheel will move 5.7 inches.
        void foward(double x, String unit){
            lFoward(x, unit);
            rFoward(x, unit);
        }
        void lfoward(double x, String unit){
            unit = "millimeters";
            // if(unit == "milimeters" || unit == " " || unit == ""){
            //     x = x * diameter;
            //     Serial.print("Moved ");
            //     Serial.print(x);
            //     Serial.print(" Spaces");
            //     //digitalWrite();
            // }
            // else if(unit == "feet" || unit == "Feet"){
            //     x = x * (diameter / 304.8);
            //     return x;
            // }
            // else if(unit == "inches" || unit == "Inches"){
            //     x = x * (diameter / 25.4);
            //     return x;
            // }
            // else if(unit == "meters" || unit == "Meters"){
            //     x = x * (diameter / 1000);
            //     return x;
            // }

            digitalWrite(leftPinIn1, LOW);
            digitalWrite(leftPinIn2, HIGH);
        }
        void rFoward(double x, String unit){
            digitalWrite(rightPinIn1, HIGH);
            digitalWrite(rightPinIn2, LOW);
        }
        void backwards(double x, String unit){
            lBackward(x, unit);
            rBackward(x, unit);
        }
        void lBackward(double x, String unit){
            digitalWrite(leftPinIn1, HIGH);
            digitalWrite(leftPinIn2, LOW);
        }
        void rBackward(double x, String unit){
            digitalWrite(rightPinIn1, LOW);
            digitalWrite(rightPinIn2, HIGH);
        }
        void unit(){
            if (unit == "feet"){
                
            }
        }
        void stop(){
            digitalWrite(leftPinIn1, LOW);
            digitalWrite(leftPinIn2, LOW);
            digitalWrite(rightPinIn1, LOW);
            digitalWrite(rightPinIn1, LOW);
        }
};

#endif