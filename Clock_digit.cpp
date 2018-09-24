# include  "Clock_digit.h"

int Clock_digit::get_decimal(){
  return decimal_val;
}

void Clock_digit::set_decimal(int num){
  decimal_val=num;
}

void Clock_digit::update_digit(int num){
  bool a = bcd[num][0] ;
  bool b = bcd[num][1];
  bool c = bcd[num][2] ;
  bool d = bcd[num][3];

  //write out
  digitalWrite(pin1,a);
  digitalWrite(pin2,b);
  digitalWrite(pin3,c);
  digitalWrite(pin4,d);
}
