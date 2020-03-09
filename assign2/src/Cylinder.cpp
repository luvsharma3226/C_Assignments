/*
 * Cylinder.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
using namespace std;
#include "Cylinder.h"

Cylinder::Cylinder() : radius(3),height(4),volume(0)
{}
Cylinder::Cylinder(double radius, double height):radius(this->radius),height(this->height),volume(0)
{}

void Cylinder::getVolume()
{
	this->volume = 3.14*this->radius*this->radius*this->height;
}

void Cylinder::printVolume()
{
cout << "The Volume of Cylinder is = " << this->volume;
}

//Cylinder::~Cylinder() {
	// TODO Auto-generated destructor stub


