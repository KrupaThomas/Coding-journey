// C++ Program to demonstrate
// the Virtual Function
#include <iostream>
using namespace std;

// Declaring a Base class
class GFG_Base {

public:
	// virtual function
	virtual void display()
	{
		cout << "Called virtual Base Class function"
			<< "\n\n";
	}

	void print()
	{
		cout << "Called GFG_Base print function"
			<< "\n\n";
	}
};

// Declaring a Child Class
class GFG_Child : public GFG_Base {

public:
	void display()
	{
		cout << "Called GFG_Child Display Function"
			<< "\n\n";
	}

	void print()
	{
		cout << "Called GFG_Child print Function"
			<< "\n\n";
	}
};

// Driver code
int main()
{
	// Create a reference of class GFG_Base
	GFG_Base* base;

	GFG_Child child;

	base = &child;

	base->display(); //child display called as object that base pointer points to is child //virtual function
    child.display();//function overriding example

    base->print();//base print funtion as pointer of base and non virtual function
    child.print();//child orint called



}
