/* 
  the goal of this program is to read the pushbutton wether it's on or off
  the theme is digital Input */

int pushbutton = 3;   // the pin the pushbutton is atteched to

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);                  // starts the serial communication at 9600 bits per second
  pinMode(pushbutton, INPUT_PULLUP);            // sets pin 3 as an input
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonstate = digitalRead(pushbutton);            // reads pin 3 and refers it to buttonstate
  Serial.println(buttonstate);       // serial prints value of buttonstate
  delay(1);                            // delays for 1 millisecond

}
