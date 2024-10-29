void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  int sensorVal = digitalRead(7);
  Serial.println(sensorVal);
}