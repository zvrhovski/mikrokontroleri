/* See 
 * http://lancaster-university.github.io/microbit-docs/advanced/ 
 * for docs about using the micro:bit library
*/
#include "MicroBit.h"

MicroBitDisplay display;

DigitalIn mybut(BUTTON_A);

int main()
{
    while(1){
        if(mybut){
            display.scroll("B:IT.con");
        } else {
            display.scroll("tech43");
        }
    }
}
