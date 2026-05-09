// set pin numbers:
int ledPin = 5; // the number of the LED pin

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // call breath() cyclically
  breath(ledPin, 6);
  delay(500);
}

void breath(int ledPin, int delayMs) {
  for (int i = 0; i <= 255; i++) { // "i" changes from 0 to 255
    analogWrite(ledPin, i); // corresponding duty cycle changes from 0%-100%
    delay(delayMs); // adjust the rate of change of brightness
  }
  for (int i = 255; i > 0; i--) { // "i" changes from 255 to 0
    analogWrite(ledPin, i); // corresponding duty cycle chanes from 0%-100%
    delay(delayMs); // adjust the rate of change in brightness
  }
}
