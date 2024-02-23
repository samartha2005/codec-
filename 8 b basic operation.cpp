#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpos);
    cout << "Number: " << 123.456 << endl;
    cout.unsetf(ios::showpos);
    cout << "Number: " << 123.456 << endl;
    cout.precision(4);
    cout << "Number: " << 123.456 << endl;
    return 0;
}

