/*
autor:Dariel 

*/
#pragma once
#include<iostream>
#include "Generico.h"
#include<string>
#include "practica4.h"
class Producto : public Generico{
public:    
	Producto(){}
    Producto(double vol, const std::string& name): Generico(vol, name){} 
    
};