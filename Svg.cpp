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
//	std::cout<<"svg constructor\n";
}
Svg::Svg(std::string file_name){
//	std::cout<< "\tsvg constructor\n";
	x_svg_size = SVG_SIZE;
	y_svg_size = SVG_SIZE*0.75;
	file_stream.open(file_name.c_str(), std::ios::out);
	if(!file_stream)
	{
		std::cout << "\t\t!!cannot open file!!" <<std::endl;
	}
//	std::cout << "creating file_stream\n";
}
Svg::~Svg(){
//	std::cout << "Svg destructor\n";
}


void Svg::start(){
	file_stream << "<!DOCTYPE html> \n"
					"<html> \n"
					"<body> \n"
					"<svg height=\"" << y_svg_size << "\" width=\" " << x_svg_size << "\">\n";
//	std::cout << "starting HTML template\n";

}
void Svg::write(){
	unsigned i = 0;
//	std::cout<< buffer[0];
	for(i=0;  i<buffer.size();  i++)
	{
		file_stream << buffer[i];
	}
	if(buffer[0] == "<rect ")
		file_stream << "</rect>\n";
	else if(buffer[0] == "<circle ")
		file_stream << "</circle>\n";
	else std::cout << "something went wrong\n";
//	std::cout << i << " string's saved to file\t";
//	std::cout << "one write call\n";
//	std::cout << "saving buffer to file \n";

}
void Svg::end(){
	file_stream << " </svg> \n"
					"</body>\n"
					"</html> \n";
	//std::cout << "closing file_stream \n";
}
void Svg::display(){
	using namespace std;

	for(unsigned i=0;  i<buffer.size();  i++)
	{
		cout << buffer[i];
	}
	cout <<endl;
}

} /* namespace svg */
