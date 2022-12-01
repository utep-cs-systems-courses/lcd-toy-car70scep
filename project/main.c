#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "buzzer.h"
#include "switch.h"
#include "lcdutils.h"
#include "lcddraw.h"



int main(void) {

  switch_init();
  led_init();
  buzzer_init();

  configureClocks();/* setup master oscillator, CPU & peripheral clocks */
  lcd_init();
  u_char width = screenWidth, height = screenHeight;
  clearScreen(COLOR_RED);
  drawString5x7(20,50,"Come on",COLOR_BLACK,COLOR_RED);
  drawString5x7(20,60,"Press a button",COLOR_BLACK,COLOR_RED);
  enableWDTInterrupts();/* enable periodic interrupt */
  or_sr(0x18);/* CPU off, GIE on */
  
}
