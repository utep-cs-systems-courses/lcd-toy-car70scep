#include <msp430.h>
#include "led.h"



void led_init(){

  P1DIR |= LEDS;//bits on leds are output

}
