/*
 * SimpleAxe.h
 *
 *  Created on: Oct 9, 2017
 *      Author: gracebunch
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H_
#define SIMPLEAXE_H_

/*Defines behavior of SimpleAxe (hitpoint=60, ignores armor points if
 * greater than 0 less than 20
 */

class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple axe", 60.0) {
    }
    virtual ~SimpleAxe() {};
    virtual double hit(double armor);

};



#endif /* SIMPLEAXE_H_ */
