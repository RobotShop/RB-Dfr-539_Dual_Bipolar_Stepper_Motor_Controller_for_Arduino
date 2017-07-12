/*
  RB-Dfr-539 :: Dual Bipolar Stepper Motor Controller for Arduino
  http://www.robotshop.com/en/dual-bipolar-stepper-motor-controller-arduino.html
*/

/*
This sample code is for testing the 2 stepper motors 
The rotation velocity can be adjusted by the code switch 
Microcontroller: Arduino UNO  
*/

int M1dirpin = 4;
int M1steppin = 5;
int M2dirpin = 7;
int M2steppin = 6;

void setup()
{
  pinMode(M1dirpin,OUTPUT);
  pinMode(M1steppin,OUTPUT);
  pinMode(M2dirpin,OUTPUT);
  pinMode(M2steppin,OUTPUT);
}

void loop()
{
  int j;
  
  delayMicroseconds(2);
  digitalWrite(M1dirpin,LOW);
  digitalWrite(M2dirpin,LOW);
  
  for(j = 0; j <= 5000; j++)
  {
    digitalWrite(M1steppin,LOW);
    digitalWrite(M2steppin,LOW);
    delayMicroseconds(2);
    digitalWrite(M1steppin,HIGH);
    digitalWrite(M2steppin,HIGH);
    delay(1);
  }
}

