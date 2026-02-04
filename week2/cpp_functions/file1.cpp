#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // static variable
    count++;
    cout << "Count = " << count << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}

