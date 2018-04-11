/*
 * Road.h
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */
#ifndef ROAD_H_
#define ROAD_H_
#include"Rect.h"
#include<iostream>
#include<string>

#define NUM_OF_LINES 5


namespace svg {

class Road: public Rect{
public:
	Road(std::string);
	virtual ~Road();
	void create();
	void write();
	void display();
	void add_animation();
private:
	std::string road_color;
	Rect road;
	Rect lines[NUM_OF_LINES];
};

} /* namespace svg */

#endif /* ROAD_H_ */
