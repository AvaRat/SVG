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
	Rect();	//!< Brief default constructor, never used intantionally in application
	Rect(std::string, unsigned x, unsigned y, unsigned width, unsigned height);	/**< Brief constructor of rectangle*/
	virtual ~Rect();
	bool color_check(std::string);	//!< Brief function to check if given color is OK
	void create();	//!< Brief overloaded member to save rectangle to buffer
	void add_animation(std::string attributeName, unsigned from, unsigned to, unsigned dur, float begin);	/**< Brief
																			 saves rectangle animation code to buffer

	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
private:
	std::string color;
	unsigned x;	//!< Brief x coordinate of the left-top of the rectangle.
	unsigned y;	//!< Brief y coordinate of the left-top of the rectangle.
	unsigned width;
	unsigned height;
};

} /* namespace svg */

#endif /* RECT_H_ */
