/*
 * Rect.h
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#ifndef RECT_H_
#define RECT_H_
#include<iostream>
#include"Svg.h"

namespace svg {

class Rect: public Svg {
public:
	Rect();
	Rect(unsigned x, unsigned y, unsigned width, unsigned height);
private:
	std::string color;



};

} /* namespace svg */

#endif /* RECT_H_ */
