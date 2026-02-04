#include <iostream>
#include <fstream>
#include <algorithm>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

int main() {
    ifstream inFile("data.json");
    json db;
    inFile >> db;
    inFile.close();

    // Delete user with ID 1
    db["users"].erase(
        remove_if(db["users"].begin(), db["users"].end(),
                  [](json& user){ return user["id"] == 1; }),
        db["users"].end()
    );

    ofstream outFile("data.json");
    outFile << db.dump(4);
    outFile.close();

    cout << "User deleted successfully!" << endl;
    return 0;
}
