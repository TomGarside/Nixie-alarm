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

  public:
    Alarm (int ahour, int amin);

    void setAlarm(int ahour, int amin);

    int getAlarm();

    bool checkAlarm(int ahour,int amin);





};

#endif
