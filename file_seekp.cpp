#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("My_file.txt",ios::in);
    char A[8] = "Academy";
    int i;
    fout.seekp(-5,ios_base::end);
    fout.write(A,8);


    return 0;
}

