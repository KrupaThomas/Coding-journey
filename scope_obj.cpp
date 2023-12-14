//to learn about the scope of the object inside a block

#include<iostream>
using namespace std;

class shape
{
    public :
    int sides;

    shape()
    {
        cout<<"shape created"<<endl;
    }

    ~shape()
    {
        cout<<"shape destroyed"<<endl;
    }
};

int main()
{
    //shape circle;//here object has lifetime till the end of main function so destructor called at end of main function scope
    
    // cout<<"main scope start"<<endl;
    // if(true)
    // {
    //     shape square;
    //     square.sides = 4;
    //     cout<<square.sides<<endl;//this object only has scope inside if so it gets destroyed
    //     //with the closure of if block
    // }
    // cout<<"main scope to be ended"<<endl;


//-------------------------------------------static object example -------------------------

    if(true)
    {
        static shape rectangle;
        rectangle.sides = 4;
    }
    cout<<"End of main"<<endl;
    return 0;
}