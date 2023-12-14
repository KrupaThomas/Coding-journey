#include<iostream>
using namespace std;

class Box
{
	private:
	static int length;
	static int height;
	static int breadth;

	public :
	void print()
	{
		cout<<"Length : "<<length<<endl;
		cout<<"Height : "<<height<<endl;
		cout<<"Breadth : "<<breadth<<endl;
	}

};

int main()
{
	Box b;

	cout<<"Call through object : "<<endl;
	b.print();

	//cout<<"Call through class : "<<endl;
	//b.print();

	return 0;
}