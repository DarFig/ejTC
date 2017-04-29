/*
autor:Dariel 

*/
#pragma once
#include<iostream>

#include "practica4.h"
class Toxico : public Guardable {
public:    
	Toxico(){}
    Toxico(double vol, const std::string& name): Guardable(vol, name){}
    
};