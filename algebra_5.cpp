 //The sum of two numbers is 24 and their product is 128. Find the absolute difference of 
 //numbers.

 #include<iostream>
 #include<cmath>
 using namespace std;

 int main()
 {
    int y = 0, x = 0;
    int a = -1, b = 24, c = -128;

    y = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    x = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);

    cout<<"Solutions are : "<<x<<" "<<y<<endl;
    return 0;
 }