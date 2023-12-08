#include<iostream>

using namespace std;

class car
{

    private :
    int weight;
    
    public:
    void setData(int x)
    {
        weight = x;
    }

    int getData()
    {
        return weight;
    }

};

class BMW
{
    private :
    int topspeed;
    car *ptr;

    public :
    BMW(int weight = 0, int tspeed = 0)
    {
        ptr = new car;
        ptr->setData(10);
        topspeed = tspeed;

    }
    int getweight()
    {
        return ptr->getData();
    }

    int getspeed()
    {
        return topspeed;
    }

    ~BMW()
    {
        delete ptr;
    }


};

int main()
{
    BMW jaguar(150, 365);
    cout<<jaguar.getweight()<<endl;
    cout<<jaguar.getspeed()<<endl;


    return 0;
}