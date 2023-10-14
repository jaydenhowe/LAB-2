/* 
      The goal of this program is to blink the LED on and off every seoncd
      
      the theme is digital Output
      */


int LED = 3; // the pin that the LED is attached to

void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT); // sets pin 3 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED, HIGH); //turns the LED on by setting the voltage to HIGH
delay(1000);             //delays by one second
digitalWrite(LED, LOW);  //turns the LED off by setting the voltage to LOW
delay(1000);             //delays by one second
}
