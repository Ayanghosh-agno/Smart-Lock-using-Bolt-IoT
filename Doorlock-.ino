
#include <Servo.h>
Servo servo;
int buttonState;         // variable for reading the pushbutton status
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(8, INPUT);
  servo.attach(9);
  Serial.begin(9600);
  //servo.write(0);
  digitalWrite(8, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  
buttonState = digitalRead(8);
  Serial.println(buttonState);
  
    if (buttonState == 1) {
    servo.write(0);//CLOSE lock
  } 
  else{
    servo.write(180);//OPEN lock
  }
  
  }
