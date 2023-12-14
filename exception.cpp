#include<iostream>

using namespace std;
//divsion by 0 catch error
int main()
{
    int num1, num2;
    char *s;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    try
    {
        
        if(num2==0)
        {
            throw num2;

        }
        else
        {
            cout<<"Dividing num1 and num2: "<<(float)num1/num2;
        }

    }
    /*catch(int x)//parameter should be same as the thing we throw
    {
        cout<<"Number entered is 0";
    }*/

    catch(...)//parameter should be same as the thing we throw
    {
        cout<<"Error occured";
    }

    return 0;
}