/*  Arduino program to print temperature using LM 35 
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#define tempPin A0 //define tempPin to analog pin A0

float tempC;  //declare variable tempC with float data type
int reading;   //declare variable reading with int data type

void setup()
{
analogReference(INTERNAL);  //declare analog reference to internal
Serial.begin(9600);  //baud rate 
}

void loop()
{
reading = analogRead(tempPin);  //read the value of temperature
tempC = reading / 9.31;  //converting readed value in centigrade
Serial.println(tempC);  //printing value of temperature on serial monitor
delay(1000); 

}

