//function template example(two types of templates : function and class)
//function template creates a generic function that can handle all data types
//solves issue of code length : function overloading
//generic programming facilitated
//in compile time code is expanded

#include<iostream>
#include<string>
using namespace std;

template<class T>
T sum(T x, T y)
{
    return x+y;
}

int main()
{
    cout<<"Sum of integers : "<<sum<int>(8,9)<<endl;
    cout<<"Sum of float : "<<sum<float>(6.9,9.6)<<endl;
    cout<<"Sum of strings : "<<sum<string>("Krupa ", "Karun")<<endl;
    

    return 0;
}