#include<iostream>
#include<array>
using namespace std;


int main()
{
    std::array<int,3>int_array;
    std::array<int,3>test_array = {1,2,3};
    int i = 0;
    for(i = 0; i<3; i++)
    {
        int_array[i] = i;
    }

    for(i = 0; i<3; i++)
    {
        cout<<int_array[i]<<endl ;
    }
    cout<<"At : "<<int_array.at(2)<<endl;//value at position 2
    cout<<"Front : "<<int_array.front()<<endl;//value at start
    cout<<"Back : "<<int_array.back()<<endl;//value at the end;
    cout<<"Size : "<<int_array.size()<<endl;//size of array
    cout<<"Max Size : "<<int_array.max_size()<<endl;//max size of array

    int_array.swap(test_array);//swap the arrays
    cout<<"Size of int_array after swapping (3): "<<int_array.size()<<endl;//size of array
    cout<<"Max Size of int_array after swapping (3) : "<<int_array.max_size()<<endl;//max size of array
    test_array.fill(3);//fill array with 0
    for(int i = 0; i<3; i++)
    {
        cout<<test_array.at(i)<<" ";
    }
    cout<<endl;
    test_array.empty();

    for(int i = 0; i<3; i++)
    {
        cout<<test_array[i]<<" ";
    }

    return 0;
}