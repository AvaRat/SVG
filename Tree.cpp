/*
 * Tree.cpp
 *
 *  Created on: 11 kwi 2018
 *      Author: marcel
 */

#include "Tree.h"

namespace svg {


void Tree::create(){
	unsigned Y = y_svg_size/6;
	unsigned X = position;
	unsigned R = x_svg_size/5;
	Rect r1("brown", position, 2, R*2/3, 2*R);
	r1.create();

	Circle c0("green", position, y_svg_size+R, R);
	c0.create();

//	Circle c1("green", position, )

}

} /* namespace svg */
