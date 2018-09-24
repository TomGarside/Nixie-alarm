/*
  Arduino Nixie Display library
  Thomas Garside 2017
*/
#ifndef Nixie_display_h
#define Nixie_display_h

#include "Clock_digit.h"
#include "Arduino.h"

// manages 4 digit display of nixie digits
// takes time and passes digits to correct nixie digits has functions to zero
// flash display and other stuff maybe

class Nixie_display
{

  private:
    int hour=0;
    int min=0;
    int sec=0;
    int flashDelay = 30;

    Clock_digit  digit1;
    Clock_digit  digit2;
    Clock_digit  digit3;
    Clock_digit  digit4;

  public:
    Nixie_display (int h, int m) :
    digit1(A0,A1,A2,A3),
    digit4(2,3,4,5),
    digit3(6,7,8,9),
    digit2(10,11,12,13)

    {
        hour=h;
        min=m;
    }
    void setFlashDelay(int);

    void Update_display();

    void  Clear_display();

    void Flash_display();

    void setTime(int, int );

    void getTime();
};

#endif
