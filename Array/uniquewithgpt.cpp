#include <bits/stdc++.h>
using namespace std;

// Function to check if all numbers have unique frequencies
bool myfunc(int a[]) {
    for (int i = 1; i <= 2001; i++) {
        // Check if current frequency is nonzero AND equal to the previous frequency
        if (a[i] && a[i] == a[i - 1]) {
            // If two different numbers have the same occurrence count, return false
            return false;
        }
    }
    // If no duplicate frequencies are found, return true
    return true;
}

int main() {
    // Original array of numbers
    int arr[] = {1, 2, 3, 2, 3, 3};
    
    // Frequency array initialized with 0 (size large enough to accommodate shifts)
    int a[2001] = {};
    
    // Count occurrences of each number in `arr`, using offset to avoid negative indices
    for (auto n : arr) {
        ++a[n + 1000];  // Shift `n` by 1000 to ensure all indices are non-negative
    }
    
    // Sort the frequency array to bring all nonzero frequencies together in order
    sort(a, a + 2001);
    
    // Check if all numbers have unique frequencies
    if (myfunc(a))
        cout << "true";
    else
        cout << "false";

    return 0;
}
