//============================================================================
// Name        : SwapByRef.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	int x = 1;
	int y = 2;
	cout << "Before swap:\n";
	cout << x << "	" << y << "\n";
	swap (&x, &y);
	cout << "After swap:\n";
	cout << x << "	" << y << "\n";
	return 0;
}
