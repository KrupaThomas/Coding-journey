#include<iostream>

using namespace std;


class base1
{
    private:
    int age;

    public:
    base1(int x)
    {
        age = x;
    }

    friend void fun();
};

class base2
{
    private:
    int weight;

    public:
    base2(int y)
    {
        weight = y;
    }

    friend void fun();
};

void fun()
{
    int sum;
    base1 b1(8);
    base2 b2(50);
    sum = b1.age + b2.weight;
    cout<<sum<<endl;


}
int main()
{
    fun();
}