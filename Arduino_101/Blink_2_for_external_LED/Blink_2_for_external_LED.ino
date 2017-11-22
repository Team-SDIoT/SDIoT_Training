/*  Arduino program 2 to Blink external LED
 *  Date: 18th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
void setup() 
{
pinMode(8, OUTPUT); //connect LED to digital pin 8
}

void loop() 
{
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
