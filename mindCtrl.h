/*
 * mindCtrl.h
 *
 *  Created on: Oct 11, 2017
 *      Author: gracebunch
 */

#include <string>
#include "Weapon.h"
#ifndef MINDCTRL_H_
#define MINDCTRL_H_

//mindctrl has 80 hitpoints - ignores half the armor
class MindCtrl : public Weapon {
public:

    MindCtrl() : Weapon("Mind control", 80.0) {
    }
    virtual ~MindCtrl() {};
    virtual double hit(double armor);

};




#endif /* MINDCTRL_H_ */
