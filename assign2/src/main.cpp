//============================================================================
// Name        : day4_practice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Cylinder.h"

int menulist()
{
	int choice;
	cout <<"Enter your choice";
	cout << "\n 1. Get the Volume.";
	cout << "\n 2. Print the Volume.";
	cout << "\n 0. Exit.\n";
	return choice;

}
int main() {
	Cylinder C;
	int choice;

	while((choice = menulist())!=0)
	{
		switch(choice)
		{
		case 1 :
			C.getVolume();
			continue;
		case 2:
			C.printVolume();
			continue;
		case 0:
			break;
		}
	}

	return 0;
}
