//-------------------------------------extern--------------------------------------------------
// #include<iostream>
// using namespace std;

// int x = 34;

// void extern_class()
// {
//     extern int x;
//     x = 67;
//     cout<<"Extern x : "<<x<<endl;
// }


// int main()
// {
    
//     cout<<"global x : "<<x<<endl;
//     extern_class();

//     cout<<"global x : "<<x<<endl;

//     return 0;
// }

//---------------------------------------static-----------------------------------------------
// #include<iostream>
// using namespace std;


// int* add(int x, int y)
// {
//     static int sum = x+y;//by using static the MEMORY(not the variable) will still hold the value assigned even if 
//     //the function has gone out of scope. 
//     return &sum;
// }

// int main()
// {
//     int *ptr = add(4,6);

//     cout<<"Sum is : "<<*ptr<<endl;//doing this without static keyword points to a deallocated memory..so it could be a memory
//     //that is being used by some other program and accessing it results in undefined behaviours
//     cout<<*ptr+1<<endl;


//     return 0;
// }

//------------------------------------------mutable------------------------------------------
#include<iostream>
using namespace std;

class animal
{
    public:
    int nose;
    mutable int legs;//to change just one member in a const object

    animal()
    {
        legs = 4;
        nose = 1;

    }
};

int main()
{
    const animal cat;
    cat.legs = 5;
    cout<<"Number of legs : "<<cat.legs<<endl;



    return 0;
}