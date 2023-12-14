#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ifstream fin;
    fin.open("My_file.txt");
    fin>>ch;//to get the first value pointed to by get pointer
    while(!fin.eof())
    {
        cout<<ch;
        fin>>ch;//to increment to the next character pointed to by get pointer
    }
    fin.close();

    return 0;
}
