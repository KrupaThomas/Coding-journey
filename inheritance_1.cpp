#include<iostream>
using namespace std;

class rectangle
{
    public:
        int length;
        int breadth;

        void show()
        {
            cout<<"Length : "<<length<<endl;
            cout<<"Breadth : "<<breadth<<endl;

        }

};

class cuboid: public rectangle
{
    public:
        int height;

        void display()
        {
            cout<<"Height : "<<height<<endl;
        }

};

int main()
{
    cuboid ace;
    ace.length = 10, ace.breadth = 20 , ace.height = 30;

    ace.show();
    ace.display();


    return 0;
}