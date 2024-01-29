//vector addition

#include<iostream>
using namespace std;

typedef struct vec
{
    int x;
    int y;
    vec(int x_, int y_ ) : x(x_), y(y_){}; 

}Vec;

int main()
{
    int k = 2;
    vec v1(1,3), v2(-1,-3);
    cout<<"Adding two vector we get : "<<v1.x+v2.x<<","<<v1.y+v2.y<<endl;
    cout<<"Scalar multiplication with v1 : "<<k*v1.x<<" "<<k*v1.y<<endl;
    
    return 0;
}