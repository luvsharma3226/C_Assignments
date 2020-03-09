
#include <iostream>
using namespace std;

class Employee
{
private:
	int id;
	int salary;
public:
	Employee() //parameterless constructor/ default constructor
	{
		this->id=10;
		this->salary=50000;
	}

	Employee(int id , int salary) // paramaterized constructor (two parameters)
		{
			this->id=id;
			this->salary=salary;
		}

	void disp();
};
void Employee :: disp()
{
	cout<<"\n  ID : "<<this->id;
	cout<<" \n Salary : "<<this->salary;
}

int main()
{
	Employee emp[3];//creating an array of objects of class Employee
	//classname objectname[size];

	for(int i=0; i<3;i++)
	{
		//emp[i].get_data();
		emp[i].disp();

	}

	return 0;
}

/*


class Test
{
private:
	int num;
public:
	Test();
	Test(int num);
	void disp();

};

void Test::disp()
{
	cout<<"\n";
	cout<< this->num;
}

Test ::Test()
{
	cout << "\nInside Parameterless constructor:";
	this->num = 21;
	cout<<this->num;

}
 Test::Test(int num)
{
	cout << "\nInside parameterized constructor";
	this->num = num;
	cout<<this->num;
}

int main()
{
	Test t;
	Test t1(23);
	t1.disp();
	t.disp();
	return 0;

}
*/

/*
class Employee
{
private:
	int id;
	int salary;
public:
	Employee() //parameterless constructor/ default constructor
	{
		this->id=10;
		this->salary=50000;
	}

	Employee(int id) // paramaterized constructor (one parameter)
	{
		this->id=id;
	}
	Employee(int id , int salary) // paramaterized constructor (two parameters)
		{
			this->id=id;
			this->salary=salary;
		}

	void disp();
};
void Employee :: disp()
{
	cout<<"\n  ID : "<<this->id;
	cout<<" \n Salary : "<<this->salary;
}

int main()
{
	Employee emp1;//created an object of class Employee
	emp1.disp();
	Employee emp2(2);
	emp2.disp();
	Employee emp3(3,50000);
	emp3.disp();
	Employee emp4(4,60000);
	emp4.disp();
	return 0;
}

*/


/*
class Employee
{
private:
	int id;
	int salary;
public:
	void get_data(int id,int salary);
	void disp();
};

void Employee::get_data(int id,int salary)
{
	this->id = id;
	this->salary = salary;
}
void Employee :: disp()
{
	cout<< "Id : " << this->id;
	cout<< "Salary : " << this->salary;
}
int main()
{
	Employee e;
	e.get_data(2,3433);
	e.disp();

}*/

/*
namespace na
{
class Test
{
public:
	void print(){
		cout << "\n Inside Class test print";
	}
};
}
using namespace na;
int main()
{
	Test t;
	t.print();
	return 0;
}
*/



/*
namespace na
{
	int val1=300;
}

int main()
{
	//int val1=20;
	//cout<<"\n Val1 : "<<val1;

	// first way to access namespace variables is by using scope resolution operator
	//cout<<"\n Val 1 "<<na::val1;

	// 2nd way is by using namespace directive
	using namespace na;
	cout<<"\n Val1 : "<<val1;

	return 0;
}*/







/*
int num = 10; // global variable.

namespace na
{
	int num = 20;
}

namespace nb
{
	int num = 30;
}

namespace na
{
	namespace nb
		{
			int num = 40;
		}
}


int main()
{
	int num = 2; //local var
	cout <<"\nLocal Variable"<< num;
	cout <<"\nGloabal Variable"<< ::num;
	cout <<"\nNA Variable"<< na::num;
	cout <<"\nNB Variable"<< nb::num;
	cout <<"\nNA>NB Variable"<< na::nb::num;
	return 0;
}

*/


/*
void swap_by_val(int a, int b);
void swap_by_add(int &a, int &b);
void swap_by_ref(int *a, int *b);

void swap_by_val(int a, int b)
{
	int temp = a;
	a=b;
	b=temp;
}
void swap_by_ref(int *a, int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;

}
void swap_by_add(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}

int main()
{
	int x = 10, y = 20;
	cout<<"\n Swap_by_val Before : "<<x<<"   "<<y << &x << "  "<< &y;
	swap_by_val(x,y);
	cout<<"\n Swap_by_val After : "<<x<<"   "<<y<< &x << "  "<< &y;

	cout<<"\n Swap_by_ref Before : "<<x<<"   "<<y<< &x << "  "<< &y;
	swap_by_ref(&x,&y);
	cout<<"\n Swap_by_ref After : "<<x<<"   "<<y<< &x << "  "<< &y;

	cout<<"\n Swap_by_add Before : "<<x<<"   "<<y<< &x << "  "<< &y;
	swap_by_add(x,y);
	cout<<"\n Swap_by_add After : "<<x<<"   "<<y<< &x << "  "<< &y;

	return 0;
}

*/








/*class Students
{
private :
	int id;
	int marks;
public:
	void accept(int id, int marks);
	void disp();
};

void Students ::accept(int id, int marks)
{
	cout << "ENter ID :";
	cin >> this->id;
	cout << "Enter Marks :";
	cin >> this->marks;
}
void Students::disp()
{
	cout << this->id;
	cout << this->marks;
}

int main()
{
	Students s1;
	s1.accept(2,39);
	s1.disp();
}*/
/*void test_global()
{
	cout << "INSIDE TEST GLOBAL";
}

int main()
{
	::test_global();
	return 0;
}*/


/*

class Complex
{
private:
	int x;
	int y;
public:
	void accept_data();
	void display();
};

void Complex ::accept_data()
{
	cout<< "Enter value X :\n";
	cin >> x;
	cout<< "Enter value Y :\n";
	cin >> y;
}

void Complex:: display()
{
	cout<< "X :"<< this->x;;
	cout<< "Y :" << this->y;
}


int main()
{
	Complex c1;
	c1.accept_data();
	c1.display();
	return 0;
}
*/
