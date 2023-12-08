#include<iostream>

using namespace std;

//create two objects of a class and create a static member variable and show how the memory is shared
//each object in a class has seperate memory but if there's a static variable in the class
//that will be common for all the objects in the class.
class animal
{
    private:
    int legs;

    public:
    animal(int c)
    {
        legs = c;
        stat++;
    }
    static int stat;

    static int getstat()
    {
        return stat;//can only access and perform functions on static variables
    }

};

int animal::stat = 0;//necessary to define the static variable outside the function as well


int main()
{
    animal cat(4);
    cout<<cat.stat<<endl;
    animal octopus(8);
    cout<<octopus.stat<<endl;
    //cout<<cat.stat<<endl;
    //cout<<octopus.stat<<endl;
    //cout<<animal::stat<<endl;

    cout<<cat.getstat()<<endl;
    cout<<animal::getstat()<<endl;
    

    return 0;
}