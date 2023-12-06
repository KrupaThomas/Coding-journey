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
    A addWeight(A w2)
    {
        A sum;
        sum.weight = weight + w2.weight;
        return sum;
    }

    A operator +(A w2)
    {
       A sum;
       sum.weight = weight + w2.weight;
       return sum;
    }

    void print()
    {
        cout<<"The weight is "<<weight<<endl;
    }
    
};



int main()
{
    A user1(28), user2(82), total;
    total = user1 + user2;
    total.print();
    total = user1.addWeight(user2);
    total.print();

    




    return 0;
}
