#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

int main() {
    // Open JSON file
    ifstream inFile("data.json");
    json db;
    inFile >> db;
    inFile.close();

    // Create new user
    json newUser;
    newUser["id"] = 1;
    newUser["name"] = "Deepthi";

    // Add user to users array
    db["users"].push_back(newUser);

    // Write back to file
    ofstream outFile("data.json");
    outFile << db.dump(4);
    outFile.close();

    cout << "User added successfully!" << endl;
    return 0;
}
