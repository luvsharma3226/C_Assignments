//============================================================================
// Name        : day3_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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





/*

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


*/





/*


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
}*/
/*int main()
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
}*/
/*

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
*/

/*

int* getnumber()
{
	int number = 10;
	return &number;  //not OKAY... We cant return address from a function
						//because when the function ends its scope is finished
						 * and memory is released.
}

int main(void)
{
	int *ptr = getnumber();
	cout << "Number : " << *ptr;
	return 0;
}
*/


/*
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
*/

















/*
class Test
{
private:
	int num; //non constant data member
	const int c; //constant data member
public:
	Test() : c(100), num(10)
		{
			// this->c=20; //not allowed
		}
	Test(int n1, int c1): num(n1),c(c1)
	{}
	void print() const; //constant member function
};


void Test::print() const
{
	cout<<" \n Num "<<this->num;
	//num was initially non constant , but when we access it inside
	//constant member function it is converted to const
	//num++;//error: increment of member ‘Test::num’ in read-only object
	//cout<<"\n Num "<<this->num;
	cout<<"\n Constant Value "<<this->c;

}


int main()
{
	Test t;
	t.print();
	Test t1(2,200);
	t1.print();
	return 0;
}
*/


/*
class Constant_Demo
{
private:
	const int x ;
public:
	Constant_Demo():x(100)
	{}
	void display();
};

void Constant_Demo::display()
{
	cout << "Constant Value =" << x;
}

int main()
{
	Constant_Demo c;
	c.display();
	return 0;
}
*/


/*
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
*/


/*

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
	Point(int n1,int n2,int n3): x(n1),y(n2)
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
*/
