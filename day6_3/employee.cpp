/*
 * employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
using namespace std;
#include "employee.h"

	employee::employee()
	{
		this->id = 0;
		this->sal = 0.0f;
	}
	employee::employee(int id, float sal)
	{
		this->id = id;
		this->sal = sal;
	}
	void employee::accept()
	{
		cout << "id: ";
		cin >> this->id;
		cout << "sal: ";
		cin >> this->sal;
	}
	void employee::display()
	{
		cout << "id: " << this->id << endl;
		cout << "sal: " << this->sal << endl;
	}
	int employee::get_id()
	{
		return this->id;
	}
	void employee::set_id(int id)
	{
		this->id = id;
	}
	float employee::get_sal()
	{
		return this->sal;
	}
	void employee::set_sal(float sal)
	{
		this->sal = sal;
	}
	employee::~employee()
	{
		cout << "~employee() called "<< endl;
	}
