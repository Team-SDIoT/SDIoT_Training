/*  Arduino program 7 to Read input and Print on Serial Monitor
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#define LDR A1  //define LDR at analog pin A1
#define CFL 2   //define relay at digital pin 2
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);  //define baud rate to 9600

}

void loop() {
  sensorValue = analogRead(LDR);  // read value of LDR
  Serial.println(sensorValue);   // print value of LDR on serial monitor
  delay(200);
  if(sensorValue < 400)    //conditional statement to switch on the CFL
  digitalWrite(CFL, HIGH);
  else
  digitalWrite(CFL, LOW);

}
