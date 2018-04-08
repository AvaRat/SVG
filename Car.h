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

namespace svg {
enum position_t{left=0, center=4, right=7};
enum size_t{small=100, medium=200, big=300};
enum car_parts{body=0, roof, window};

class Car: public Rect {
public:
	Car(position_t, size_t, std::string);
	void create();
private:
	unsigned position;
	unsigned lenght;
	unsigned height;
	std::string color;
	struct ps{
		Rect *rect_parts[3];
		//circle_parts
	}parts;

};

} /* namespace svg */

#endif /* CAR_H_ */
