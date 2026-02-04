#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    if (remove("data.txt") == 0)
        cout << "File deleted successfully\n";
    else
        cout << "Error deleting file\n";

    return 0;
}
