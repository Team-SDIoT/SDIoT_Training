/*  Arduino program 7 to Read input and Print on Serial Monitor
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#define LED 13    // define LED to Digital pin 13
#define SWITCH1 4   //define switch 1 to pin 4
#define SWITCH2 5   //define switch 2 to pin 5

boolean val1, val2;

void setup(){
  Serial.begin(9600);  // define baud rate t0 9600
  pinMode(LED, OUTPUT);
  pinMode(SWITCH1, INPUT_PULLUP);
  pinMode(SWITCH2, INPUT_PULLUP);
}

void loop(){
if(digitalRead(SWITCH1) == LOW){  // conditional statement for switch 1
Serial.println("say\n"); // Print say on serial monitor 
delay(1000);
}
if(digitalRead(SWITCH2) == LOW)   //  conditional statement for switch 2
{
  Serial.println("time\n"); // Print time on serial monitor 

delay(1000);
}  
}
