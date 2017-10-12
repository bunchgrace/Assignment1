/*
 * CrazyRandomSword.h
 *
 *  Created on: Oct 9, 2017
 *      Author: gracebunch
 */
#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H_
#define CRAZYRANDOMSWORD_H_

/*Defines behavior of SimpleAxe (hitpoint=rand int from 10-100, ignores rand armor points
 * ranging 0 to half the armor the weapon hits
 */

class CrazyRandomSword : public Weapon {
public:

	//fix the hit points

    CrazyRandomSword() : Weapon("Crazy Random Sword",rand()%(100-10+1)+10) {
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};



#endif /* CRAZYRANDOMSWORD_H_ */
