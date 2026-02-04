#include <iostream>
using namespace std;

void counter() {
    static int count = 0;   // static variable
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    const double PI = 3.14; // constant

    cout << "PI: " << PI << endl;

    counter();
    counter();
    counter();

    return 0;
}
