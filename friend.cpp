// #include<iostream>
// using namespace std;

// //----------------------------using friend class and a friend function-------------------------------

// class dog;

// class fish
// {
//     public:
//     void print_dog(dog &obj1);//define later
    
// };

// class dog
// {
//     private:
//     int legs;

//     public:
//     void print()
//     {
//         cout<<"Dog class"<<endl;
//     }

//     dog()
//     {
//         legs = 4;
//     }

//     friend void print_friend(dog &obj);
//     friend void fish::print_dog(dog &obj1);

//     friend class cat;//freind class declared inside the class whose data you want to access
// };

// void print_friend(dog &obj)
// {
//     cout<<"Friend class function"<<endl;
//     cout<<"Dog class legs : "<<obj.legs<<endl;
// }





// class cat
// {
//     private: 
//     int whiskers;

//     public:
//     void print(dog &obj)//how friend class accesses the members of another class
//     {
//         cout<<"cat class"<<endl;
//         cout<<"Dog class legs : "<<obj.legs<<endl;
//     }

// };

// int main()
// {
//     dog lab;
//     cat armanian;
//     armanian.print(lab);
//     print_friend(lab);


//     return 0;
// }

//---------------------------------friend function of multiple classes--------------------

#include<iostream>
using namespace std;

class class2;

class class1
{
    private:
    int x;

    public:
    class1(int a)
    {
        x = a;

    }
    friend void max(class1,class2);

};

class class2
{
    private:
    int y;

    public:
    class2(int b)
    {
        y = b;
    }
    friend void max(class1,class2);

};

void max(class1 t1,class2 t2)
{
    if(t1.x>t2.y)
        cout<<"class1 big"<<endl;
    else
        cout<<"class2 big"<<endl;
}

int main()
{
    class1 obj1(9);
    class2 obj2(10);
    max(obj1,obj2);



    return 0;
}