#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = arr;

    cout << *p << endl;     // 10
    p++;
    cout << *p << endl;     // 20
    p++;
    cout << *p << endl;     // 30

    return 0;
}
