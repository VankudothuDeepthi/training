#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    students[1] = "Alice";
    students[2] = "Bob";
    students[3] = "Charlie";

    for (auto &s : students) {
        cout << s.first << " -> " << s.second << endl;
    }

    return 0;
}
