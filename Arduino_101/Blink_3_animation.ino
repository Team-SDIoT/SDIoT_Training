/*  Arduino program 3 to Blink 4 LED's animation 
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
  digitalWrite(2, HIGH);   
  delay(1500);                       
  digitalWrite(2, LOW);    
  delay(1000); 
  digitalWrite(3, HIGH);   
  delay(1500);                       
  digitalWrite(3, LOW);    
  delay(1000);
  digitalWrite(4, HIGH);   
  delay(1500);                       
  digitalWrite(4, LOW);    
  delay(1000);
  digitalWrite(5, HIGH);   
  delay(1500);                       
  digitalWrite(5, LOW);    
  delay(1000);
}
