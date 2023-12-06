#include<iostream>

using namespace std;

class parent
{
    public :
        parent()
        {
            cout<<"Default base class";
        }

        parent(int x)
        {
            cout<<"parameterised base class";
        }
};

class child: public parent
{

};

int main()
{
    child mon;
    //child mon(9);
    
    return 0;

}