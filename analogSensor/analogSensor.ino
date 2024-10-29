int analogPin = 0;

void setup(){
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(analogPin));
  delay(100);
}