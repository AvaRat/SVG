/*
 * Circle.cpp
 *
 *  Created on: 9 kwi 2018
 *      Author: marcel
 */

#include "Circle.h"
#include<string>

namespace svg {
Circle::Circle(){
//	std::cout << "circle constructor\n";
	color = "none";
	cx = 0;
	cy = 0;
	radius = 0;

}

Circle::Circle(std::string cl, unsigned x, unsigned y, unsigned r) {
//	std::cout << "\tcircle constructor\n";

	color = cl;
	cx = x;
	cy = y;
	radius = r;
}

Circle::~Circle() {
//	std::cout << "circle destructor\n";
	// TODO Auto-generated destructor stub
}
void Circle::create(){
	using namespace std;
	buffer.push_back("<circle ");
	buffer.push_back("cx=" + to_string(cx));
	buffer.push_back(" cy=" + to_string(cy));
	buffer.push_back(" r=" + to_string(radius));
	buffer.push_back(" fill=\"" + color + "\" >");
}

} /* namespace svg */
