#include<iostream>

using namespace std;

class cat
{
    private :
    int x ;
    int y;
    int *age;//to show operation of delete (can only be used on pointers)

    public:
    cat(int x, int y):x(x),y(y),*age(new int(x))
    {
        // age = new int;
        // *age = x;
        // cout<<*age;
        cout<<"Cat"<<endl;
        // this->x = x;//if this not present what happens is the 20 is getting assigned to the local x and local y
        // this->y = y;//if this present then it goes to the object's x and y variables not to the instance of the member function
        cout<<"Iniside :"<<x<<" "<<y<<endl;

    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

    ~cat()
    {
        delete age;
        cout<<"delete cat"<<endl;
    }
};

int main()
{
    cat asian(10,20);
    asian.print();
    return 0;
}