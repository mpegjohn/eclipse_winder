#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2016-08-02 12:42:33

#include "Arduino.h"
#include "Winder.h"
ISR(TIMER1_COMPA_vect) ;
void setup() ;
void loop() ;
void do_a_layer(double num_turns) ;
void updateTps() ;
void updateTurns() ;
void requestEvent() ;
void receiveEvent(int howMany) ;
uint8_t *get_float_from_array(uint8_t *out_array, uint8_t *current_index) ;
uint8_t *doubleToData(uint8_t *dataArray, uint8_t *pparameterData) ;
uint8_t CRC8(const uint8_t *data, uint8_t len) ;
float calculateSpoolSpeed() ;
float calculateShuttleSpeed(float spoolSpeed, float wireSize) ;
long calculateShuttleSteps(float wireSize, int numberTurns) ;
long calculateSpoolSteps(int numberTurns) ;
bool SetUpInterrupts(const int usecs) ;
void printDouble(double val, uint8_t precision) ;

#include "Winder.ino"


#endif
