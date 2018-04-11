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
	Circle();
	Circle(std::string, unsigned, unsigned, unsigned);
	virtual ~Circle();
	void create();
private:
	std::string color;
	unsigned cx;
	unsigned cy;
	unsigned radius;
};

} /* namespace svg */

#endif /* CIRCLE_H_ */
