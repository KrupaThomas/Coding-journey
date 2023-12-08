#include<iostream>
using namespace std;

class test
{
    private :
        int data;
    public :
        void setData(int x)
        {
            data = x;
        }

        int getData()
        {
            return data;
        }

};

int main()
{
    test *ptr = new test;
    ptr->setData(10);
    cout<<ptr->getData()<<endl;

    return 0;
}