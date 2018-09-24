# include  "Nixie_display.h"

    // updates display to current time breaks h/m into top and bottom digit
      void Nixie_display::Update_display(){
          int both = hour%10;
          int toph = (hour-both)/10;
          int botm = min%10;
          int topm = (min-botm)/10;

          digit1.update_digit(toph);
          digit2.update_digit(both);
          digit3.update_digit(topm);
          digit4.update_digit(botm);
      }



      // sets display to zeros
    void  Nixie_display::Clear_display(){
           digit1.update_digit(0);
           digit2.update_digit(0);
           digit3.update_digit(0);
           digit4.update_digit(0);

      }

    //sets flashdelay time in ms
    void Nixie_display::setFlashDelay(int delay){
        flashDelay=delay;
    }
      //flashes display on and off
    void Nixie_display::Flash_display(){
        Clear_display();
        delay(flashDelay);
        Update_display();
        delay(flashDelay);
      }
  

    void Nixie_display::setTime(int hr, int mi){
        hour=hr;
        min=mi;
    }


    // int Nixie_display::getTime(){
      //  return min;}
