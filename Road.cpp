/*
 * Road.cpp
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#include "Road.h"

namespace svg {

Road::Road(std::string cl):Rect() {
	road_color = cl;
}

Road::~Road() {
	// TODO Auto-generated destructor stub
}
void Road::create(){
	Rect r1(road_color, 0, y_svg_size*2/5, x_svg_size, y_svg_size/3);
	r1.create();
	road = r1;
}
void Road::write(){
	road.write();
	for(unsigned i=0;  i<NUM_OF_LINES;  i++)
	{
		lines[i].write();
	}

}
void Road::display(){
	road.display();
	for(unsigned i=0;  i<NUM_OF_LINES;  i++)
	{
		lines[i].display();
	}
}

void Road::add_animation(){
	for(unsigned int i=0; i<NUM_OF_LINES;  i++)
	{
		Rect line("white", x_svg_size, y_svg_size*2/5 + y_svg_size*1/6, x_svg_size/20, y_svg_size/90);
		line.create();
		line.add_animation("x", 1000, 0, 5, i);
		lines[i] = line;
	}
}

} /* namespace svg */
