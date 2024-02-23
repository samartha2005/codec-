#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
    char source[100]; 
    char target[100]; 
    char ch;
    cout << endl << "Enter source file name: ";
    cin >> source;
    cout << endl << "Enter target file name: ";
    cin >> target;
    ifstream infile(source);
    ofstream outfile(target);
    if (!infile) {
        cerr << "Error: Unable to open source file." << endl;
        return 1;
    }
    if (!outfile) {
        cerr << "Error: Unable to create target file." << endl;
        return 1;
    }
    while (infile.get(ch)) {
        outfile.put(ch);
    }
    cout << "File copied successfully." << endl;
    infile.close();
    outfile.close();
    return 0;
}

