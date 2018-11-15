/* See 
 * http://lancaster-university.github.io/microbit-docs/advanced/ 
 * for docs about using the micro:bit library
*/
#include "MicroBit.h"

MicroBitDisplay display;

DigitalIn mybutA(BUTTON_A);
DigitalIn mybutB(BUTTON_B);


int main(){
    
    do{
        if(mybutA == false){
            display.scroll("B:IT.con");
        } else {
            display.scroll("tech43");
        }
    }while(mybutB == true);
}

