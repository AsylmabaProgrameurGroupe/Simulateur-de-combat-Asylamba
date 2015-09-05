/*
 * Ship.h
 *
 *  Created on: 1 sept. 2015
 *      Author:
 */

#ifndef SHIP_SHIP_H_
#define SHIP_SHIP_H_

#include "ShipType.h"

class Ship{
	
private:
	
	ShipType type;
	double hull;
	
	
	
	
public:
	
	Ship(ShipType type); 
	Ship(const Ship& ship) = default;
	virtual ~Ship() = default;
	Weapon getWeapon() const;
	double getDefense() const;
	double getSpeed() const;
	double getMaxHull() const;
	unsigned int getPev() const; 
	unsigned int getPrice() const;
	int getSoute() const;

	double getHull() const {
		return hull;
	}

	const ShipType& getType() const {
		return type;
	}
	
	const std::string& getIdName() const {
		return type.getIdName();
	}

	const ShipFamily& getFamily() const {
		return type.getFamily();
	}

	const std::string& getName() const {
		return type.getName();
	}
};



#endif /* SHIP_SHIP_H_ */
