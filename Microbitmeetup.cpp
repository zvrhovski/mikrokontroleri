/* See 
 * http://lancaster-university.github.io/microbit-docs/advanced/ 
 * for docs about using the micro:bit library
*/
#include "MicroBit.h"

MicroBitDisplay display; // stvaranje objekta display

DigitalIn mybut(BUTTON_A); // stvaranje objekta za tipku A

int main()
{
    while(1){
        if(mybut){ // ako je tipka A pritisnuta
            display.scroll("B:IT.con"); // na display-u prikazuj B:IT.con
        } else { // inače 
            display.scroll("tech43"); // na display-u prikazuj tech43
        }
    }
}
