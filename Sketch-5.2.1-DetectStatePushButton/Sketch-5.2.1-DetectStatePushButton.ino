int buttonPin = 12; // the number of the push button pin
int ledPin = 9; // the number of the LED pin
boolean isLighting = false; // define a variable to save the state of LED

void setup() {
  pinMode(buttonPin, INPUT); // set push button pin into input mode
  pinMode(ledPin, OUTPUT); // set LED pin into output mode
}

void loop() {

}

void reverseLED() {
  if (isLighting) { // if LED is lighting
    digitalWrite(ledPin, LOW)
  }
}
