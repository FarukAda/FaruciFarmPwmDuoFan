L298N library for FaruciFarm
An easy way to control DC Motors with ESP8266 and the L298N module.
Had five different settings.

Example:
```cpp
#include <FaruciFarmPwmDuoFan.h>

/**
 * L298N constructor(enA, enB, in1, in2, in3, in4)
 */
FaruciFarmPwmDuoFan faruciFarmPwmDuoFan(1,2,3,4,5,6);

void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);

  // Setup FaruciFarmPwmDuoFan
  faruciFarmPwmDuoFan.PinSetup();
}

void loop() {
  delay(10000);
  faruciFarmPwmDuoFan.VeryLow();
  delay(10000);
  faruciFarmPwmDuoFan.Low();
  delay(10000);
  faruciFarmPwmDuoFan.Medium();
  delay(10000);
  faruciFarmPwmDuoFan.High();
  delay(10000);
  faruciFarmPwmDuoFan.VeryHigh();
}
```