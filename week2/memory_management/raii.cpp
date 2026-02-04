#include <iostream>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource Acquired" << endl;
    }

    ~Resource() {
        cout << "Resource Released" << endl;
    }

    void use() {
        cout << "Using Resource" << endl;
    }
};

int main() {
    Resource r;
    r.use();
    return 0;
}
