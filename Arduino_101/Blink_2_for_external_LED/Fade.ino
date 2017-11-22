/*  Arduino program to implement buzzer with faded sound 
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
 #define BUZZER 6  //define buzzer to digital pin 6

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:

for(int i=0;i<=255;i++)
{
  analogWrite(BUZZER, i);
  delay(10);
}

for(int j=255;j>=0;j--)
{
  analogWrite(BUZZER, j);
  delay(5);
}

}
