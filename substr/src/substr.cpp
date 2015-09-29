//============================================================================
// Name        : substr.cpp
// Author      : Neeraj Bahl
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string str;
	str = "0-13-028446-7/A Practical Introduction to Algorithm Analysis/Prentice Hall";
	int position = str.find("/");
	cout << "Position of first / is: " << position << "\n";
	//int len = str.length();
	string str_isbn = str.substr (0, position);			// to get isbn
	cout << str_isbn << "\n";
	string str2 = str.substr (position + 1);

	// to get publisher and title
	int pos_title = str2.find("/");
	string str_title = str2.substr (0, pos_title);
	string str_publisher = str2.substr (pos_title + 1);
	cout << str_title << "\n";
	cout << str_publisher << "\n";

	// Substr the isbn to get the key
	int pos_lenhyph1 = str_isbn.find("-");
	string str_key1 = str_isbn.substr(pos_lenhyph1 + 1);
	cout << str_key1 << "\n";

	int pos_lenhyph2 = str_key1.find("-");
	string str_key2 = str_key1.substr (pos_lenhyph2 + 1);
	cout << str_key2 << "\n";

	int pos_lenhyph3 = str_key2.find("-");
	if (pos_lenhyph3 > 0)
	{
		string str_key3 = str_key2.erase (pos_lenhyph3);
		cout << str_key3 << "\n";
	}
	else
	{
		string str_key3 = str_key2;
	}
	return 0;
}
