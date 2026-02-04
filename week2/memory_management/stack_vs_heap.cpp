#include <iostream>
using namespace std;

void stackExample() {
    int x = 10;   // stack memory
    cout << "Stack value: " << x << endl;
}

void heapExample() {
    int* p = new int(20);   // heap memory
    cout << "Heap value: " << *p << endl;
    delete p;               // free memory
}

int main() {
    stackExample();
    heapExample();
    return 0;
}
