/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include <Servo.h>
#include "pitches.h"

Servo myservo;
void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
myservo.attach(8);
  myservo.write(0); 
delay(201); 
myservo.detach();

 l1:Serial.print("Open ");
  Serial.println();
 if(ping(5)!=0) goto l1;
 
 myservo.attach(8);
  myservo.write(180); 
delay(203); 
myservo.detach();
 
 l2:Serial.print("Closed ");
 tone(4,NOTE_C4,10);
  Serial.println();
  if(ping(3)!=0) goto l2;
}



int ping(int pingPin)
{
    long duration, inches, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
  if(inches<10)
  return 0;
  else
  return 1;
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */