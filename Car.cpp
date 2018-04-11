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
	if(this->color_check(cl) == 0)
		car_color = cl;
}

Car::~Car(){
//	std::cout << "car destructor\n";
}

void Car::create(){
	unsigned part_width = lenght;
	unsigned part_height = height;
	unsigned part_x = position;
	unsigned part_y = y_svg_size/2;

	Rect r1(car_color, part_x, part_y, part_width, part_height);
	r1.create();
	parts.rect_parts[body] = r1;

	part_width = part_width*2/5;
	part_height *= 0.5;
	part_x = part_x + lenght/5;
	part_y -= part_height;

	Rect r2(car_color, part_x, part_y, part_width, part_height);
	r2.create();
	parts.rect_parts[roof] = r2;

	part_x = part_x + part_width*1/5;
	part_y += part_height*1/5;
	part_width = part_width*3/4;
	part_height = part_height*7/10;

	Rect r3("blue", part_x, part_y, part_width, part_height);
	r3.create();
	parts.rect_parts[window] = r3;

	std::cout << lenght*7/50<<std::endl;
	Circle wheel1("black",  position + lenght *1/5,  y_svg_size*0.5 + height, lenght * 7/50);
	wheel1.create();
	parts.wheels[0] = wheel1;
	Circle wheel2("black",  position+ lenght *4/5,  y_svg_size*0.5 + height, lenght * 7/50);
	wheel2.create();
	parts.wheels[1] = wheel2;

}
void Car::write(){
	parts.rect_parts[body].write();
	parts.rect_parts[roof].write();
	parts.rect_parts[window].write();

	parts.wheels[0].write();
	parts.wheels[1].write();
}

void Car::display(){
	using namespace std;
	cout << "body:\t\n";
	parts.rect_parts[body].display();
	cout << "roof:\t\n";
	parts.rect_parts[roof].display();
	cout << "window:\t\n";
	parts.rect_parts[window].display();
	cout << "wheels:\n";
	parts.wheels[0].display();
	parts.wheels[1].display();
}

} /* namespace svg */
