/* 
   the goal of this program is to creat a light chaser using the RGB
   the program is set to turn the red light on first then blue and then
   green, they then all turn on to set the color to white. once all lights 
   turn on the program rests creatinga light chaser.
   the theme is digital Output */ 
   

int red = 3;
int green = 5;
int blue = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);       //sets pin 3 as an output
  pinMode(blue, OUTPUT);      //sets pin 5 as an output
  pinMode(green, OUTPUT);     //sets pin 7 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);     //turns the LED on by setting the voltage to HIGH
  digitalWrite(green, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(blue, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);                 //delays for a second
  digitalWrite(red, LOW);     //turns the LED off by setting the voltage to HIGH
  digitalWrite(green, HIGH);     //turns the LED on by setting the voltage to LOW
  digitalWrite(blue, LOW);     //turns the LED off by setting the voltage to LOW
  delay(1000);                 //delays for a second
  digitalWrite(red, LOW);     //turns the LED off by setting the voltage to HIGH
  digitalWrite(green, LOW);     //turns the LED off by setting the voltage to LOW
  digitalWrite(blue, HIGH);     //turns the LED on by setting the voltage to LOW
  delay(1000);                 //delays for a second  
  digitalWrite(red, HIGH);     //turns the LED on by setting the voltage to HIGH
  digitalWrite(green, HIGH);     //turns the LED on by setting the voltage to LOW
  digitalWrite(blue, HIGH);     //turns the LED on by setting the voltage to LOW
  delay(1000);                 //delays for a second  
}
