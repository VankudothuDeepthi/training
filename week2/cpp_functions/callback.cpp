#include <iostream>
using namespace std;

// Callback functions
void success() {
    cout << "Operation Successful" << endl;
}

void failure() {
    cout << "Operation Failed" << endl;
}

// Function that accepts callback
void process(bool status, void (*callback)()) {
    if (status)
        callback();
}

int main() {
    process(true, success);
    process(false, failure);  // will not call
    return 0;
}
