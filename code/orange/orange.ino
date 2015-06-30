
#include <Servo.h> 
  
   
Servo myservo; 
int pos = 0; 

 
int val;

const int buttonPin = 3;     // the number of the pushbutton pin
const int ledPin =  4;      // the number of the LED pin


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

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    myservo.write(90);
    delay(15);
  }
  else {
    // turn LED off:
    //digitalWrite(ledPin, LOW);
    myservo.write(0);
    delay(5);
  /*
    sensorReading = analogRead(knockSensor);

  // if the sensor reading is greater than the threshold:
  if (sensorReading <= threshold) {
    // toggle the status of the ledPin:
    ledState = !ledState;
    // update the LED pin itself:
    digitalWrite(ledPin, ledState);
    // send the string "Knock!" back to the computer, followed by newline
     
    delay(15);
           digitalWrite(ledPin, LOW);
  }
  delay(5);  // delay to avoid overloading the serial port buffer
  }
*/
}}

