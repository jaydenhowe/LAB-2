/*
   the goal of this program is to display the voltage and bitvalue by using analogRead
   by reading A0 and serialprinting what we want to read for example voltage you can display 
   what the voltager is and change the voltage and bitvalue by turning the potentiometer. */


float voltage;      // converts voltage to a float data type
int sensorvalue;   // set sensorvalue as an integer

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   //starts the serial communcitation at 9600 bits per second

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue = analogRead(A0);    // reads the input of pin A0
  voltage = 5.0/1023.0* sensorvalue;    //converts the analog reading to a voltage with a range of 0 - 5V
  Serial.print("bitvalue=");       //prints out bitvalue=
  Serial.print(sensorvalue);      //prints out the value that is read
  Serial.print("\t");           // prints tab
  Serial.print("voltage=");     //prints out voltage=
  Serial.println(voltage);     //prints out the value that is read

}
