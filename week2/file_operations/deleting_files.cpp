#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    remove("data.txt");
    cout << "File deleted." << endl;
    return 0;
}
