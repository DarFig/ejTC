#pragma once
#include <iostream>

#include "dibujable.h"
#include "grupo.h"
#include "fijo.h"
#include "movil.h"
class escena{	
protected:
	grupo<dibujable> objetos;

public:
	
	escena() {
		
	}
	virtual void add(dibujable elem) {
		objetos.add(elem);
	}
	void draw() {
		objetos.draw();
	}
	void update(float t) {
		objetos.update(t);
	}
	void sort() {
		objetos.sort();
	}
};