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

#define NUM_OF_LINES 5	//!< Brief MAKRO for the number of lines in a road


namespace svg {

class Road: public Rect{
public:
	Road(std::string);
	virtual ~Road();
	void create();	//!< Brief overloaded member which saves a road HTML code to buffer
	void write();	//!< Brief overloaded member which saves code of the road to file
	void display();	//!< Brief displays buffer of all road parts
	void add_animation();	/*!< Detailed cheated member that is supposed to be a Car class member.
								 It makes a viewer feel as cars are moving but actually the lines on the road do so */
private:
	std::string road_color;
	Rect road;
	Rect lines[NUM_OF_LINES];
};

} /* namespace svg */

#endif /* ROAD_H_ */
