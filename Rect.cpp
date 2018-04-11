/*
 * Rect.cpp
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#include "Rect.h"
#include<string>

namespace svg {


Rect::Rect() {
//	std::cout << "rect constructor\n";
	color = "none";
	x = 0;
	y = 0;
	width = 0;
	height = 0;
}
Rect::Rect(std::string cl, unsigned r_x, unsigned r_y, unsigned r_width, unsigned r_height){
//	std::cout << "\t rect constructor\n";
	color = cl;
	x = r_x;
	y = r_y;
	width = r_width;
	height = r_height;
}

Rect::~Rect(){
//	std::cout<< "rect destructor\n";
}

void Rect::create(){
	using namespace std;
	buffer.push_back("<rect ");
	buffer.push_back("x=\"" + to_string(x) + "\" ");
	buffer.push_back("y=\"" + to_string(y) + "\" ");
	buffer.push_back("width=\"" + to_string(width) + "\" ");
	buffer.push_back("height=\"" + to_string(height) + "\" ");
	buffer.push_back("fill=\"" + color + "\" " + ">\n");
}
//<animate attributeName="x" from=1000 to=0 dur=5 begin=0 repeatCount="indefinite"/>
void Rect::add_animation(std::string attributeName, unsigned from, unsigned to, unsigned dur, float begin){
	using namespace std;
	buffer.push_back("<animate ");
	buffer.push_back("attributeName=\"" + attributeName + "\"");
	buffer.push_back("from=" + to_string(from) + ' ');
	buffer.push_back("to=" + to_string(to) + ' ');
	buffer.push_back("dur=" + to_string(dur) + ' ');
	buffer.push_back("begin=" + to_string(begin) + ' ');
	buffer.push_back("repeatCount= \"indefinite\" />\n");
}

bool Rect::color_check(std::string cl){
	if(!(cl=="red" || cl=="green" || cl=="blue" || cl=="black" || cl=="grey" || cl=="pink" || cl=="purple" || cl=="orange" || cl=="yellow"))
	{
		std::cout << "invalid color\n";
		return 1;
	} else
		return 0;
}


} /* namespace svg */
