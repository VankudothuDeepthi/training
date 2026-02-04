#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("demo.txt", ios::out);

    file << "Welcome to C++\n";
    file.close();

    file.open("demo.txt", ios::in);
    string text;
    while (getline(file, text)) {
        cout << text << endl;
    }

    file.close();
    return 0;
}
