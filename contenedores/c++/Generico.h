/*
autor:Dariel 

*/
#pragma once
#include<iostream>
#include<string>
#include "Guardable.h"
class Generico : public Guardable {
public:
	Generico() {}
	Generico(double vol, const std::string& name) : Guardable(vol, name) {}


};