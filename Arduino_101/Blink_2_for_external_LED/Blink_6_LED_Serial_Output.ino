/*  Arduino program 6 for LED with serial Output
 *  Date: 18th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
 #define LED 13 // LED is connected to Pin #13 on UNO Board

void setup(){

  Serial.begin(9600);
  pinMode(LED, OUTPUT); // Making the pin 13 on Arduino UNO board as output 

}

// This will run forever 
void loop(){

  digitalWrite(LED, HIGH);
  delay(1000); // Stopping execution for 1 second
  Serial.println("LED is ON");
  digitalWrite(LED, LOW);
  delay(1000);
  Serial.println("LED is OFF");
}

