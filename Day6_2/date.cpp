/*
 * date.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#include "date.h"
#include <iostream>
using namespace std;

	date::date()
	{
	cout << "date() called "<< endl;
	this->day = 1;
	this->month=1;
	this->year = 2001;
	}

	date::date(int day,int month,int year)
	{
		cout << "date(int,int,int) called\n";
		this->day = day;
		this->month=month;
		this->year = year;
	}
	int date::get_day()
	{
		return this->day;
	}

	int date::get_month()
	{
		return this->month;

	}
	int date::get_year()
	{
		return this->year;
	}

	void date::set_day(int day)
	{
		this->day = day;
	}
    void date::set_month(int month)
    {
    	this->month = month;
    }
	void date::set_year(int year)
	{
		this->year = year;
	}

	void date::accept()
	{
		cout << "\nEnter date : \n";
		cout << "\nDay :\n";
		cin >> this->day;
		cout << "\nMonth \n: ";
		cin >> this->month;
		cout << "\nYear : \n";
		cin >> this->year;

		cout<< "\nDate Accepted\n";

	}
	void date::display()
	{
		cout << this->day << "/" << this->month << "/" <<this->year << endl;

	}

	date::~date()
	{
		cout<<"~date() called"<<endl;
	}

