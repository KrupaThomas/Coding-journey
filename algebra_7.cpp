//Solve the equation x + 2y = 5

#include<iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, c = 5;
    int i = 0;
    for(i = 0; i <= c ; i++)
    {
        x = i;
        y = (5 - x)/2;
        if(x + 2*y == 5)
        {
            cout<<"solutions are : "<<x<<" "<<y<<endl;
        }
    }

    return 0;
}