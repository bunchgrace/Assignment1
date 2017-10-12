/*
 * SimpleAxe.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: gracebunch
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
	/*
    double damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;*/

	double damage= hitPoints;
    if(armor>0 && armor < 20){
    	return damage;
    }
    else
    	return damage-armor;

}


