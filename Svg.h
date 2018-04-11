/*
 * Svg.h
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#ifndef SVG_H_
#define SVG_H_

#include<vector>
#include<string>
#include<fstream>

#define SVG_SIZE 1000

namespace svg {

class Svg {
public:
	Svg();
	Svg(std::string);	//setting svg default size=1000*1000
	virtual ~Svg();
	void start();	//generate begining of document
	virtual void write();	//save buffer to file
	void end();		//generate end of document
	virtual void display();
	static unsigned counter;

private:
	static std::ofstream file_stream;

protected:
	std::vector<std::string> buffer;
	static unsigned x_svg_size;
	static unsigned y_svg_size;
};

} /* namespace svg */

#endif /* SVG_H_ */
