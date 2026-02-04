#include <iostream>
using namespace std;

int main() {
    int x = 10;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    int* p = &x;   // pointer storing address of x
    cout << "Value using pointer: " << *p << endl;

    return 0;
}
