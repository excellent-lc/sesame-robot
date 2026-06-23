#include <ESP32Servo.h>

Servo s;
const int SERVO_PIN = 2;   // 橙线信号 -> IO2

void setup() {
  Serial.begin(115200);
  s.setPeriodHertz(50);          // MG90S = 50Hz
  s.attach(SERVO_PIN, 500, 2400); // 脉宽 0.5~2.4ms -> 0~180度
  Serial.println("servo test start");
}

void loop() {
  s.write(0);   Serial.println(0);   delay(800);
  s.write(90);  Serial.println(90);  delay(800);
  s.write(180); Serial.println(180); delay(800);
}
