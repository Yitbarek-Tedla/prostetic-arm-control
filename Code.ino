
#include <Servo.h>

Servo myservo, myservo1, myservo2, myservo3, myservo4;;  // create servo object to control a servo

int emg = 0;
int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
//  pinMode(BUTTON_PIN, INPUT_PULLUP);
   myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(5); 
  myservo2.attach(7);
  myservo3.attach(9);
  myservo4.attach(11);
}
bool i = true;
void loop() {
  if (i) {undoGrip(); i = false;}
  
  int ss;
  while(Serial.available()){}
  ss = Serial.parseInt();Serial.print("You've inputted "); Serial.println(ss);
  if(ss==1){oneFinger();}
  else if(ss==2){twoFinger();}
  else if(ss==3){threeFinger();}
  else if(ss==4){fourFinger();}
  else if(ss==5){fiveFinger();}
  else if(ss==6){doGrip();} else if(ss==7){undoGrip();}
 
}

void doGrip(){
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    myservo1.write(pos); 
    myservo2.write(pos); 
    myservo3.write(pos); 
    myservo4.write(pos); 
          
    delay(5);                       // waits 15ms for the servo to reach the position

    
  }}
void undoGrip(){
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    myservo1.write(pos); 
    myservo2.write(pos); 
    myservo3.write(pos); 
    myservo4.write(pos); 
          
    delay(5);                       // waits 15ms for the servo to reach the position   
  
}}
void oneFinger(){
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'      
    delay(5); 
  }  }
void twoFinger(){
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'      
    delay(5); 
  }  }
void threeFinger(){
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'      
    delay(5); 
  }  }
void fourFinger(){
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'      
    delay(5); 
  }  }
 void fiveFinger(){
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo4.write(pos);              // tell servo to go to position in variable 'pos'      
    delay(5); 
  }  }
