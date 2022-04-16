L298N library for FaruciFarm
An easy way to control DC Motors with ESP8266 and the L298N module.
Had five different settings.

Example:
```cpp
#include <FaruciFarmPwmDuoFan.h>
#define HFreq 40000

/**
 * L298N constructor(enA, enB, in1, in2, in3, in4, HFreq)
 */
FaruciFarmPwmDuoFan faruciFarmPwmDuoFan(1,2,3,4,5,6,HFreq);

void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);

  // Setup FaruciFarmPwmDuoFan
  faruciFarmPwmDuoFan.PinSetup();
}

void loop() {
  delay(10000);
  faruciFarmPwmDuoFan.SetFanspeedPercentage(20);
  delay(10000);
  faruciFarmPwmDuoFan.SetFanspeedPercentage(40);
  delay(10000);
  faruciFarmPwmDuoFan.SetFanspeedPercentage(60);
  delay(10000);
  faruciFarmPwmDuoFan.SetFanspeedPercentage(80);
  delay(10000);
  faruciFarmPwmDuoFan.SetFanspeedPercentage(100);
}
```