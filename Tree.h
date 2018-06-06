/*
 * Tree.h
 *
 *  Created on: 11 kwi 2018
 *      Author: marcel
 */

#ifndef TREE_H_
#define TREE_H_
#include"Rect.h"
#include"Circle.h"
#include<iostream>
#include"Svg.h"

#define NUM 8
enum position_t{far_left=100, left=300, center=500, right=700, far_right=900};

namespace svg {

class Tree: public Rect, public Circle{
public:
	Tree(position_t);	//!< Brief the only constructor of Tree class. Takes position_t enum as a localisation of a tree.
	virtual ~Tree();
	void create();	//!< Brief
	void write();
	void display();
	void add_animation();
private:
	unsigned position;
	struct p{
		Rect tree_base;
		Circle tree_top[NUM];
	};
};

} /* namespace svg */

#endif /* TREE_H_ */
