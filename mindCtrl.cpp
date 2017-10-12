/*
 * mindCtrl.cpp
 *
 *  Created on: Oct 11, 2017
 *      Author: gracebunch
 */
#include "mindCtrl.h"



double MindCtrl::hit(double armor){


	//ignores half of armor points
	double a= armor/2;
	double damage= hitPoints-a;
    if(damage<0){
    	return 0;
    }
    else
    	return damage;

}
