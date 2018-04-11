/*
 * Rect.h
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#ifndef RECT_H_
#define RECT_H_
#include<iostream>
#include<string>
#include"Svg.h"

namespace svg {

class Rect: public Svg {
public:
	Rect();
	Rect(std::string, unsigned x, unsigned y, unsigned width, unsigned height);
	virtual ~Rect();
	bool color_check(std::string);
	void create();
	void add_animation(std::string attributeName, unsigned from, unsigned to, unsigned dur, float begin);
private:
	std::string color;
	unsigned x;
	unsigned y;
	unsigned width;
	unsigned height;
};

} /* namespace svg */

#endif /* RECT_H_ */
