/*
autor:Dariel 

*/
#pragma once
#include<iostream>

#include "practica4.h"
class SerVivo : public Guardable {
public:    
	SerVivo() {}
    SerVivo(double vol, const std::string& name): Guardable(vol, name){}
    
    
};