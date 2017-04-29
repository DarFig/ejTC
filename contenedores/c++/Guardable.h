/*
autor:Dariel 
*/
#pragma once
#include<iostream>
#include<string>
class Guardable{
protected:
	double volumen;
	std::string nombre;
public:
	Guardable() {}
	Guardable(double vol, const std::string& name) {
		this->volumen = vol;
		this->nombre = name;
	}
	double getVol() {
		return this->volumen;
	}
};