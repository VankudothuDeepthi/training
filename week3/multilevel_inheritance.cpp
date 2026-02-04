#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
};

class Child : public Parent {
};

int main() {
    Child obj;
    obj.showGrandparent();
    return 0;
}
