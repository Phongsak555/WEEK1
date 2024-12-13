#include <Arduino.h>

// กำหนดขา GPIO ที่เชื่อมต่อกับ LED
int L1 = 23;
int L2 = 19;
int L3 = 18;
int L4 = 5;
int L5 = 17;
int L6 = 16;
int L7 = 4;
int L8 = 0;

// ขาเชื่อมต่อกับ Potentiometer
int potPin = 36; 

void setup() {
  // กำหนดขา LED ทั้งหมดเป็น Output
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  
  // กำหนดขา Potentiometer เป็น Input
  pinMode(potPin, INPUT);
  
  // เริ่มต้นการเชื่อมต่อ Serial สำหรับการ Debug
  Serial.begin(9600);
}

void loop(){
  int senorValue = analogRead(potPin);
  Serial.println(senorValue);
  delay(500);
  if (senorValue <=500) {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  digitalWrite(L5, LOW);
  digitalWrite(L6, LOW);
  digitalWrite(L7, LOW);
  digitalWrite(L8, LOW);
  } 
  else if (senorValue >= 501 && senorValue <= 1000){ 
    digitalWrite(L1, HIGH);
    digitalWrite(L2, HIGH);
    digitalWrite(L3, HIGH);
    digitalWrite(L4, LOW);
    digitalWrite(L5, LOW);
    digitalWrite(L6, LOW);
    digitalWrite(L7, LOW);
    digitalWrite(L8, LOW);
    
  }
  else if (senorValue >= 1001 && senorValue <= 2000){ 
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
      digitalWrite(L6, LOW);
      digitalWrite(L7, LOW);
      digitalWrite(L8, LOW);
    }
  else{ 
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
      digitalWrite(L6, HIGH);
      digitalWrite(L7, HIGH);
      digitalWrite(L8, HIGH);
    }
}
