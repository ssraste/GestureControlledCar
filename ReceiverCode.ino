#define M1A 8
#define M2A 9
#define M1B 10
#define M2B 11
#include <SoftwareSerial.h>
char data;

void setup() {
pinMode(M1A, OUTPUT);
pinMode(M2A, OUTPUT);
pinMode(M1B, OUTPUT);
pinMode(M2B, OUTPUT);
Serial.begin(9600);

stop();
}

void loop() {
if(Serial.available()){
  data = Serial.read();
}
Serial.println(data);

if(data == 'F'){
  Serial.println("Forw");
  forward();
}

else if(data == 'R'){
  reverse();
}

else if(data == 'A'){
  right();

}
else if(data == 'B'){
  left();
}

else{
stop();
}
}

void forward() {
  digitalWrite(M1A, HIGH);
  digitalWrite(M2A, LOW);
  digitalWrite(M1B, HIGH); 
  digitalWrite(M2B, LOW);
}
void reverse() {
  digitalWrite(M1A, LOW);
  digitalWrite(M2A, HIGH);
  digitalWrite(M1B, LOW);
  digitalWrite(M2B, HIGH);
void left() {
  digitalWrite(M1A, HIGH);
  digitalWrite(M2A, LOW);
  digitalWrite(M1B, LOW);
  digitalWrite(M2B, LOW);
}
void right() {
  digitalWrite(M1A, LOW); 
  digitalWrite(M2A, LOW);
  digitalWrite(M1B, HIGH);
  digitalWrite(M2B, LOW);
}
void stop() {
  digitalWrite(M1A, LOW); 
  digitalWrite(M2A, LOW);
  digitalWrite(M1B, LOW);
  digitalWrite(M2B, LOW);
}