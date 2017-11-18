/*  Arduino program 4 to Blink 4 LED's animation using for loop
 *  Date: 18th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
void setup() 
{
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}


void loop() 
{
  int i;
  for(i=2;i<=5;i++)
  {
  digitalWrite(i, HIGH);   
  delay(1500);                       
  digitalWrite(i, LOW);    
  delay(500); 
  }
}
