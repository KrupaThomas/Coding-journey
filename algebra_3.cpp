//The sum of a number and its reciprocal is 41 / 20. Find the number.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float x = 0,y = 0;
    float a = 20, b = -41, c = 20;
    //equation becomes 20x^2 - 41x + 20
    x = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    y = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);

    cout<<"The solutions are : "<<x<<" "<< y <<endl;

    return 0;
}


