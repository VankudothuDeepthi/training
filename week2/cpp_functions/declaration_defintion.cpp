#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b);

int main() {
    cout << "Sum: " << add(5, 3) << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
