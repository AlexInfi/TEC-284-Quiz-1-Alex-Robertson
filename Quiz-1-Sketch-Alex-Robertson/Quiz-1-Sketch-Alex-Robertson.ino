void setup() {
  pinMode(13, INPUT_PULLUP);  // Red Pushpin
  pinMode(12, INPUT_PULLUP);  // Green Pushpin
  pinMode(11, INPUT_PULLUP);  // Blue Pushpin

  pinMode (7, OUTPUT);  // Red LED
  pinMode (6, OUTPUT);  // Green LED
  pinMode (5, OUTPUT);  // Blue LED
}

void loop() {
  if (digitalRead(13) == HIGH) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }

}
