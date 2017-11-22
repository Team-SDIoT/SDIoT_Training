/*  Arduino program for serial LED controller using serial monitor
 *  Date: 19th Nov 17 
 *  @BML Munjal University, Arduino 101 Workshop
 */
#define CFL 7  //define relay or CFL to digital pin 7
#define BAUD_RATE 9600

char pc_input;  // declare pc_input to char 

void setup(){
  Serial.begin(BAUD_RATE); //Serial.begin(9600);
  pinMode(CFL, OUTPUT);  
}

void loop(){
  if(Serial.available() > 0)  // condition to see if anything is entered through serial monitor
  pc_input = Serial.read();  // reading the value from serial monitor
 
  if(pc_input == '1')  
    {
      digitalWrite(CFL, HIGH);
    
    delay(1);
    }
  else if(pc_input == '0')
  {
    digitalWrite(CFL, LOW);
    delay(1);
  }
}

