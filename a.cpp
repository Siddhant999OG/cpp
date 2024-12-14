#include <iostream>
#include <vector>
using namespace std;

vector<string> findSubarrays(const string& str) {
    vector<string> subarrays;
    int n = str.size();

    // Iterate through all possible starting points
    for (int i = 0; i < n; i++) {
        // For each starting point, find all subarrays ending at different points
        for (int j = i; j < n; j++) {
            subarrays.push_back(str.substr(i, j - i + 1));
        }
    }

    return subarrays;
}

int main() {
    string str = "121212";
    vector<string> subarrays = findSubarrays(str);

    // Print the subarrays
    cout << "Subarrays of " << str << " are: " << endl;
    for (const string& subarray : subarrays) {
        cout << subarray << endl;
    }

    return 0;
}
