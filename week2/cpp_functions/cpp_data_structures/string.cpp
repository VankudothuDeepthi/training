#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Alice";

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;

    name += " Smith";
    cout << "Full Name: " << name << endl;

    return 0;
}
