#pragma once

/*
*v2016-08-16
*
*/

#include <iostream>
#include "dibujable.h"

class fijo : public virtual dibujable {
public:
	fijo(float _x, float _y, float _z): dibujable( _x, _y, _z){}

	virtual void draw(){
		std::cout << "posicion " << x<<", "<< y << "profundidad " << z << std::endl;

	}

};