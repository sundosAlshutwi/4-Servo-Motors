#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int angle = 0;
int direction = 1;

unsigned long startTime;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  // Start all servos at 0 degrees
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);

  startTime = millis();
}

void loop() {

  // Sweep for 2 seconds
  if (millis() - startTime < 2000) {

    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);

    angle += direction;

    // Change direction at 0 and 180 degrees
    if (angle >= 180) {
      angle = 180;
      direction = -1;
    }

    if (angle <= 0) {
      angle = 0;
      direction = 1;
    }

    delay(10);
  }

  // After 2 seconds, move all servos to 90 degrees
  else {
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);

    // Keep them at 90 degrees
    while (true) {
    }
  }
}