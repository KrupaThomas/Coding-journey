#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    int i;
    char A[10] = {0};
    fin.open("My_file.txt");

    fin.seekg(10,ios_base::beg);

    fin.read(A,10);

    for(i = 0; A[i]!=0; i++)
    {
        cout<<A[i]<<endl;
    }

    fin.close();


    return 0;
}