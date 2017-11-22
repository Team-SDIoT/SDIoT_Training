/*  Arduino program to implement Logical AND Gate using Push Button
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#define LED 7    // attach LED to Digital pin 7
#define BUTTON1 4  // attach Button 1 to Digital pin 4
#define BUTTON2 5  // attach Button 2 to Digital pin 5

boolean val1, val2;   // Define variable of datatype boolean

void setup(){
  pinMode(LED, OUTPUT);      
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
}

void loop(){

  val1 = digitalRead(BUTTON1);    // reading value of button 1
  val2 = digitalRead(BUTTON2);    // reading value of button 2
  
  if(val1 == LOW && val2 == LOW )    // conditional syntax
  digitalWrite(LED, HIGH);
  else
  {
  digitalWrite(LED, LOW);
  }
}

