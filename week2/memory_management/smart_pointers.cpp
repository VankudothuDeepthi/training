#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> p = make_unique<int>(100);

    cout << *p << endl;

    return 0;
}
