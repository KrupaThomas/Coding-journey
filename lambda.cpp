//lambda function used as a inline simple function
//it is an anonymous function
//reduce time in jumping in and out of function definitions
//it is used on the fly when you want to create a simple function and it doesnt leave any trace of the function
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string msg = "Archies : ";
    string msg2 = "Starring ";
    auto compile = [=](string a , string b)->string{return  msg + msg2 + a + b;}; //auto to
    //give the data type if it stores string auto will make compile a string
    //[] used to capture the variable in  the program
    //if we use [=] it captures all the variables in the program.
    cout<<compile("Suhanna ", "Khan")<<endl;

    return 0;
}
