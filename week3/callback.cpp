#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Number: " << x << endl;
}

// function that accepts a callback
void executeCallback(void (*callback)(int)) {
    callback(10); // calls the function pointer
}

int main() {
    executeCallback(printNumber); // pass function as argument
}
