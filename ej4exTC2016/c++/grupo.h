#pragma once

/*
*v2016-08-16
*
*/

#include "dibujable.h"
#include "fijo.h"
#include "movil.h"
#include <iostream>
#include <list>

using namespace std;

template<typename T>
class grupo : public virtual dibujable {
protected:
	list<T> lista;
public:
	grupo(): dibujable(0.0f, 0.0f, 0.0f) {}
	//los elementos se añaden ya ordenados de mayor a menor z(más lejos a más cerca)
	virtual void add(T elemento) {
		if(lista.empty()){
			lista.push_front(elemento);
		}
		else {
			list<T>::iterator it;;
			//insertar ordenadamente de mayor a menor z
			it = lista.begin();
			while (it != lista.end() && it->z>elemento.z) {
					it++;
				
			}
			lista.insert(it, elemento);
		}
	}
	void update(float t) {
		list<T>::iterator it;
		for (it = lista.begin(); it != lista.end(); it++) {
			it->update(t);
		}
	}

	virtual void draw(){
		list<T>::iterator it;
		for (it = lista.begin(); it != lista.end(); it++) {
			it->draw();
		}
	}
	void sort() {
		//aprovechando que la función add de grupo añade los elementos ordenados
		list<T>aux(lista);
		list<T>::iterator itaux;
		this->lista.clear();
		for (itaux = aux.begin(); itaux != aux.end(); itaux++) {
			add(aux.front());
			aux.pop_front();
		}
	}

};