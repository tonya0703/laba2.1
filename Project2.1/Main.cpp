//Main.cpp
#include <iostream> 
#include "Point.h" 

using namespace std;

int main() {
    Point i1;
    Point i2(1, 2);
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;

    cout << "i1++: " << i1++ << endl;
    cout << i1 << endl;
    cout << "++i1: " << ++i1 << endl;
    cout << i1 << endl;

    cout << "i1--: " << i1-- << endl;
    cout << i1 << endl;
    cout << "--i1: " << --i1 << endl;
    cout << i1 << endl;

    Point i3;
    cout << "i3 = "; cin >> i3;

    Point i4;
    cout << "i4 = "; cin >> i4;
    cout << *i4;
    return 0;
}