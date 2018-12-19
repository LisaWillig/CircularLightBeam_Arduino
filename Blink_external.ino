/*
  Blinking Ring

  This Arduino sketch turns on the LEDs looping from the pins 1 to 12 for a certain 
  amount of time (waitTimeOn) and waiting time between the LEDs (WaitTimeoff). 
  This enables the LEDs to blink in a circle or ring-shape.
  LED in the variable pin1 (here: 0) will stay on the whole time.

  Based on the Blink example.
  Author: Lisa Willig
  Date: 19.12.2018
*/

// Initialize Pins according to blinking order
int pin1 = 0;
int pin2 = 1;
int pin3 = 2;
int pin4 = 3;
int pin5 = 4;
int pin6 = 5;
int pin7 = 6;
int pin8 = 7;
int pin9 = 8;
int pin10 = 9;
int pin11 = 10;
int pin12 = 11;
int pin13 = 12;

// Time for each lamp and between next lamp
int waitTimeOn = 150;
int waitTimeOff = 50;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 2; i<=13; i++){
    digitalWrite("pin"+i, HIGH);
    delay(waitTimeOn);
    digitalWrite("pin"+i, LOW);
    delay(waitTimeOff);
  }
}
