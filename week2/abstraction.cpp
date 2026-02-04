#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0; // pure virtual
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with key" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c;
    v = &c;

    v->start();
    return 0;
}
