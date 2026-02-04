#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10;
        int b = 0;
        int result = a / b;   // may cause error
        cout << result << endl;
    }
    catch (...) {
        cout << "Exception occurred" << endl;
    }
    return 0;
}
