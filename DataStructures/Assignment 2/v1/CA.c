/*
 * CA.c
 *
 *  Created on: Sep 27, 2023
 *      Author: eslam
 */

#include "CA.H"
// variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

// state pointer to func
void (*CA_state)();
int US_Get_distance_random(int i , int r , int count);
STATE_define(CA_waiting)
{
	// state name
	CA_state_id = CA_waiting;

	// state action
	CA_speed = 0;

	//DC_Motor(CA_speed)


	// event check
	// US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random(45,55 ,1 );
	(CA_distance <= CA_threshold)? (CA_state= STATE(CA_waiting)):(CA_state= STATE(CA_driving));


	printf("CA_waiting state : distance = %d  speed = %d \n",CA_distance , CA_speed);
}
STATE_define(CA_driving)
{
	// state name
	CA_state_id = CA_driving;

	// state action
	CA_speed = 30;

	//DC_Motor(CA_speed)


	// event check
	// US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random(45,55 ,1 );
	(CA_distance <= CA_threshold)? (CA_state= STATE(CA_waiting)):(CA_state= STATE(CA_driving));


	printf("CA_driving state : distance = %d  speed = %d \n",CA_distance , CA_speed);

}

int US_Get_distance_random(int i , int r , int count)
{
	for(int i = 0; i < count ; i++){
		int rand_num = (rand() % (r-1+1))+1;
		return rand_num;
	}
	return 1;
}



