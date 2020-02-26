/*Batu Kaan Özen/ Hande Yıldırım Open Loop Control code*/

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// initialize the stepper library on pins 8 through 11:
int cycle;
int cyclestatue=0;
int location = 0;
int Lswitch1 = 7;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  pinMode(Lswitch1, INPUT);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  takeCycleFromSerial();
  Serial.available();
  Serial.println(cycle);
  delay(100);
  Serial.println(cyclestatue);
  //myStepper.step(-Location);
  //Serial.println(i);
  //(delay(500);
  //}
  // step one revolution in the other direction:
  //Serial.println("counterclockwise");
  //myStepper.step(-stepsPerRevolution);
  //delay(500);

}

void takeCycleFromSerial(){
 while (Serial.available() > 0) {
     cycle = Serial.parseInt();
     int blank = Serial.parseInt();
  }
  if ( cyclestatue !=cycle){
    cyclestatue = cycle;
    findlocation();
    boolean entschalter1 = 0;
    while(!entschalter1){
      myStepper.step(+stepsPerRevolution);
      entschalter1 = entSchalter1();
    }
    goToLocation();
  }
}

void findlocation(){
 location = cyclestatue*stepsPerRevolution;
}

void goToLocation(){
  myStepper.step(-location);
}

boolean entSchalter1() {

  if (digitalRead(Lswitch1) == 1) {
    return true;
  }
  else {
    return false;
  }
}
