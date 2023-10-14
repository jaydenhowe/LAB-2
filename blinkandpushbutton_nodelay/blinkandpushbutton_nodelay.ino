/* 
  the goal of this program is to blink an LED which is at pin 13 and, 
  read and print the state of the button without using delay. if you use delay
  the whole program will pause and won't be able to blink the LED and read the 
  pushbutton at the same time.
  the theme is digital Input and Output */

const int ledPin =  LED_BUILTIN;       // the number of the LED pin 
int ledState = LOW;             // ledState used to set the LED 
unsigned long previousMillis = 0;        // will store last time LED was updated 
const long interval = 5000;           // interval at which to blink (milliseconds) 
int pushbutton = 2; 

void setup() { 

  Serial.begin(9600);       
  pinMode(ledPin, OUTPUT);   // set the digital pin(13) as output:
  pinMode(pushbutton, INPUT);    // sets pin 2 as an Input

} 
void loop() { 

  unsigned long currentMillis = millis();   // the interval at which you want to blink the LED. 

  if (currentMillis - previousMillis >= interval) { 
    // save the last time you blinked the LED 
    previousMillis = currentMillis; 


    if (ledState == LOW) { 
      ledState = HIGH; 
    } else {              // if the LED is off turn it on and vice-versa:
      ledState = LOW; 
    } 

    digitalWrite(ledPin, ledState);       // set the LED with the ledState of the variable: 
  }
    int buttonstate = digitalRead(pushbutton);  // Reads the pin the pushbutton is on and refers it to "buttonstate"
    Serial.println(buttonstate);         // prints out the state of the button
    delay(1);        // delays it for 1 millisecond

} 
