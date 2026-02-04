#include <iostream>
using namespace std;

class Father {
public:
    void fatherFunc() {
        cout << "Father class" << endl;
    }
};

class Mother {
public:
    void motherFunc() {
        cout << "Mother class" << endl;
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child obj;
    obj.fatherFunc();
    obj.motherFunc();
    return 0;
}
