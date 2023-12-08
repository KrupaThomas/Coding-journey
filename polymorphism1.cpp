#include<iostream>
using namespace std;

class base
{

    public:
    void setData()
    {
        cout<<"Hello"<<endl;
    }

    void print()
    {
        cout<<"World"<<endl;
    }

};

class child: public base
{
   public:
   void new_feature()
   {
    cout<<"Hello World"<<endl;
   }

};

int main()
{
    child object;//child class object created
    base *ptr;//base class pointer to point to a child class object
    //this is valid but the base class pointer cannot access the functions inside child class

    ptr = &object;//you can assign by using & or dynamically
    //ptr->new_feature; as base class pointer cannot access child class

    return 0;
}