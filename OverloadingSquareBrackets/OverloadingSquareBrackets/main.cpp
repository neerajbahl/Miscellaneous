//
//  main.cpp
//  OverloadingSquareBrackets
//
//  Created by Neeraj Bahl on 11/7/16.
//  Copyright © 2016 edu.asu.msse.nbahl. All rights reserved.
//
// A simple code to demonstrate the overloading of the square brackets.

# include <iostream>
using namespace std;

// simple test class to demonstrate the overloading of [] brackets
// private data members: int size variable and an int pointer to the array
class TestSquareBrackets {
private:
    // declaring the size of the array as constant value of 10 for simplicity
    int size = 10;
    int intArray[10];
public:
    TestSquareBrackets ();
    int getsize();
    int operator[](int);
};


// hard coding the values during initialization in the default constructor for simplicity
TestSquareBrackets::TestSquareBrackets ()
{
    size = 3;
    intArray[0] = 99;
    intArray[1] = 199;
    intArray[2] = 299;
}

// to get the private data member size
int TestSquareBrackets::getsize()
{
    return size;
}

// overloaded the [] operator for returning the members of the array based on the index
int TestSquareBrackets::operator [](int index) {
    if (index > size)
    {
        cout << "Illegal index";
        return 0;
    }
        else {
            return intArray[index];
        }
}

int main ()
{
    TestSquareBrackets bracketObject;
    cout << "Printing the members of the array using the overloaded [] operator based on the index" << endl;
    for (int i = 0; i < bracketObject.getsize(); i ++)
    {
            cout << bracketObject[i] << endl;
    }
    return 0;
}

