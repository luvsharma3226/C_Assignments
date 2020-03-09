# MODULARITY IMPLEMNTATION.


* File <test.h>

```c++
#ifndef TEST_H_
#define TEST_H_

class Employee
{
private:
	int id,salary;
public:
	Employee();
	Employee(int id, int marks);
	void display();
};



#endif /* TEST_H_ */

```

* File test_impl.cpp

```c++
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

```
*Main File 
```c++
#include <iostream>
#include"test.h"
using namespace std;


int main() {
	Employee e;
	Employee e1(11, 50000);
	e.display();
	e1.display();
	return 0;
}
```
* Header Guards
	-If we want to expand contents of header file only once then we should use header guard.
	#ifndef HEADER_FILE_NAME_H_
	#define HEADER_FILE_NAME_H_
		//TODO : Type declaration here
	#endif

##Constructor Initializer List.

*It is used to initialize the members inside the class in a shorter way. Kinda shortcut.

** Constructor Member Initilization 
            ▪ If we want to initialize data members according to users requirement then we should use constructor body.
            ▪ Except array we can initialize any member inside constructors member initializer list.


```c++
#include <iostream>
using namespace std;

class Point
{
private:
	int x,y,z;
public:
	void display();

	Point(): x(10),y(20)// constructor member initialzer list
	{}
	Point(int n1,int n2):x(n1),y(n2)
	{}
	Point(int n1,int n2,int n3): x(n1),y(n2)//partial member initializer list
	{
		z=n3;
	}
};

void Point::display()
{
	cout << "\nX = " << x;
	cout << "\nY = " << y;
	cout << "\nZ = " << z;

}

int main() {

	Point p;
	Point p2(1,2,3);
	p.display();
	p2.display();
	return 0;
}

```

## Constant Data Member
 * Once initialized, if we dont want to modify state of the data member inside any member function of the  class including constructor body then we should declare data member constant.
* If we declare data member constant then it is mandatory to initialize it using constructors member initializer list.

*Constant member function

- We can not declare global function constant but we can declare member function constant.
- If we dont want to modify state of current object inside member function then we should declare member function constant.

We can not delclare following function constant:
1. Global Function
2. Static Member Function
3. Constructor
4. Destructor
Since main function is a global function, we can not delcare it constant.
We should declare read only function constant. e.g getter function, printRecord function etc.

*Mutable Keyword: 
In constant member function, if we want to modify state of non constant data member then we should use mutable keyword.

*Constant_Demo.cpp

```c++
#include <iostream>
using namespace std;

class Constant_demo
{
private:
	const int c=10;//declared and defined the const
public:
	Constant_demo()
	{}
	void print()
	{
		cout<<"Constant Value : "<<c;
		//c++; //error: increment of read-only member ‘Constant_demo::c’
	}
};

int main()
{
	Constant_demo cobj;
	cobj.print();
	return 0;
}

```



#Constant Member function.

* If we use any variable inside constant member function then it automatically becomes constant.
* If we want to change the value then we can use the keyword "mutable". 

```c++
#include <iostream>
using namespace std;

class Test
{
private:
	int x;
	const int c;
	mutable int m;
public:
	Test(): x(10),c(20), m(30)
	{}
	Test(int n1, int c1 ,int m1): x(n1),c(c1) , m(m1)
	{}
		void print() const;

};

void Test::print() const
{
	cout<<" \n Num "<<this->x;
	//num was initially non constant , but when we access it inside
	//constant member function it is converted to const
	//num++;//error: increment of member ‘Test::num’ in read-only object
	//cout<<"\n Num "<<this->num;
	cout<<"\n Constant Value "<<this->c;
	cout<<"\n Mutable Value "<<this->m;
	m++; //allowed because of its mutable in nature
	cout<<"\n After increament Mutable Value : "<<this->m;
}
int main()
{
	Test t(1,2,3);
	t.print();
	return 0;

}
```

*We should not retrun non static local variable from function by address.
```c++

int* getnumber()
{
	int number = 10;
	return &number;  //not OKAY... We cant return address from a function
}

int main(void)
{
	int *ptr = getnumber();
	cout << "Number : " << *ptr;
	return 0;
}

```
* Static keyword use.

*If we want to return local variable from function by address then we should use static keyword.
```c++

int* getNumber( void )
{
	static int number = 10;// static keyword gives the memory to the member for complete program.
	 	 	 	 	 	 	 //that's why we can return address here.
	return &number;
}

int main( void )
{
	int *ptr = ::getNumber();
	cout<<"Number : "<<*ptr<<endl;
	return 0;
}

```

* Dangling Reference
  
*We should not return local variable from function by reference.

```c++
    int& getNumber( void )
{
	int num1 = 10;
	return num1;

}
int main( void )
{
	int &num2 = ::getNumber();
	//num2 will become Dangling reference
	cout<<"Number : "<<num2<<endl;


	return 0;
}
```

*Execption Handling

Errors can be broadly categorized into two types. We will discuss them one by one.
    1. Compile Time Errors
    2. Run Time Errors

```Compile Time Errors```– Errors caught during compiled time is called Compile time errors. Compile time errors include library reference, syntax error or incorrect class import.
```Run Time Errors```- They are also known as exceptions. An exception caught during run time creates serious issues.

In C++, Error handling is done using three keywords:
	try, catch, throw
               

               In C++, Error handling is done using three keywords:
	try, catch, throw
           try block
The code which can throw any exception is kept inside(or enclosed in) a try block. Then, when the code will lead to any error, that error/exception will get caught inside the catch block
       try is keyword in C++.
       If we want to inspect exception then we should put statements inside try block/handler.
       try block must have at least one catch block/handler

catch block
catch block is intended to catch the error and handle the exception condition. We can have multiple catch blocks to handle different types of exception and perform different actions when the exceptions occur. 
    • If we want to handle exception then we should use catch block/handler.
    • Single try block may have multiple catch block.
    • Catch block can handle exception thrown from try block only.
    • A catch block, which can handle any type of exception is called generic catch block / catch-all handler.
           throw statement
It is used to throw exceptions to exception handler i.e. it is used to communicate information about error. A throw expression accepts one parameter and that parameter is passed to handler.
throw statement is used when we explicitly want an exception to occur, then we can use throw statement to throw or generate that exception.

If we give wrong input to the application then it generates runtime error/exception.
Exception is an object, which is used to send notification to the end user of the system if any exceptional situation occurs in the program.



* Example 1

```c++
int main()
{
	int num1, num2;
	cout << "Enter First number " << endl;
	cin >> num1;
	cout << "Enter Second number " << endl;
	cin >> num2;
try{
	if (num2 <= 0 )
	throw 1;
	else
	{
		int res  = num1/num2;
		cout << "Result = "<< res;
	}
}catch(int i)
{
	 cout << "You have entered the denominator as ZERO";
}
}
```


* Example 2.

```c++

double Division()
{
	double num1;
	int num2;
	cout << "Enter First number " << endl;
	cin >> num1;
	cout << "Enter Second number " << endl;
	cin >> num2;
	if (num2 <=0)
		throw 1.2;
	else
	{
		double t=num1/num2;
		return (num1/num2);
	}
}
int main()
{
	try{
	double x = Division();
	cout << x;
	}
	catch(double i)
	{
		cout << "Den =0 !!!";
	}
}
```


### Example 3.

```c++

int main()
{
	int num2;

	cout << "Enter THE number " << endl;
	cin >> num2;
	try
	{
		if(num2 >0)
		throw 1;
	else if(num2<0)
		throw "Negative Number";
	}

	catch(int i)
	{
		cout<<"Positive Number";
	}
	catch(const char* msg)
	{
		cout << msg;
	}

}
```
### Example 4.

```c++
	#include <iostream>
using namespace std;


int main()
{
	int a[10] = {1,2,3,4,5},i;
	i = 0;
try{
	while(1)
	{
		if(i!=7)
		{
			cout << a[i] << "\n";
			i++;
		}
		else
				throw i;
	}

	}
catch(int i)
	{
		cout << "Array Index Out of Bound" << endl<< i;
	}
}


```


### DAY 04

    • Exception Specification List
    • Exception Handling ( class as a Exception/user defined exception)
    • Inspector function
    • Mutator function
    • Facilitator function
    • Destructor
    • Dynamic Memory Management
    • Static Data Member
    • Static Member Function

## • Exception Specification List



