#include<iostream>
using namespace std;

//create a parent class with a function name
class parent
{
    public:
        virtual void show()//using virtual helps us access the member function in
        {//child class using a base ptr.
            cout<<"Base"<<endl;
        }
};

//create two child class inheriting parent class; use same function name
class child1: public parent
{
    public:
        void show()
        {
            cout<<"Child1"<<endl;

        }
};

class child2: public parent
{
    public:
        void show()
        {
            cout<<"child2"<<endl;
        }
};



int main()
{
    //create objects of both class
    child1 dev1;
    child2 dev2;
    parent *ptr;

    ptr = &dev1;
    ptr->show();//w/o virtual this will access show functin in base

    ptr = &dev2;
    ptr->show();//w/o virtual this will access show functin in base

    //create a base pointer pointing to both child classes and then access function


    return 0;
}