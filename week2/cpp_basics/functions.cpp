#include <iostream>
using namespace std;

void passByValue(int x) {
    x = 100;
}

void passByReference(int &x) {
    x = 100;
}

int main() {
    int num = 10;

    passByValue(num);
    cout << "After passByValue: " << num << endl;

    passByReference(num);
    cout << "After passByReference: " << num << endl;

    return 0;
}
