#include<iostream>
using namespace std;

class base
{
    protected: 
    int x = 5;

    void print()
    {
        cout<<x<<endl;
    }
};

class child: public base
{
    public: 
    void setdata()
    {
        x = 8;//when x is private in base class it cannot be accessed in child class
        //but if it is protected then we can use the variable in child class
    }


};

int main()
{
    return 0;
}