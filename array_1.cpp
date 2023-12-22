#include<iostream>
#include<array>
using namespace std;


int main()
{
    std::array<int,5> arr = {100,8,9,5,90};
 
    cout<<"The difference between first and last elements is : "<<arr.front() - arr.back()<<endl;



    return 0;
}