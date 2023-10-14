/* 
    the goal of this program is to have an RGB be white when the pushbutton is 
    not pressed and for the RGB to be completely off when the pushbutton is pressed 
    the theme is digital Output and digital Input */


int pushbutton = 11; // the pin the pushbutton is attached to
int red = 3;         // the pin the red led is attached to
int green = 5;       // the pin the green led is attached to
int blue = 7;        // the pin the blue led is attached to

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      // starts the serial communication at 9600 bits per second
  pinMode(red, OUTPUT);       //sets pin 3 as an output
  pinMode(green, OUTPUT);       //sets pin 5 as an output
  pinMode(blue, OUTPUT);       //sets pin 7 as an output
  pinMode(pushbutton, INPUT);       //sets pin 11 as an input

}

void loop() {
  // put your main code here, to run repeatedly:
  int PB = digitalRead(pushbutton);    // the integer PB is recognized as digitalRead of the pushbutton or pin 11
  digitalWrite(red, !PB);             // pin 3 is powered when the PB is not pushed
  digitalWrite(green, !PB);            // pin 5 is powered when the PB is not pushed
  digitalWrite(blue, !PB);            // pin 7 is powered when the PB is not pushed
  delay(1);                  // delays for 1 millisecond
}
