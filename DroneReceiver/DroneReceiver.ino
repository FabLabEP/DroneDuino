/*
This example is based on the PhysicalPixel code by David A. Mellis
 modified 30 Aug 2011
 by Tom Igoe and Scott Fitzgerald
 
 http://www.arduino.cc/en/Tutorial/PhysicalPixel
 
 This example code is in the public domain.
 */

const int ledPin = 13; // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(4, OUTPUT); // Relay 1 on the XBee Relay Shield is connected to this pin
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'h') {
      digitalWrite(ledPin, HIGH);
      digitalWrite(4, HIGH);
    } 
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'l') {
      digitalWrite(ledPin, LOW);
      digitalWrite(4, LOW);
    }
  }
}
