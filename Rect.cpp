/*
 * Rect.cpp
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#include "Rect.h"

namespace svg {

Rect::Rect() {
	std::cout<< "default Rect constructor\n";
}
Rect::Rect(unsigned x, unsigned y, unsigned width, unsigned height){
	using namespace std;
	cout << "adding rect to buffer\n";

	buffer.push_back("<rect x=\"" + to_string(x));
	buffer.push_back(" \" y=\"" + to_string(y));
	buffer.push_back(" \" width=\"" + to_string(width));
	buffer.push_back(" \" height=\"" + to_string(height) + "\"");
}



} /* namespace svg */
