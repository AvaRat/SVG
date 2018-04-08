/*
 * Svg.cpp
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#include "Svg.h"
#include<iostream>

namespace svg {
std::ofstream Svg::file_stream;
unsigned Svg::x_svg_size;
unsigned Svg::y_svg_size;

Svg::Svg() {
	std::cout<<"default svg constructor\n";

}
Svg::Svg(std::string file_name){
	x_svg_size = SVG_SIZE;
	y_svg_size = SVG_SIZE;
	file_stream.open(file_name.c_str(), std::ios::out);
	if(!file_stream)
	{
		std::cout << "\t\t!!cannot open file!!" <<std::endl;
	}
	std::cout << "creating file_stream\n";
}


void Svg::start(){
	file_stream << "<!DOCTYPE html> \n"
					"<html> \n"
					"<body> \n"
					"<svg height=\"" << y_svg_size << "\" width=\" " << x_svg_size << "\">\n";
	std::cout << "starting HTML template\n";

}
void Svg::write(){
	for(unsigned i=0;  i<buffer.size();  i++)
	{
		file_stream << buffer[i];
	}
	file_stream << "/>\n";
	std::cout << "saving buffer to file \n";

}
void Svg::end(){
	file_stream << " </svg> \n"
					"</body>\n"
					"</html> \n";
	std::cout << "closing file_stream \n";
}

} /* namespace svg */
