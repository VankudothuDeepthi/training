#include <iostream>
#include <exception> // for standard exceptions
#include <stdexcept> // for runtime_error
using namespace std;

// User-defined exception class
class MyException {
public:
    string msg;
    MyException(string m) { msg = m; }
};

int main() {
    // Example 1: Integer exception
    try {
        throw 42;
    }
    catch (int e) {  // catches integer
        cout << "Integer exception caught: " << e << endl;
    }

    // Example 2: Double exception
    try {
        throw 3.14159;
    }
    catch (double e) {  // catches floating-point
        cout << "Double exception caught: " << e << endl;
    }

    // Example 3: Character exception
    try {
        throw 'X';
    }
    catch (char e) {  // catches character
        cout << "Character exception caught: " << e << endl;
    }

    // Example 4: String literal exception
    try {
        throw "This is an error message";
    }
    catch (const char* e) {  // catches C-style string
        cout << "String literal exception caught: " << e << endl;
    }

    // Example 5: User-defined exception (object)
    try {
        throw MyException("Custom user-defined exception");
    }
    catch (MyException e) {  // object copy
        cout << "User-defined exception caught (by object): " << e.msg << endl;
    }

    // Example 6: User-defined exception (reference)
    try {
        throw MyException("Exception by reference");
    }
    catch (MyException& e) {  // by reference
        cout << "User-defined exception caught (by reference): " << e.msg << endl;
    }

    // Example 7: Standard exception (const reference)
    try {
        throw runtime_error("Standard runtime error");
    }
    catch (const exception& e) {  // best practice
        cout << "Standard exception caught: " << e.what() << endl;
    }

    // Example 8: Catch-all block
    try {
        throw 2.71828f; // float exception
    }
    catch (...) {  // catch anything
        cout << "Catch-all block executed for unknown exception" << endl;
    }

    return 0;
}
