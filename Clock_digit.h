/*
  Arduino Nixie Display library
  Thomas Garside 2017
*/
#ifndef Clock_digit_h
#define Clock_digit_h

#include "Arduino.h"
//holds data for a single clock digit and handles seting arduino pins
//int from 0 to 9 is converted to BCD then pushed to specified arduino pins
class Clock_digit
{
  private:
    int decimal_val=0;
    int bcd[10][4] = {{0,0,0,0},//0
                      {0,0,0,1},//1
                      {0,0,1,0},//2
                      {0,0,1,1},//3
                      {0,1,0,0},//4
                      {0,1,0,1},//5
                      {0,1,1,0},//6
                      {0,1,1,1},//7
                      {1,0,0,0},//8
                      {1,0,0,1} //9
                    };
    int pin1;
    int pin2;
    int pin3;
    int pin4;

  public:
    Clock_digit(int one,int two,int three,int four){

        //set up outpins
        pin1 = one;
        pin2 = two;
        pin3 = three;
        pin4 = four;
    }

    void update_digit(int);

    int get_decimal();

    void set_decimal(int);


};

#endif
