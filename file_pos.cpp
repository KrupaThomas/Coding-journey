#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    /*ifstream fin;
    char ch;
    int pos;
    
    fin.open("My_file.txt");
    
    while(!fin.eof())
    {
        fin>>ch;
        pos = fin.tellg();
        cout<<pos<<endl;

    }

    fin.close();*/


    ofstream fout;
    char ch;
    int pos;

    fout.open("My_file.txt",ios::app);

    pos = fout.tellp();

    cout<<"Position before writing: "<<pos<<endl;

    fout<<"\nThis is the addition of a new line to test tellp";

    pos = fout.tellp();

    cout<<"Position after writing: "<<pos<<endl;
    
    return 0;
}