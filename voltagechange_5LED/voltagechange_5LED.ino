/* 
   the goal of this program is to have 5 different LEDs to turn on according
   to the level of voltage. if the voltage is greater or equal to 1 then the 
   first LED is on. if the voltage is greater or equal to 2 then the second
   LED is on aswell as the first one. and so on.
   the theme is digital Output and analog Input */

const int red = 2;      // the pin the red led is attached to
const int blue = 4;       // the pin the blue led is attached to
const int yellow = 6;      // the pin the yellow led is attached to
const int green = 8;       // the pin the green led is attached to
const int white = 10;       // the pin the white led is attached to


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);              // initialize serial communication at 9600 bits per second: 
  pinMode(red, OUTPUT);        // sets pin 2 as an output
  pinMode(blue, OUTPUT);         // sets pin 4 as an output
  pinMode(yellow, OUTPUT);        // sets pin 6 as an output
  pinMode(green, OUTPUT);        // sets pin 8 as an output
  pinMode(white, OUTPUT);        // sets pin 10 as an output

}

void loop() {
  // put your main code here, to run repeatedly:

    // read the input on analog pin 0: 
  int sensorValue = analogRead(A0); 
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V): 
  float voltage = sensorValue * (5.0 / 1023.0); 
  // print out the value you read: 
  Serial.println(voltage);        // prints out the value of voltage

  if ( voltage >=1 ) { 
  digitalWrite(red, HIGH);         // if voltage is bigger or equal to 1 red is powered otherwise it's off
  } else {  
  digitalWrite(red, LOW);  
  } 
  if ( voltage >=2 ) { 
  digitalWrite(blue, HIGH);        // if voltage is bigger or equal to 2 blue is powered otherwise it's off
  } else {  
  digitalWrite(blue, LOW); 
  } 
  if ( voltage >=3 ) { 
  digitalWrite(yellow, HIGH);       // if voltage is bigger or equal to 3 yellow is powered otherwise it's off
  } else {  
  digitalWrite(yellow, LOW); 
  } 
  if ( voltage >=4 ) { 
  digitalWrite(green, HIGH);           // if voltage is bigger or equal to 4 green is powered otherwise it's off
  } else {  
  digitalWrite(green, LOW); 
  } 
  if ( voltage >=5 ) { 
  digitalWrite(white, HIGH);            // if voltage is bigger or equal to 5 white is powered otherwise it's off
  } else {  
  digitalWrite(white, LOW); 

}
