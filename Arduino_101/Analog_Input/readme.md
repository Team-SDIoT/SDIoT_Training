<img src="Analog_Input.png" height="250" width="900">

/*  Arduino program 7 to Read input and Print on Serial Monitor
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
int sensorPin = A0;    // select the input pin for the potentiometer   
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600); // baud rate

}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);   // reading value from analog sensor
  sensorValue = map(sensorValue, 0, 1023, 0, 255);   // Mapping the value of analog sensor
  Serial.println(sensorValue);   // printing the value on serial Monitor
  delay(100);
}
