/*
 * Car.h
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#ifndef CAR_H_
#define CAR_H_

#include<string>
#include"Rect.h"
#include"Circle.h"


namespace svg {

//! enum for position of a car
/*! car can have only 3 positions */
enum position_t{left=0, center=4, right=7};

//! enum for a car size */
enum size_t{small=100, medium=200, big=300};

//! enum just to keep body parts in an array in the right order*/
enum car_parts{body=0, roof, window};

class Car: public Rect, public Circle{
public:
	Car(position_t, size_t, std::string);	//!< Brief car constructor.
	virtual ~Car();
	void display(); //!< Brief displays buffer of all car parts
	void create();	//!< Brief overloaded member which saves car HTML code to buffer
	void write();	//!< Brief overloaded member which saves code for the car to file
private:
	unsigned position;
	unsigned lenght;
	unsigned height;
	std::string car_color;
	struct ps{
		Rect rect_parts[3];	//!< Brief array to store rectangular parts
		Circle wheels[2];	//!< Brief array to store circle parts
	}parts;

};

} /* namespace svg */

#endif /* CAR_H_ */
