#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fp)(int, int) = add;

    cout << fp(5, 3) << endl;
    return 0;
}
