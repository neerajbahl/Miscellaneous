#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	int *p = new int;
	p = 0;
	cout <<p;
	cout << "\n";
	cout <<&*p;
	return 0;
}


