#pragma once

class dibujable {

public:
	float x, y, z;
	
	dibujable(float _x, float _y, float _z) : x(_x), y(_y), z(_z){}

	virtual void draw() {};
	
	virtual void update(float t){}

};