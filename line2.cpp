//find all integer points between 2 points in a line

#include<iostream>
using namespace std;

int main()
{
    int x1 = 2, x2 = 5, y1 = 3, y2 = 9;
    int i = 0, j = 0;

    cout<<"The points on the line between two given points are : "<<endl;
    for(i = 2; i <= 5; i++)
    {
        int y = 2*i + 1;
        if(y>=3 && y<=9)
            cout<<"{"<<i<<","<<y<<"}"<<endl;
    }
    return 0;
}