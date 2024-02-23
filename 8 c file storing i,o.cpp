#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main() {
    char string[80];
    cout << "Enter a string: \n";
    cin.getline(string, 80); 
    int len = strlen(string);
    fstream file;
    file.open("text.txt", ios::in | ios::out | ios::trunc); 
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    for (int i = 0; i < len; i++)
        file.put(string[i]);

    file.seekg(0);
    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
    file.close();
    return 0;
}

