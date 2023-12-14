#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include<cstdlib>
using namespace std;

class student {
public:
    string sName;
    int sAge;
    int sRollno;
    long int Admn_no;

    long int get_admnno() {
        return Admn_no;
    }
};

void project(student *S);
void setDetails(student *S);
void getDetails(student *S);
void deleteDetails(student *S);

int main() {
    student *S = new student;
    project(S);
    delete S;
    return 0;
}

void project(student *S) {
    int ch;
    do {
        cout << "-----------------------Menu-----------------------" << endl;
        cout << "1. Set Details" << endl;
        cout << "2. Get Details" << endl;
        cout << "3. Delete Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        system("clear");

        switch (ch) {
        case 1:
            setDetails(S);
            break;
        case 2:
            getDetails(S);
            break;
        case 3:
            deleteDetails(S);
            break;
        }
    } while (ch != 4);
}

void setDetails(student *S) {
    system("clear");
    ofstream fout;
    fout.open("student_details.txt", ios::app); // Open file for appending

    cout << "Enter name: ";
    cin >> S->sName;
    cout << "Enter Age: ";
    cin >> S->sAge;
    cout << "Enter Roll No: ";
    cin >> S->sRollno;
    cout << "Enter admission No: ";
    cin >> S->Admn_no;

    // Writing details to file
    fout << S->sName << " " << S->sAge << " " << S->sRollno << " " << S->Admn_no << endl;

    fout.close();

    
}

void getDetails(student *S) {
    system("clear");
    ifstream fin;
    fin.open("student_details.txt");
    if (!fin.is_open()) {
        cout << "File not found or unable to open." << endl;
        return;
    }

    string name;
    int age, rollno;
    long int admn_no;

    cout << "Student Details:" << endl;

    while (fin >> name >> age >> rollno >> admn_no) {
        cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollno << ", Admission No: " << admn_no << endl;
    }

    fin.close();
}

void deleteDetails(student *S) {
    system("clear");
    ifstream fin;
    fin.open("student_details.txt");
    ofstream fout;
    fout.open("trash_student_details.txt", ios::app);

    if (!fin.is_open() || !fout.is_open()) {
        cout << "File not found or unable to open." << endl;
        return;
    }

    string name;
    int age, rollno;
    long int admn_no;

    while (fin >> name >> age >> rollno >> admn_no) {
        fout << name << " " << age << " " << rollno << " " << admn_no << endl;
    }

    fin.close();
    fout.close();

    ofstream clearFile("student_details.txt");
    clearFile.close();

    
}
