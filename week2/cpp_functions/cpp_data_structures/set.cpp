#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> values;

    values.insert(10);
    values.insert(20);
    values.insert(10);  // duplicate

    for (int v : values) {
        cout << v << " ";
    }

    return 0;
}
