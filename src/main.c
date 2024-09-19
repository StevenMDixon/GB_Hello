#include <gb/gb.h>
#include <stdint.h>
#include <gb/drawing.h>

void main(void)
{
    // Loop forever
    while(1) {

        gotogxy(0,10);
		// Game main loop processing goes here
        gprintf("Hello World!");

		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
