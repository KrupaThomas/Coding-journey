#include<iostream>
#include<string>

using namespace std;

template<class T>
class sum
{
    private:
    T x;
    T y;

    public:
    sum(T c, T b)
    {
        x = c;
        y = b;
    }

    T add()
    {
        return x+y;
    }

};

int main()
{
    sum<int>obj1(6,4);
    sum<float>obj2(8.6,2.4);
    sum<string>obj3("Krupa", "Thomas");

    cout<<obj1.add()<<endl;
    cout<<obj2.add()<<endl;
    cout<<obj3.add()<<endl;

    return 0;
}