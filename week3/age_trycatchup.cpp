#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 0)
            throw "Invalid age";
        cout << "Valid age: " << age << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
