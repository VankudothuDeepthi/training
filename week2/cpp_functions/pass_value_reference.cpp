#include <iostream>
using namespace std;

void byValue(int x) {
    x = 50;
}

void byReference(int &x) {
    x = 50;
}

int main() {
    int num = 10;

    byValue(num);
    cout << "After byValue: " << num << endl;

    byReference(num);
    cout << "After byReference: " << num << endl;

    return 0;
}
