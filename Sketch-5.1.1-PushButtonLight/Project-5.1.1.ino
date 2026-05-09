int buttonPin = 12; // the number of the push button pin
int ledPin = 9; // the number of the LED pin

void setup() {
  pinMode(buttonPin, INPUT); // set push button pin into input mode
  pinMode(ledPin, OUTPUT); // set LED pin into output mode
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) // if the button is not pressed
    digitalWrite(ledPin, LOW); // switch off LED
  else // if the button is pressed
    digitalWrite(ledPin, HIGH); // switch on LED
}
