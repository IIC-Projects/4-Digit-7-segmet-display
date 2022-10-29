4 digit 7 segment display
BY DEBANKAR SHUBHRAM


#include <TM1637.h> //library of 4 digit display
#define CLK 3       // define the pin number of CLK
#define DIO 2        // define the pin number of DIO

TM1637 disp(CLK,DIO);

void setup() {
  TM1637 set();   //library function
  TM1637 init();  //library function
}

void loop() {
  int v=0;       // taking a variable 

  while(v<=10){
    disp.display(v);       //displaying variable V 
    delay(100);
    v=v+1;     //countdown 
  }
}
