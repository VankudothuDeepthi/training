#include <iostream>
#include <nlohmann/json.hpp> // Include nlohmann JSON library
using json = nlohmann::json;

using namespace std;

int main() {
    // Example JSON string
    string jsonString = R"({"name":"Alice","age":25})";

    try {
        // Parsing JSON string
        json j = json::parse(jsonString);

        // Accessing valid key
        cout << "Name: " << j.at("name") << endl;

        // Accessing invalid key → throws out_of_range
        cout << "City: " << j.at("city") << endl;
    }
    catch (json::parse_error& e) {
        cout << "Parse error: " << e.what() << endl;
    }
    catch (json::type_error& e) {
        cout << "Type error: " << e.what() << endl;
    }
    catch (json::out_of_range& e) {
        cout << "Out of range error: " << e.what() << endl;
    }
    catch (exception& e) { // catch other standard exceptions
        cout << "Standard exception: " << e.what() << endl;
    }
    catch (...) { // catch-all
        cout << "Unknown JSON exception occurred" << endl;
    }

    return 0;
}
