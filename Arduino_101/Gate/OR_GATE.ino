/*  Arduino program 7 to implement OR digital gate
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */

#define LED 13  //define LED to digital pin 13
#define BUTTON1 4  //define button 1 to pin 4
#define BUTTON2 5   // define button 2 to pin 5

boolean val1, val2;   //define two variable of data type boolean

void setup(){
  pinMode(LED, OUTPUT);  //set led to be output
  pinMode(BUTTON1, INPUT_PULLUP);  //set button 1 to be input
  pinMode(BUTTON2, INPUT_PULLUP);   // set button 2 to be input
}

void loop(){

  val1 = digitalRead(BUTTON1);  // read value of button 1
  val2 = digitalRead(BUTTON2);   //read value of button 2
  
  if(val1 == LOW || val2 == LOW )  // conditional statement
  digitalWrite(LED, HIGH);

  else{
  digitalWrite(LED, LOW);
  }
}

