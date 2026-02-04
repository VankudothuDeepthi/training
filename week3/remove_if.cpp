#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Remove all even numbers
    auto it = remove_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; });

    // Actually erase elements from vector
    v.erase(it, v.end());

    // Print updated vector
    for(int n : v) cout << n << " ";  // Output: 1 3 5
    cout << endl;

    return 0;
}
