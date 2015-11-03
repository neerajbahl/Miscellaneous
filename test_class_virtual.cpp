//Virtual Testing Miscellaneous

#include<iostream>
#include<string.h>

using namespace std;

class Base
{
	protected:
		int num;
	public:
		Base ()
		{
			num = 0;
		}
		Base (int num)
		{
			num = num;
		}
		void base_setnum(int x){
			num = x;
		}
		int base_getnum (){
			return num;
		}
		virtual void print_number() // Here is the virtual keyword
		{
			cout << "\n The number in the base class is: " << base_getnum();
		}	
};

class Derived: public Base
{
	private:
		int num;
	public:
		Derived (int num): Base (num){
		num = num;
		};
		void print_number()
		{	
			cout << "\n The number in the derived class is: " << base_getnum();
		}	
};



int main()
{
	Base* object_base[2];	
	
	object_base[0] = new Base(20);
	object_base[0]->base_setnum(20);
	
	object_base[1] = new Derived(20);
	object_base[1]->base_setnum(20);
	
	//Printing using the base class
	cout << "\n Printing using the base class";
	object_base[0]->print_number();
	
	//Printing using the derived class
	cout << "\n Printing using the derived class";
	object_base[1]->print_number();
	
	return 0;
}

