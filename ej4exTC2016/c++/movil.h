#pragma once


/*
*v2016-08-16
*
*/

#include <iostream>
#include "dibujable.h"

class movil: public virtual dibujable {
public:
	movil(float _x, float _y, float _z) : dibujable(_x, _y, _z) {}
	void update(float t) {
		x = x + t;
		y = y + t;
		z = z + t;
	}

	virtual void draw(){
		std::cout << "posicion " << x << ", " << y << "profundidad " << z << std::endl;

	}

};