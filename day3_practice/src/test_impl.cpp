/*
 * test_impl.cpp
 *
 *  Created on: 06-Mar-2020
 *      Author: sunbeam
 */
#include<iostream>
#include "test.h"
using namespace std;

Employee::Employee()
{
	this->id = 10;
	salary=20000;
}

Employee::Employee(int id , int salary)
{
	this->id = id;
	this->salary = salary;
}

void Employee::display()
{
	cout << "\nID : "<< id;
	cout << "\nSalary : "<< salary;
}

