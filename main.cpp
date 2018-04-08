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

using namespace svg;



int main(void)
{
	Svg svg("plik1.txt");

	Car car1(center, small, "red");
	car1.start();
	car1.create();
	car1.end();

	/*
	Car car1(left, medium, "red");
	Car car2(right, medium, "red");
	Car car3(center, medium, "red");
	Car car4(center, small, "red");
	Car car5(center, big, "red");
//	Car car6(center, medium, "red");

	car1.write();
	car3.write();
	car2.write();
	car3.write();
	car4.write();
	car5.write();
*/





}



