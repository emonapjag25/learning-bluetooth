int const RX_PIN = 1; //this is the RX pin, this receives the bluetooh
int const TX_PIN = 0; //this is the TX pin, the transmits
#include <SoftwareSerial.h>

SoftwareSerial tooth(TX_PIN, RX_PIN); //makes a bluetooth object
//set tx and rx pins
//tx goes first, then rx

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}