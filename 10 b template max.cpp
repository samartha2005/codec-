#include<iostream>
using namespace std;
template <class T> 
class TclassMax {
    T x, y;
public:
    TclassMax() {}
    TclassMax(T first, T second)
   {
        x = first;
        y = second;
    }
    T getMaximum() 
   {
        if (x > y)
            return x;
        else
            return y;
    }
};
int main() {
    TclassMax<int> iMax;
    int a, b, i;
    TclassMax<float> fMax;
    float c, d, j;
    cout << "Class Template Program: Generic Programming: Get Maximum Number.\n";
    cout << "Enter A, B values (integers):\n";
    cin >> a >> b;
    iMax = TclassMax<int>(a, b);
    i = iMax.getMaximum();
    cout << "Result max int: " << i << endl;
    cout << "Enter C, D values (floats):\n";
    cin >> c >> d;
    fMax = TclassMax<float>(c, d);
    j = fMax.getMaximum();
    cout << "Result max float: " << j << endl;
    return 0;
}

