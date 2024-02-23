#include<iostream>
#include<fstream>
using namespace std;

struct employee {
    char name[20];
    int age;
    float basic;
    float gross;
};
int main() {
    char ch = 'y';
    employee e; 
    ofstream outfile;
    outfile.open("employee.txt", ios::out | ios::binary);
    while (ch == 'y') {
        cout << endl << "Enter the record: ";
        cin >> e.name >> e.age >> e.basic >> e.gross;
        outfile.write((char*)&e, sizeof(e));
        cout << endl << "Add another Y/N: ";
        cin >> ch;
    }
    outfile.close();

    ifstream infile;
    infile.open("employee.txt", ios::in | ios::binary);
    while (infile.read((char*)&e, sizeof(e))) {
        cout << endl << e.name << "\t" << e.age << "\t" << e.basic << "\t" << e.gross;
    }
    infile.close();

    return 0;
}

