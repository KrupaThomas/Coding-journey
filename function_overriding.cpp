
#include<iostream>
using namespace std;

class base
{
    public:
    void Msg()
    {
        cout<<"Base class"<<endl;
    }
};

class child : public base
{
    public:
    void Msg()
    {
        cout<<"Child class"<<endl;
        //base::Msg();
    }
    
};

int main()
{
    base c;
    child d;
    c.Msg();
    d.Msg();
   

    return 0;   

}