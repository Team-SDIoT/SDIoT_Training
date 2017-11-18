/*  Arduino program 1 to Blink on board LED
 *  Date: 18th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
void setup() 
{
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
