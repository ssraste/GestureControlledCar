#include <SoftwareSerial.h>
#include "Wire.h"
#include <MPU6050_light.h>

SoftwareSerial BTSerial(10, 11); 

MPU6050 mpu(Wire);

void setup() {
Serial.begin(115200);
Wire.begin();
BTSerial.begin(9600);
byte status = mpu.begin();
Serial.print(F("MPU6050 status: "));
Serial.println(status);
while (status != 0) { } 
Serial.println(F("Calculating offsets, do not move MPU6050"));
delay(1000);
mpu.calcOffsets(); 
Serial.println("Done!\n");
}

void loop() {
if (mpu.getAngleX() > 30) {
  BTSerial.print('F');
  Serial.println("Reverse");
}
else if (mpu.getAngleX() < -30) {
  BTSerial.print('R');
  Serial.println("Forward");
}
if (mpu.getAngleY() > 30) {
  BTSerial.print('A'); 
  Serial.println("Right");
}
else if (mpu.getAngleY() < -30) {
  BTSerial.print('B');
  Serial.println("Left");
}
if(mpu.getAngleX() > -30 && mpu.getAngleX() < 30 && mpu.getAngleY() > -30 && mpu.getAngleY() < 30){
  Serial.println("Stopped");
  BTSerial.print('Z');
}
mpu.update();
}