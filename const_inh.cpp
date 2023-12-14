#include<iostream>

using namespace std;

class parent
{
    public :
        parent()
        {
            cout<<"Default base class"<<endl;
        }

        parent(int x)
        {
            cout<<"parameterised base class"<<endl;
        }
};

class child: public parent
{

    public:
        child()
        {
            cout<<"Default child class"<<endl;
        }

        child(int c)
        {
            cout<<"parameterised child class"<<endl;
        }

        /*child():parent()
        {
            cout<<"Default child class"<<endl;
        }

        child(int c):parent(c)
        {
            cout<<"parameterised child class"<<endl;
        }*/
};

int main()
{
    child mon;
    child mons(9);
    //child mon(9);
    
    return 0;

}