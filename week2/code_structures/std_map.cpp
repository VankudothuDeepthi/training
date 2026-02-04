#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    students[1] = "deepu";
    students[3] = "ashu";
    students[2] = "sandy";

    for (auto p : students) {
        cout << p.first << " -> " << p.second << endl;
    }
    return 0;
}
