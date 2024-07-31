/* Super button source code
 * by 1721 Tidal Force!
 */

#include "delay.h"

void main(void)
{
    INIT_PIN // Macro if needed to initialize output pin
        while (1)
    {
        ledPin = 0x00;   // LED on
        delay_c_ds(250); // Software delay 2500ms
        ledPin = 0xff;   // LED off
        delay_s_ds(250); // Software delay 2500ms

        // int n;
        // ledPin = 0;                  // LED on
        // for (n = 0; n < 50000; n++); // waste some cycles
        // ledPin = 1;                  // LED off
        // for (n = 0; n < 50000; n++); // waste some cycles
    }
}
