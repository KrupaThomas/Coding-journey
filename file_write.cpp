#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("My_file.txt");
    fout<<"This is the second line of the file."<<endl;
    fout.close(); 

    return 0;
}