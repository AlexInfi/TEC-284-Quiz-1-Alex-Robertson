void setup() {
  pinMode(13, INPUT_PULLUP);  // Red Pushpin
  pinMode(12, INPUT_PULLUP);  // Green Pushpin
  pinMode(11, INPUT_PULLUP);  // Blue Pushpin

  pinMode (7, OUTPUT);  // Red LED
  pinMode (6, OUTPUT);  // Green LED
  pinMode (5, OUTPUT);  // Blue LED
}

void loop() {
  if (digitalRead(13) == HIGH) {  // If red pushpin is pressed
      setRed();
  } else if (digitalRead(12) == HIGH) { // If Green pushpin is pressed
      setGreen();
  } else if (digitalRead(11) == HIGH) { // If Blue pushpin is pressed
      setBlue();
  } else {  // If no pushpins are being pressed
      clear();
  }
}

// Function to turn the Red LED on
void setRed() {
  digitalWrite(7, HIGH);
}

// Function to turn the Green LED on
void setGreen() {
  digitalWrite(6, HIGH);
}

// Function to turn the Blue LED on
void setBlue() {
  digitalWrite(5, HIGH);
}

// Turns all LEDs off
void clear() {
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
}