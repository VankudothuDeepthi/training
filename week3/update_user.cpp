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

    // Update user with ID 1
    for (auto& user : db["users"]) {
        if (user["id"] == 1) {
            user["name"] = "Deepu"; // new name
        }
    }

    ofstream outFile("data.json");
    outFile << db.dump(4);
    outFile.close();

    cout << "User updated successfully!" << endl;
    return 0;
}
