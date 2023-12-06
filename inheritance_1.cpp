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

        void area()
        {
            cout<<"Area of cuboid is : "<<2*((length*breadth)+ (length*height)+(breadth*height))<<endl;
        }

        void volume()
        {
            cout<<"Volume of cuboid is : "<<length*breadth*height<<endl;
        }

};

int main()
{
    cuboid ace;
    ace.length = 10, ace.breadth = 20 , ace.height = 30;

    ace.show();
    ace.display();

    ace.area();
    ace.volume();


    return 0;
}