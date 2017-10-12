/*
 * CrazyRandomSword.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: gracebunch
 */


#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){

	int half=(armor/2);
	double d= rand()%(half-0 + 1) + 0;
	 double damage = hitPoints - d;
	    if(damage < 0){
	        return 0;
	    }
	    return damage;

}




