#include<iostream>
using namespace std;

class Alpha
{
    private :
    int age;

    public :
    Alpha(int x)
    {
        age = x;
    }
    friend class Beta;
};

class Beta
{
    private :
    int age;

    public:
    Beta(int y)
    {
        Alpha obj1(7);
        age = y;
        int sum = obj1.age+age;
        cout<<sum<<endl;

    }

};

int main()
{
    Beta obj2(10);


    return 0;
}