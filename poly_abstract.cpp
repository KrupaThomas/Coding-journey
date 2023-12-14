#include<iostream>
using namespace std;

class base
{
    public:
    virtual void give() = 0;//pure virtual function
    //creating an abstract class in order to never generate object of base class
};

class child1:public base
{
    public:
    void give() override
    {
        cout<<"Pink bun"<<endl;
    }
};

class child2:public base
{
    public:
    void give() override
    {
        cout<<"Brown bun"<<endl;
    }
};

int main()
{
    child1 dough;
    child2 nut;
    base *ptr;

    nut.give();
    ptr = &dough;
    ptr->give();

    ptr = &nut;
    ptr->give();

    return 0;
}