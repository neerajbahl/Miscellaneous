//============================================================================
// Name        : Classes.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// declare headers
#include <iostream>
using namespace std;

//class definition
class Rectangle
{
	int width, height;
public:
	//Constructor
	Rectangle(); //Default Constructor
	Rectangle (int, int);
	int area()
	{
		return (width*height);
	}
};

//Define default Constructor
Rectangle::Rectangle()
{
	width = 5;
	height = 6;
}

//Define Constructor
Rectangle::Rectangle(int x, int y)
{
	width = x;
	height = y;
}


int main ()
{
	Rectangle rect (3, 4);
	Rectangle * ptr_rect;
	ptr_rect = &rect;
	Rectangle rectb;
	cout << "\nArea of the rectangle rect is: " << ptr_rect -> area();
	cout << "\nArea of the rectangle rectb is: " << rectb.area();
	return 0;
}
