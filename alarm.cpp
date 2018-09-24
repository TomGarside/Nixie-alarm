#include "Arduino.h"
#include "alarm.h"
    alarm::alarm (int ahour, int amin, int bellpin){
       hour = ahour;
       min = amin;
    }

    void alarm::setAlarm(int ahour, int amin){
      hour = ahour;
      min = amin;
    }

    int alarm::getAlarm(){
      return hour;
    }

    bool alarm::checkAlarm(int ahour,int amin){
        return(ahour == hour and amin == min);
      
    }

    void alarm::ring(){//test to improve
        digitalWrite(bellpin,HIGH);
        delay(100);
        digitalWrite(bellpin,LOW);
    }

