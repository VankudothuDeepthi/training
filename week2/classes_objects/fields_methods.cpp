#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;   // field
    int breadth;  // field

    int area() {  // method
        return length * breadth;
    }
};

int main() {
    Rectangle r;
    r.length = 10;
    r.breadth = 5;

    cout << r.area() << endl;
    return 0;
}
