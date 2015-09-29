//============================================================================
// Name        : Fibonacci.cpp
// Author      : Neeraj Bahl
// Version     : v1.0
// Copyright   : 
// Description : Fibonacci Series
//============================================================================

# include <iostream>
using namespace std;

int main()
{
int i, x = 0, y = 1, n;

cout << "Enter the number of terms in Fibonacci series to be displayed: \t";
cin >> n;

if (n < 2 )
{
	cout << "\n Fibonacci series need to have at least 2 terms\n";
}
else
{
	cout <<'\n' << x << '\t' << y << '\t';

	for (i = 3; i <= n; i++)
		{
			int z = x + y;
			x = y;
			y = z;
			cout << z << '\t';
		}
}
return 0;
}
