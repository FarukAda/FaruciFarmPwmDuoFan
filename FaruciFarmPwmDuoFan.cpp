#include "Arduino.h"
#include "FaruciFarmPwmDuoFan.h"
FaruciFarmPwmDuoFan::FaruciFarmPwmDuoFan(int enA, int enB, int in1, int in2, int in3, int in4, int hFreq)
{
    ENA = enA;
    ENB = enB;
    IN1 = in1;
    IN2 = in2;
    IN3 = in3;
    IN4 = in4;
    HFREQ = hFreq;
}

void FaruciFarmPwmDuoFan::PinSetup()
{
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    // Set frequentie and new range
    analogWriteFreq(HFREQ);
    analogWriteRange(100);

    // Turn off motors - Initial state
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    // Turn on motors
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void FaruciFarmPwmDuoFan::SetFanspeedPercentage(int percentage)
{
    if (isdigit(percentage))
    {
        if (101 > percentage > -1)
        {
            analogWrite(ENA, percentage);
            analogWrite(ENB, percentage);
        }
        else
        {
            Serial.println("Error: input is not between 0 and 100!");
        }
    }
    else
    {
        Serial.println("Error: input is not a number!");
    }
}