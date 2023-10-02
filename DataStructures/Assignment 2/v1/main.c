/*
 * main.c
 *
 *  Created on: Sep 27, 2023
 *      Author: eslam
 */

#include "CA.h"

void setup()
{
	// init all the drivers
	// init IRQ....
	// init HAL US_Driver DC_Driver
	// init block
	// set states pointers for each block
	CA_state = STATE(CA_waiting);
}

void main ()
{
	volatile int d;
	setup();

	while(1)
	{
		// call state for each block
		CA_state();
		for(d=0;d<1000;d++);

	}


}
