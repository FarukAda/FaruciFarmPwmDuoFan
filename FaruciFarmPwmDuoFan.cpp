#include "Arduino.h"
#include "FaruciFarmPwmDuoFan.h"
FaruciFarmPwmDuoFan::FaruciFarmPwmDuoFan(int enA, int enB, int in1, int in2, int in3, int in4)
{
    ENA = enA;
    ENB = enB;
    IN1 = in1;
    IN2 = in2;
    IN3 = in3;
    IN4 = in4;
}

void FaruciFarmPwmDuoFan::PinSetup()
{
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    // Turn off motors - Initial state
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}

void FaruciFarmPwmDuoFan::VeryLow()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENA, 51);
    analogWrite(ENB, 51);
    Serial.println("fanMode: VeryLow");
}

void FaruciFarmPwmDuoFan::Low()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENA, 102);
    analogWrite(ENB, 102);
    Serial.println("fanMode: Low");
}

void FaruciFarmPwmDuoFan::Medium()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENA, 153);
    analogWrite(ENB, 153);
    Serial.println("fanMode: Medium");
}

void FaruciFarmPwmDuoFan::High()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENA, 204);
    analogWrite(ENB, 204);
    Serial.println("fanMode: High");
}

void FaruciFarmPwmDuoFan::VeryHigh()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    analogWrite(ENA, 255);
    analogWrite(ENB, 255);
    Serial.println("fanMode: VeryHigh");
}