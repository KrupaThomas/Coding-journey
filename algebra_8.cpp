#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, des = 0;
    cout<<"Enter the coefficients of the quadratic equations in order : ";
    cin>>a>>b>>c;

    des = (pow(b,2)-4*a*c);
    if(des > 0)
        cout<<"2 solutions"<<endl;
    else if(des == 0)
        cout<<"1 solution"<<endl;
    else
        cout<<"no solution"<<endl;
    return 0;
}