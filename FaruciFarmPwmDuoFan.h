#ifndef FaruciFarmPwmDuoFan_h
#define FaruciFarmPwmDuoFan_h
#include "Arduino.h"

class FaruciFarmPwmDuoFan
{
private:
    int ENA;
    int ENB;
    int IN1;
    int IN2;
    int IN3;
    int IN4;

public:
    FaruciFarmPwmDuoFan(int enA, int enB, int in1, int in2, int in3, int in4);
    void PinSetup();
    void VeryLow();
    void Low();
    void Medium();
    void High();
    void VeryHigh();
};
#endif