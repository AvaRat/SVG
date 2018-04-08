/*
 * Car.cpp
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#include "Car.h"
#include"Rect.h"

//#define CAR_HEIGHT
//#define CAR_WIDTH

namespace svg {

Car::Car(position_t pos, size_t car_size, std::string cl): Rect(){

	lenght = car_size;
	height = car_size*2/5;
	position = pos*(x_svg_size/10);

	if(!(cl=="red" || cl=="green" || cl=="blue" || cl=="black" || cl=="grey" || cl=="pink" || cl=="purple" || cl=="orange" || cl=="yellow"))
	{
		std::cout << "invalid color\n";
	}
	color = cl;

}

void Car::create(){
	unsigned part_width = lenght;
	unsigned part_height = height; //car_size*2/5
	unsigned part_x = position;
	unsigned part_y = y_svg_size/2;

//	std::cout << lenght<<std::endl;
//	std::cout << height <<std::endl;
	Rect r1(part_x, part_y, part_width, part_height);
	r1.write();

	part_width = part_width*2/5;
	part_height *= 0.5;
	part_x = part_x + lenght/5;
	part_y -= part_height;

	Rect r2(part_x, part_y, part_width, part_height);
	r2.write();

	part_x = part_x + part_width*1/5;
	part_y += part_height*1/5;
	part_width = part_width*3/4;
	part_height = part_height*7/10;

	Rect r3(part_x, part_y, part_width, part_height);

	r3.write();

//	Rect r3(pa)
}





} /* namespace svg */
