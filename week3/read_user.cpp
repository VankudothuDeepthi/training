#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

int main() {
    ifstream inFile("data.json");
    json db;
    inFile >> db;
    inFile.close();

    cout << "Users in database:" << endl;
    for (auto& user : db["users"]) {
        cout << "ID: " << user["id"] << ", Name: " << user["name"] << endl;
    }
    return 0;
}
