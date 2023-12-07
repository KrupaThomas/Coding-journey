#include<iostream>
using namespace std;

class base1
{
    public:
    void Msg()
    {
        cout<<"Show base1"<<endl;
    }

};

class base2
{
    public:
    void Msg()
    {
        cout<<"Show base2"<<endl;
    }

};

class child1: public base1,public base2
{
    

};

class child2 : virtual public base1
{

};

class child3 : virtual public base1
{

};

class grandchild : public child2 , public child3
{

};


int main()
{
    child1 obj;
    grandchild neice;
    obj.base1::Msg();
    obj.base2::Msg();
    neice.Msg();
    return 0;


}