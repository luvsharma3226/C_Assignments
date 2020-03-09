/*
 * manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
using namespace std;
#include "manager.h"
#include "employee.h"
	manager::manager(){
		this->bonus = 0.0f;
	}
	manager::manager(int id, float sal, float bonus):employee(id, sal)
	{
		this->bonus = bonus;
	}
	float manager::get_bonus()
	{
		return this->bonus;
	}
	void manager::set_bonus(float bonus)
	{
		this->bonus = bonus;
	}
	void manager::display(){
		employee::display();
		cout << "bonus: " << this->bonus << endl;
	}
	manager::~manager()
	{

	}

