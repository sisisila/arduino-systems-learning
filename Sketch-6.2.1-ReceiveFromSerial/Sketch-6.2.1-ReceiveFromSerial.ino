// set it to No line ending if you don't want a blank character to be printed as well

char inChar; // define a variable to store characters received from serial port

void setup() {
  Serial.begin(9600); // initialize serial port, set baud rate to 9600
}

void loop() {
  if (Serial.available()) { // judge whether data has been received
    inChar = Serial.read(); // read one character
    Serial.print("received:"); // print the string "received:"
    Serial.println(inChar); // print the received character
  }
}
