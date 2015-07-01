/*
This example is based on the Button code created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
  
 http://www.arduino.cc/en/Tutorial/Button
 
 This example code is in the public domain.
 
 Button
 
 Prints a 'h' over serial when pressing a pushbutton attached to pin 5. 
 
 
 The circuit:
 
 * pushbutton attached to pin 5 from +5V
 * 10K resistor attached to pin 5 from ground
 
 This example code is in the public domain.
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 5;     // the number of the pushbutton pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {   
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // send 'h' command over serial:    
    Serial.print('h');  
  }
  else {
    Serial.print('l');
  }
}
