//============================================================================
// Name        : Pointers_Practice2.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

void worth_add (int* ptr_ref)
	{
		*ptr_ref = *ptr_ref + 1;
//		cout << * ptr_ref << "\n";
	}

int main()
{
	int n;
	cout << "Enter the number of times you want to increase the worth: ";
	cin >> n;

	int ref_worth = 55;
	int* ptr_ref;
	ptr_ref = &ref_worth;

	for (int i = 1; i <= n; i++)
	{
		worth_add(ptr_ref);
	}
	cout << * ptr_ref << "\n";
	return 0;
}
