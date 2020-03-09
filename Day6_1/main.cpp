
#include <iostream>
using namespace std;
#include "fun.h"

int sum(int a, int b) {
	return a + b;
}

int sum(int a, int b, int c) {
	return a + b + c;
}

int main() {
	int r1, r2;
	r1 = sum(1, 2);
	cout << r1 << endl;
	r2 = sum(1, 2, 3);
	cout << r2 << endl;

	fun(11); // fun(11);
	return 0;
}
