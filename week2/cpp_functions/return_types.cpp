#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

bool isEven(int x) {
    return x % 2 == 0;
}

void greet() {
    cout << "Hello!" << endl;
}

int main() {
    cout << "Square: " << square(4) << endl;
    cout << "Is Even: " << isEven(6) << endl;
    greet();
    return 0;
}
