#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    // Default constructor
    Demo() {
        x = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized constructor
    Demo(int a) {
        x = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called" << endl;
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Demo d1;        // default constructor
    d1.show();

    Demo d2(10);    // parameterized constructor
    d2.show();

    return 0;
}
