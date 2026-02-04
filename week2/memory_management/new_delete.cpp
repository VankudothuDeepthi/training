#include <iostream>
using namespace std;

int main() {
    int* p = new int(50);   // allocate memory

    cout << *p << endl;

    delete p;               // free memory
    p = nullptr;            // avoid dangling pointer

    return 0;
}
