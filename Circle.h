/*
 * Circle.h
 *
 *  Created on: 9 kwi 2018
 *      Author: marcel
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include"Svg.h"
#include<string>
#include<iostream>

namespace svg {

class Circle: public Svg {
public:
	Circle();	//!< Brief constructor never used intentionally in application.
	Circle(std::string, unsigned, unsigned, unsigned);	//!< Brief construct circle of given size and position
	virtual ~Circle();
	void create();	//!< Brief saves circle code to buffer
private:
	std::string color;
	unsigned cx;	//!< Brief x coordinate of the circle
	unsigned cy;	//!< Brief x coordinate of the circle
	unsigned radius;
};

} /* namespace svg */

#endif /* CIRCLE_H_ */
