#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int l) {
        length = l;
    }

    Box operator+(Box b) {
        return Box(length + b.length);
    }
};

int main() {
    Box b1(10), b2(20);
    Box b3 = b1 + b2;

    cout << b3.length;
    return 0;
}

