#include<iostream>
using namespace std;

class A
{
private:
    int weight;

public:
    
    A(int x = 0)
    {
        weight = x;
    }
    
    int operator ++()
    {
       return ++weight;
    
    }
    int operator ++ (int)
    {
        return weight++;
    }

    int operator --()
    {
       return --weight;
    
    }
    int operator -- (int)
    {
        return weight--;
    }

    void print()
    {
        cout<<"The weight is "<<weight<<endl;
    }
    
};

int main()
{
    A obj(24);
    ++obj;
    obj.print();
    obj++;
    obj.print();
    --obj;
    obj.print();
    obj--;
    obj.print();
}