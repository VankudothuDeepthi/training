#include <iostream>
using namespace std;

int main() {
    try {
        throw 100;
    }
    catch (int e) {
        cout << "Integer exception caught: " << e << endl;
    }
    catch (...) {
        cout << "Unknown exception caught" << endl;
    }
    return 0;
}
