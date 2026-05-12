char inChar; // define a variable to store character received from serial port
int counter = 0; // define a variable as the data sent to serial port

void setup() {
  Serial.begin(9600); // initialize serial port and set baud rate to 9600
}

void loop() {
  // Print value of variable counter to serial
  Serial.print("counter:"); // print the string "counter:"
  Serial.println(counter); // print the value of variable "counter"
  delay(1000); // wait 1000ms to avoid cycling too fast
  counter++; // varibale "counter" increases 1
}

// serialEvent() is the serial port interrupt function
// when serial receives data processor will jump to this function
// afterwards it will jump back to where the interrupt happened
void serialEvent() {
  if (Serial.available()) { // judge whether the data has been received
    inChar = Serial.read(); // read one character => if I enter multiple at once they'll print one by one
    Serial.print("received:"); // print the string "received"
    Serial.println(inChar); // print the received character
  }
}
