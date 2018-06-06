/*
 * main.cpp
 *
 *  Created on: 8 kwi 2018
 *      Author: marcel
 */

#include<iostream>
#include<fstream>
#include"Svg.h"
#include"Rect.h"
#include"Car.h"
#include"Road.h"
#include"Circle.h"

using namespace svg;

int main(void)
{
	Svg svg("plik1.html");
	svg.start();

	Road r1("grey");
	r1.add_animation();
	r1.create();
	r1.write();
	r1.display();

	Car c1(left, medium, "red");
	Car c2(center, medium, "green");
	Car c3(right, big, "yellow");
	c3.create();
	c3.write();
	c2.create();
	c2.write();
	c1.create();
	c1.write();

	c1.display();
	svg.end();
}
