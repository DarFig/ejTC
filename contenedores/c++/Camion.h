/*
autor:Dariel 
*/
#pragma once
#include<iostream>
#include<string>
#include"Generico.h"
#include"Contenedor.h"

class Camion{
private:
	Contenedor<Generico>* contenido;
protected:
    double capacidad;
public:    
    Camion(double cap){
        this->capacidad = cap;
		this->contenido = new Contenedor<Generico>(cap);
    }  
	~Camion() {
		delete contenido;
	}
	bool guardar(Generico elemento){
		return this->contenido->guardar(elemento);
	}
};