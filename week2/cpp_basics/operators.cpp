#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "a > b: " << (a > b) << endl;
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << endl;

    return 0;
}
