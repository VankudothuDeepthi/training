#include <fstream>
using namespace std;

int main() {
    ofstream file("info.txt");

    file << "Name: John\n";
    file << "Age: 20\n";

    file.close();
    return 0;
}
