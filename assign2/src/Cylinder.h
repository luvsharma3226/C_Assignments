/*
 * Cylinder.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef CYLINDER_H_
#define CYLINDER_H_

class Cylinder {
	double radius, height, volume;
public:
	Cylinder();
	//~Cylinder();
	Cylinder(double radius, double height);
	void getVolume();
	void printVolume();
};

#endif /* CYLINDER_H_ */
