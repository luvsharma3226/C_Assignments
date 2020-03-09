##Ques1.
```C++
#include <stdio.h>
#include <stdlib.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}DATE;

int menu_list()
{
	int choice;
	printf("Enter your choice:\n");
	printf("1. InitDate()\n");
	printf("2.PrintDateOnConsole()\n");
	printf("3. AcceptDateFromConsole()\n");
	scanf("%d", &choice);
	return choice;
}

void InitDate(struct Date* ptDate)
{
	ptDate->day = 9;
	ptDate->month = 6;
	ptDate->year = 1995;
}

void PrintDateOnConsole(struct Date* ptDate)
{
	printf("Day : %d", ptDate->day);
	printf("Month : %d", ptDate->month);
	printf("Year : %d", ptDate->year);
}

void AcceptDateFromConsole(struct Date* ptDate)
{
	printf("Enter the day:");
	scanf("%d",&ptDate->day);
	printf("Enter the month:");
	scanf("%d",&ptDate->month);
	printf("Enter the year:");
	scanf("%d",&ptDate->year);
}

int main(void) {
	int choice;
	DATE d1;
	while(choice = menu_list())
	{
		switch(choice){
		case 1:
			InitDate(&d1);
			break;
		case 2:
			PrintDateOnConsole(&d1);
			break;
		case 3:
			AcceptDateFromConsole(&d1);
		default:
			printf("ENTER THE RIGHT CHOICE !!!");

	}
	}
	return EXIT_SUCCESS;
}
```
##Ques2.
```C++
/*Write a menu driven program for Date in a C++ language.
Declare a structure Date having data members day, month, year. Implement the
following member functions.
void InitDate();
void PrintDateOnConsole();
void AcceptDateFromConsole();
bool IsLeapYear();*/

#include <iostream>
using namespace std;

typedef struct Date
{
	int day;
	int month;
	int year;
} DATE;

int menu_list()
{
	int choice;
	cout << "Enter the choice : \n";
	cout << "1. InitDate().\n ";
	cout << "2. PrintDateOnConsole().\n";
	cout << "3. AcceptDateFromConsole().\n";
	cout << "4. IsLeapYear().\n\n";
	cin >> choice;
	return choice;
}
DATE d1;

void InitDate()
{

	d1.day = 21;
	d1.month = 11;
	d1.year = 2005;
}
 void PrintDateOnConsole()
{
	cout<< "day : " << d1.day;
	cout << "\tMonth :" << d1.month;
	cout << "\tYear :" << d1.year;
}
void AcceptDateFromConsole()
{
	cout << "Enter day : \n" ;
	cin >> d1.day;
	cout << "Enter month : \n";
	cin >> d1.month;
	cout <<"Enter year : \n";
	cin >> d1.year;
}
void IsLeapYear()
{
	if(d1.year %4 ==0)
	cout << "\nLeap Year\n";
	else
	cout << "\nNot Leap Year\n";
}
int main() {
	//DATE d1;
	int choice;
	while(choice = menu_list() )
	{
		switch(choice){

		case 1:
			InitDate();
			break;
		case 2 :
			PrintDateOnConsole();
			break;
		case 3 :
			AcceptDateFromConsole();
			break;
		case 4 :
			IsLeapYear();
			break;
		default :
			cout << "\nGive correct input!!!\n";
			break;
		}
	}
	return 0;
}
```
##Ques3.
*Write a menu driven program for Date in a C++ language.
Declare a class Date having data members day, month, year. Implement the following
member functions.
Date();
Date(int day, int month, int year);
void PrintDateOnConsole();
void AcceptDateFromConsole();
bool IsLeapYear();*/
```c++
#include <iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date()
		{
			this->day = 21;
			this->month = 12;
			this->year = 2020;
		}
	Date(int day, int month, int year)
		{
			this->day = day;
			this->month = month;
			this->year = year;

		}


	void PrintDateOnConsole();
		void AcceptDateFromConsole();
		bool IsLeapYear();



};



		int menu_list()
		{	int choice;
			cout<< "Enter the choice : ";
			cout<<"\n 1. Date();";
			cout<< "\n2. Date(int day, int month, int year);";
			cout<< "\n3. void PrintDateOnConsole();";
			cout<< "\n4. void AcceptDateFromConsole();";
			cout<< "\n5. bool IsLeapYear();\n";
			cin>> choice;

			return choice;

		}
void Date::PrintDateOnConsole()
{
	cout<< "\nDAY : "<<this->day;
	cout<< "\nMONTH : "<<this->month;
	cout<< "\nYEAR : "<<this->year<<"\n";
}
void  Date::AcceptDateFromConsole()
{
	cout << "Enter day :\n";
	cin >> this->day;
	cout << "Enter month n";
	cin >> this->month;
	cout << "Enter day :\n";
	cin >> this->year;
}
bool Date ::IsLeapYear()
{

	if(this->year %4 ==0)
		{
			return true;
			cout << "LEAP\n";
		}
		else
		{
			cout << "NOT LEAP\n";
			return false;
		}
}


int main()
{
	int choice;
	Date d;
	Date(12,1,2019) ;
	while((choice = menu_list())!= 0)
	{
		switch(choice)
		{
		case 1:
			Date();
			break;
		case 2:
			Date(12,12,2020);
			break;
		case 3:
			d.PrintDateOnConsole();
			break;
		case 4:
			d.AcceptDateFromConsole();
			break;
		case 5:
			d.IsLeapYear();
			break;
		default:
			break;

		}

	}

	return 0;
}
```

##Ques 4.
```c++
/*
Write a menu driven program to calculate volume of the box.Provide neceesary
constructors.*/

#include <iostream>
using namespace std;

class Volume{
private:
	int length,breadth,height;
public:
	//Volume();
	//Volume(int length,int breadth,int height);
	void accept_data();
	void Cal_Vol();
	float volume = length*breadth*height;
	Volume()
	{
		this->length = 10;
		this->breadth = 10;
		this->height = 10;

	}
	Volume(int length,int breadth,int height)
	{
		this->length = length;
		this->breadth = breadth;
		this->height = height;
	}
};


void Volume::accept_data()
{
	cout <<"Enter length : ";
	cin >> length;
	cout <<"Enter breadth : ";
	cin >> breadth;
	cout <<"Enter height : ";
	cin >> height;
}

void Volume::Cal_Vol()
{
	float res = length*breadth*height;
	cout << " \nVOLUME = " <<res;
}

int menulist()
{
	int choice;
	cout << "\n 1. void accept_data()";
	cout << "\n 2. void Cal_Vol()";
	cin >> choice;
	return choice;
}

int main()
{
	Volume V;
	Volume V1(10,20,30);
	int choice;
	while((choice = menulist())!=0)
		{
			switch(choice)
			{
			case 0:
				break;
			case 1 :
				V.accept_data();
				continue;
			case 2:
				V.Cal_Vol();
				continue;
			default:
				break;
			}
		}
}
```

```c++


#include<iostream>
using namespace std;

class tollBooth
{
private:
	unsigned int cars;
	double amount;
public:
	tollBooth()
		{
			this->cars = 0;
			this->amount = 0;
		}
		void payingCar();
		void nopayCar();
		void PrintOnConsole();
};

void tollBooth::payingCar()
{
	this->cars++;
	this->amount = this->amount+0.50;
}
void tollBooth:: nopayCar()
{
	this->cars++;
}
void tollBooth:: PrintOnConsole()
{
	int npcars;
	npcars = this->cars - (amount*2);
	cout << "\n no. of non paying cars : " << npcars;
	int pcars = this->cars-npcars;
	cout << "\n No. of Paying cars " << pcars ;
	cout << "\n Total Cars : "<< this->cars;
	cout << "\n Total Amount : " << this->amount;
}

int menu_list()
{
	int choice;
	cout << "\n 0. Exit ";
	cout << "\n 1. void payingCar()";
	cout << "\n 2. nopayCar()";
	cout << "\n 3. PrintOnConsole()";
	cin >> choice;
	return choice;
}

int main()
{
	tollBooth t1;
	int choice ;

	while((choice = menu_list()))
	{
		switch(choice)
		{
		case 1:
			t1.payingCar();
			break;
		case 2:
			t1.nopayCar();
			break;
		case 3:
			t1.PrintOnConsole();
			break;
		case 0:
			break;
		default:
			break;
		}
	}
	return 0;
}


```