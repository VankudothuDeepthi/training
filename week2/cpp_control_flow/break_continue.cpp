#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {

        if (i == 5)
            continue;   // skip 5

        if (i == 8)
            break;      // stop loop

        cout << i << " ";
    }

    return 0;
}
