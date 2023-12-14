//static variables in function ; static variables in class - shared btw objects
//static members in a class

#include<iostream>
using namespace std;

//static variable in class implementation
class animal
{
    public : 
    static int nose;
    int legs;

    animal()
    {
        legs = 4;
        //nose = 1; we cannot initialise a static variable using a constructor
        //as its shared space between objects. -> cant create multiple copies
    }

    static void print()
    {
        //cout<<"legs : "<<legs<<endl;//cannot acccess a non static variable / function inside 
        //a static member function.
        cout<<"Nose : "<<nose<<endl;
    }
};

int animal::nose = 1;

int main()
{
    animal cat,dog;
    cat.nose = 6;
    dog.nose = 9;
    dog.nose = 10;
    cout<<"Cat nose : "<<cat.nose<<" "<<"Dog nose : "<<dog.nose<<endl; 
    cat.print();//can call the static member fn using object
    animal::print();//but preferred through class name


    return 0;
}