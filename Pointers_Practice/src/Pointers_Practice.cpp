//============================================================================
// Name        : Pointers_Practice.cpp
// Author      : Neeraj Bahl
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	// At T1
	int a = 1;
	int b = 2;
	int c = 3;
	int *p;
	int *q;
	cout << "At T1 -------->\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";

	// At T2
	p = &a;
	q = &b;

	// At T3

	c = *p;
	p = q;
	*p = 13;
		cout << "At T3 -------->\n";
		cout << "a = " << a << "\n";
		cout << "b = " << b << "\n";
		cout << "c = " << c << "\n";

}
