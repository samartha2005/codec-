#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() 
{
    string str_num = "12345";
    int num;
    istringstream(str_num) >> num;
    cout << "String to Int: " << num <<endl;
    int num2 = 54321;
    stringstream ss;
    ss << num2;
    string str_num2 = ss.str();
    cout << "Int to String: " << str_num2 <<endl;
    return 0;
}

