/*
 * person.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */
#include <cstring>
#include <iostream>
using namespace std;
#include "person.h"


	person::person()
	{
		cout<<"person() called";
		strcpy(this->name,"");

	}
	person::person(const char *name , int birth_day, int birth_month, int birth_year)
	{
		cout<<"person(char, int,int,int) called";
		strcpy(this->name,"");
		birth.set_day(birth_day);
		birth.set_month(birth_month);
		birth.set_year(birth_year);
	}
	person::person(const char* name, date& birth)
	{
		cout << "person(char*,date) called" << endl;
		strcpy(this->name, name);
		this->birth = birth;
	}
	void person::display()
	{
		cout<< "name : "<<this->name<<endl;
		cout << "Birth Date : " ;
			this->birth.display();
	}
	void person::accept()
	{
		cout << "name: ";
		cin >> this->name;
		cout << "birth ";
		this->birth.accept();
	}
	const char* person::get_name()
	{
		return this->name;
	}
	date person::get_birth()
	{
		return this->birth;
	}

	void person::set_name(const char* name)
	{
		strcpy(this->name,name);
	}
	void person::set_birth(date& birth){
		this->birth = birth;
	}
	person::~person()
	{}


