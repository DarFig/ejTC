/*
autor:Dariel 

*/
#pragma once
#include<iostream>
#include"practica4.h"
#include"Generico.h"
#include<list>
template<typename T>
class Contenedor: public Generico{
protected:
	std::list<T> contenido;
	//T contenido;
	double capacidad;
public:
	Contenedor(double vol) {
		this->volumen = vol;
		this->capacidad = this->volumen;
	}
   bool guardar(T elemento){
		if(elemento.getVol()<=this->capacidad){
			this->capacidad -= elemento.getVol();
			this->contenido.push_back(elemento);
			return true;
		}else{
			return false;
		}
	}
};