#include<iostream>
using namespace std;

class A
{
    private :
    int x;

    public:
    void print()
    {
        //x = x;
        cout<<"Base print"<<endl;
    }
    

    A()
    {
        x = 6;
        cout<<"constructor base"<<endl;
    }


    virtual ~A()
    {
        cout<<"destructor base"<<endl;
    }
};

class base : public A
{
    public:
    // void print()
    // {
    //     cout<<"Derived print"<<endl;
    // }
    base()
    {
        cout<<"constructor derived"<<endl;
    }

    ~base()
    {
        cout<<"destructor derived"<<endl;
    }
    
};

int main()
{
    A *ptr = new base;
    ptr->print();

    delete(ptr);
    // base *ftr = new base;
    // ftr->print();
    
    return 0;
}