#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);

    file << "Appending new line\n";

    file.close();
    cout << "Data appended successfully\n";

    return 0;
}
