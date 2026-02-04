#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& ref = x;

    ref = 50;

    cout << x << endl;
    return 0;
}
