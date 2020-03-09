
#include<iostream>
using namespace std;
#include "date.h"
#include "person.h"

int main()
{
	date d1;
	date d2(1,1,1990);

	d1.display();
	d2.display();
	person p;

	return 0;
}
