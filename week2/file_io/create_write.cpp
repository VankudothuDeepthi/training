#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Hello File Handling\n";
    file << "This is C++ File I/O\n";

    file.close();

    cout << "File created and written successfully\n";
    return 0;
}
