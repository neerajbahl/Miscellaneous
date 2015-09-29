//============================================================================
// Name        : Pointer_Practice_1.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int num;
	int* numPtr;
	num = 42;
	numPtr = &num; // compute a reference to "num" and store it in numPtr
	cout << num << "\n";
	cout << "------\n";
	cout << numPtr;
	return 0;
}
