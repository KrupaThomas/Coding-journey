#include<iostream>
using namespace std;

class base
{
    public :
    virtual ~base()
    {
        cout<<"Base destroyed"<<endl;
    }
};

class child: public base
{
    public :
    ~child()
    {
        cout<<"child destroyed"<<endl;
    }
};

int main()
{
    base *ptr = new child;
    delete ptr;


    //base b1; when an object of base or child is instantiated it is destructed automatically.
    return 0;
}