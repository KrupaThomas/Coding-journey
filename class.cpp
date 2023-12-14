#include<iostream>
#include<string>
using namespace std;

class geeks
{
    public://access specifier
    int geekid;//member variable
    string geekname;

    void print_geekid()//member fn defined inside
    {
        cout<<"Id : "<<geekid<<endl;

    }

    void print_geekname();//declaration of member function defined outside

    geeks()
    {
        geekid = -1;
        cout<<"Default constructor called"<<endl;

    }

    geeks(int id, string name)
    {
        geekid = id;
        geekname = name;
    }

    geeks(geeks &obj)
    {
        geekid = obj.geekid;
        geekname = obj.geekname;
    }


};

void geeks::print_geekname()
{
    cout<<"Name : "<<geekname<<endl;
}

int main()
{
    geeks arun;
    geeks frangoo(345, "henry");
    geeks sandeep(frangoo);
    cout<<"Enter geekname : ";
    cin>>arun.geekname;

    cout<<"Enter geek id: ";
    cin>>arun.geekid;

    cout<<"Details of the geek 1"<<endl;
    arun.print_geekid();
    arun.print_geekname();

    cout<<"Details of the geek 2"<<endl;
    frangoo.print_geekid();
    frangoo.print_geekname();

    cout<<"Details of the geek 3"<<endl;
    sandeep.print_geekid();
    sandeep.print_geekname();

    return 0;
}


//define a class

//member function inside and outside class
//constructor inside and outside class