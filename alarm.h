/*
  Arduino alarm library
  Thomas Garside 2017
*/
#ifndef Alarm
#define Alarm

#include "Arduino.h"

class alarm
{

  private:
    int hour;
    int min;
    int bellpin;

  public:
    alarm (int, int,int);

    void setAlarm(int, int);

    int getAlarm();

    bool checkAlarm(int ahour,int amin);
    
    void ring();





};

#endif
