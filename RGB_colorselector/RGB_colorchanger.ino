/*
   the goal of this program is to change the color of the RGB by picking the level or amount of color that goes in 
   for example having a level of 200 for red and 200 for blue but 0 for green your RGB will turn purple, setting the
   level of color to a certain number changes the color that the RGB produces. 
   the theme is analog Output */

int red = 3;           // the pin the red led is attached to
int green = 5;           // the pin the green led is attached to
int blue = 6;          // the pin the blue led is attached to

void setup() {
  // put your setup code here, to run once:

  pinMode(red, OUTPUT);       //sets pin 3 as an output
  pinMode(green, OUTPUT);        //sets pin 5 as an output
  pinMode(blue, OUTPUT);        //sets pin 6 as an output
}       

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(red, 117);         // sets the level of pin 3 (red) as 117
  analogWrite(green, 15);        // sets the level of pin 5 (green) as 15
  analogWrite(blue, 99);         // sets the level of pin 6 (blue) as 99
}
