/*
 * CA.h
 *
 *  Created on: Sep 27, 2023
 *      Author: eslam
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

// define states
enum{
	CA_waiting,
	CA_driving
}CA_state_id;

// declare states functions CA
STATE_define(CA_waiting);
STATE_define(CA_driving);

// state pointer to func
extern void (*CA_state)();


#endif /* CA_H_ */
