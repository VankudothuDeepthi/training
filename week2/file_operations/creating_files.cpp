#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");  // create file

    file << "Hello File!";
    file.close();

    cout << "File created and written." << endl;
    return 0;
}
