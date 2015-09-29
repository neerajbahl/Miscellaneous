//============================================================================
// Name        : Prime.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int prime (int i);

int main()
{
	int m, m2, flag, i, j;

	cout << "\n Enter the value of m: \n";
	cin >> m;

    for (i = (m-1); i >= 1; i--)
    {
    	flag = prime (i);
    	if (flag == 1)
    	{
    		m2 = i;
    		break;
    	}
    }

    cout << "\n Value of m: " << m;
    cout << "\n Value of m2: " << m2;

	return 0;
}


int prime (int i)
{
	int x;
	for (x = 2; x <= i - 1; x++)
	{
		if (i % x == 0)
		{
			return 0;
		}
	}

	if (x == i)
	{
		return 1;
	}
}
