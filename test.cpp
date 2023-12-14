#include<iostream>
using namespace std;


class Box
{
	private:
	int length;
	int height;
	int breadth;
    mutable int count;

	
	public:

    virtual void fun1()
    {
        cout<<"fun1 base"<<endl;
    }
    void fun2()
    {
        cout<<"fun2 base"<<endl;
    }

};

 class custombox : public Box
{
    int customlength;
    public:
    void fun1() override
    {
        cout<<"fun1 derived"<<endl;
    }
    void fun2()
    {
        cout<<"fun2 derived"<<endl;
    }


};

int main()
{
	custombox box1;
    //Box *bptr = new custombox;
    Box *bptr = new Box;
    bptr->fun1();


	return 0;
}