#include <Arduino.h>

// กำหนดพินสำหรับหลอด LED ของทิศทาง A
const int redLED_A = 23;
const int yellowLED_A = 19;
const int greenLED_A = 18;

// กำหนดพินสำหรับหลอด LED ของทิศทาง B
const int redLED_B = 5;
const int yellowLED_B = 17;
const int greenLED_B = 16;

void setup() {
  // ตั้งค่าพินเป็น OUTPUT
  pinMode(redLED_A, OUTPUT);
  pinMode(yellowLED_A, OUTPUT);
  pinMode(greenLED_A, OUTPUT);

  pinMode(redLED_B, OUTPUT);
  pinMode(yellowLED_B, OUTPUT);
  pinMode(greenLED_B, OUTPUT);
}

void loop() {
  // **ทิศทาง A เปิดไฟเขียว (5 วินาที)**
  digitalWrite(greenLED_A, HIGH);
  digitalWrite(yellowLED_A, LOW);
  digitalWrite(redLED_A, LOW);

  digitalWrite(redLED_B, HIGH);  // ทิศทาง B ไฟแดง
  digitalWrite(yellowLED_B, LOW);
  digitalWrite(greenLED_B, LOW);

  delay(5000); // ไฟเขียวทาง A 5 วินาที

  // **ทิศทาง A เปิดไฟเหลือง (2 วินาที)**
  digitalWrite(greenLED_A, LOW);
  digitalWrite(yellowLED_A, HIGH);
  digitalWrite(redLED_A, LOW);

  digitalWrite(redLED_B, HIGH);
  digitalWrite(yellowLED_B, LOW);
  digitalWrite(greenLED_B, LOW);

  delay(2000); // ไฟเหลืองทาง A 2 วินาที

  // **ทิศทาง B เปิดไฟเขียว (5 วินาที)**
  digitalWrite(greenLED_A, LOW);
  digitalWrite(yellowLED_A, LOW);
  digitalWrite(redLED_A, HIGH);

  digitalWrite(greenLED_B, HIGH);
  digitalWrite(yellowLED_B, LOW);
  digitalWrite(redLED_B, LOW);

  delay(5000); // ไฟเขียวทาง B 5 วินาที

  // **ทิศทาง B เปิดไฟเหลือง (2 วินาที)**
  digitalWrite(greenLED_A, LOW);
  digitalWrite(yellowLED_A, LOW);
  digitalWrite(redLED_A, HIGH);

  digitalWrite(greenLED_B, LOW);
  digitalWrite(yellowLED_B, HIGH);
  digitalWrite(redLED_B, LOW);

  delay(2000); // ไฟเหลืองทาง B 2 วินาที
}
