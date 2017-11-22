/*  Arduino program 7 to control servo using potentiometer 
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#include <Servo.h>

#define potpin A0  //define pot pin to analog pin A0
Servo myservo;  
int val;    

void setup() {
  myservo.attach(5);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}

