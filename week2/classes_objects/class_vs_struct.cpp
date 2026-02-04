#include <iostream>
using namespace std;

// Using struct
struct StudentStruct {
    int roll;
    string name;
};

// Using class
class StudentClass {
    int roll;   // private by default

public:
    void setRoll(int r) {
        roll = r;
    }

    int getRoll() {
        return roll;
    }
};

int main() {
    StudentStruct s1;
    s1.roll = 1;
    s1.name = "Alice";

    StudentClass s2;
    s2.setRoll(2);

    cout << s1.roll << endl;
    cout << s2.getRoll() << endl;

    return 0;
}
