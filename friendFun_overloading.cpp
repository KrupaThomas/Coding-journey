//overloading > and < using friend function

#include<iostream>
using namespace std;

class base
{

    private:
    int age;

    public:
    base(int x)
    {
        age = x;
    }

    friend bool operator <(base b1, base b2);
    friend bool operator >(base b1, base b2);
};

bool operator <(base b1, base b2)
{
    return b1.age<b2.age;
}
bool operator >(base b1, base b2)
{
    return b1.age>b2.age;
}

int main()
{
    base obj1(8), obj2(6);
    cout<<(obj1>obj2)<<endl;
    cout<<(obj1<obj2)<<endl;

    return 0;
}