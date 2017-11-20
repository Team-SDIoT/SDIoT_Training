/*  Arduino program 7 to Read value of LDR input and Print on Serial Monitor
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#define POT A1  //define potentiometer to analog pin A1
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);  //define baud rate to 9600
}

void loop() {
  sensorValue = analogRead(POT); //read analog value from potentiometer
  Serial.println(sensorValue);  //print sensor value on serial monitor 
  delay(200);
}
