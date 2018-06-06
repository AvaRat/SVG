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
	Svg(std::string);	//!< Brief consytructor to initialize file stream for the output
	virtual ~Svg();
	void start();	//!< Brief generate beginning of HTML document
	virtual void write();	//!< Brief save buffer to file
	void end();		//!< Brief generate end of document
	virtual void display();	//!< Brief displays buffer
	static unsigned counter;

private:
	static std::ofstream file_stream;	//!< Brief static file stream so that every member of derived classes saves its buffer to one file

protected:
	std::vector<std::string> buffer;	//!< Brief buffer where generated HTML cod is stored before it will be saved to file
	static unsigned x_svg_size;	//!< Brief size of X coordinate of the SVG window
	static unsigned y_svg_size;	//!< Brief size of Y coordinate of the SVG window
};

} /* namespace svg */

#endif /* SVG_H_ */
