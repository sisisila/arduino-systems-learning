/*
 * Turn rotatory of potentiometer to see light changing
 */
int adcValue; // Define a variable to save the ADC value
int ledPin = 9; // Use pin 9 on control board to control the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as an output
}

void loop() {
  adcValue = analogRead(A0); // Convert the analog of A0 port to digital
  // Map analog to the 0-255 range, and works as PWM duty cycle of ledPin port
  analogWrite(ledPin, map(adcValue, 0, 1023, 0, 255));
}
