class Vehicle {  // Base
public:
    void start() { cout << "Vehicle starts" << endl; }
};

class Car : public Vehicle {  // Derived
public:
    void honk() { cout << "Car honks" << endl; }
};
