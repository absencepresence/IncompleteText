
#include <Servo.h> 
  
   
Servo myservo; 
int pos = 0; 

 
int val;

const int buttonPin = 3;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

const int knockSensor = A5; // the piezo is connected to analog pin 0
const int threshold = 20;  // threshold value to decide when the detected sound is a knock or not

int sensorReading = A5;      // variable to store the value read from the sensor pin
int ledState = HIGH;         // variable used to store the last L5D status, to toggle the light

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
   myservo.attach(9);
}

void loop()  { 
  for(pos = 0; pos <= 90; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 90; pos>=0; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
} 
