#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v.push_back(40);  // add element

    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
