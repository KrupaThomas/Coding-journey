#include<iostream>

using namespace std;

void square(int *ptr);

int main()
{
    int arr[5] = {1,2,4,6,7};
    int *ptr = arr , i = 0;

    for(i = 0; i<5 ; i++)
    {
        cout<<ptr[i]<<" "<<endl;
    }

    /*for(i = 0; i<5 ; i++)
    {
        cout<< *(ptr+i)<<" "<<endl;
    }*/

    cout<<"Square of the number is "<<endl;
    square(arr);


    return 0;
}

void square(int *ftr)
{
    int temp = 0,i=0;
    for(i = 0; i<5; i++)
    {
        temp = (ftr[i])*(ftr[i]);
        cout<<temp<<endl;

    }
}