/* 
   The goal of this program is to creat a light chaser.
   the first led turns on while the rest are off and it 
   then goes to the second led (blue) while the rest are off
   it goes down the line until it reaches the yellow led and instead of
   restarting it goes backwards going to green then blue and then back
   to red where it restarts the program
   the theme is digital Output*/

   
int red = 3;        // the pin the red led is attached to
int blue = 5;       // the pin the blue led is attached to
int green = 7;      // the pin the green led is attached to
int yellow = 9;     // the pin the yellow led is attached to

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);       //sets pin 3 as an output
  pinMode(blue, OUTPUT);      //sets pin 5 as an output
  pinMode(green, OUTPUT);     //sets pin 7 as an output
  pinMode(yellow, OUTPUT);    //sets pin 9 as an output
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(red, HIGH);     //turns the LED on by setting the voltage to HIGH
  digitalWrite(blue, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(green, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(yellow, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);        //delays for a second
  digitalWrite(red, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(blue, HIGH);     //turns the LED on by setting the voltage to HIGH
  digitalWrite(green, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(yellow, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);        //delays for a second
  digitalWrite(red, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(blue, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(green, HIGH);     //turns the LED on by setting the voltage to HIGH
  digitalWrite(yellow, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);        //delays for a second
  digitalWrite(red, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(blue, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(green, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(yellow, HIGH);     //turns the LED on by setting the voltage to HIGH
  delay(1000);        //delays for a second
    digitalWrite(red, LOW);     //turns the LED off by setting the voltage to HIGH
  digitalWrite(blue, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(green, HIGH);     //turns the LED on by setting the voltage to LOW
  digitalWrite(yellow, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);        //delays for a second
  digitalWrite(red, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(blue, HIGH);     //turns the LED on by setting the voltage to HIGH
  digitalWrite(green, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(yellow, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);        //delays for a second

}
