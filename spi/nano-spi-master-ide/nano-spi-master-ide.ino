#include<SPI.h>

#define CS 10

void setup() {
  pinMode(CS, OUTPUT);
  digitalWrite(CS, HIGH);
  Serial.begin(115200);
  SPI.begin();
  SPI.beginTransaction(SPISettings(100000, MSBFIRST, SPI_MODE0));
}

void loop() {
  digitalWrite(CS, LOW);
  int val = SPI.transfer(42);
  digitalWrite(CS, HIGH);
  Serial.println(val);
  delay(1000);

}
