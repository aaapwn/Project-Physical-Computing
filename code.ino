// Installed servo.h library in your computer before uploading of this code, 
// otherwise you will receive error

#include <Servo.h>

Servo tap_servo;

int sensor_pin = 4;
int tap_servo_pin = 5;
int val;

void setup() {
  pinMode(sensor_pin, INPUT);
  tap_servo.attach(tap_servo_pin);
}

void loop() {
  val = digitalRead(sensor_pin);

  if (val == 0) {
    delay(4000); // Delay for 4 seconds
    tap_servo.write(0);
    // tap_servo.write(90);
  }

// delay(2000);

  if (val == 1) {
    tap_servo.write(90);
  }
}

