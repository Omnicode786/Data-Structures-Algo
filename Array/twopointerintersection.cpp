#include <iostream>
#include <vector>
#include <algorithm>  // For sorting

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0, j = 0;

        // **Sort both arrays to use the two-pointer approach**
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        // The two-pointer approach only works efficiently when arrays are sorted


        // If we use two pointers without sorting,
        // i starts at 4, j starts at 9
        // Since 4 < 9, i++ moves forward
        // Next, i is at 9, j is still at 9, so we match and store 9.
        // We increment i and j
        // Now i is at 5, j is at 4, and they don’t match
        // We miss 4, which should be in the intersection!
        //  the arrays are not sorted, we cannot guarantee that both i and j will ever land on the same number at the right time.

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++; // Move i forward
            }
            else if (nums1[i] > nums2[j]) {
                j++; // Move j forward
            }
            else {
                // Avoid duplicate elements in the result vector
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]); // Store common element
                }
                i++;
                j++;
            }
        }
        return result;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> res = sol.intersection(nums1, nums2);

    for (int num : res) {
        cout << num << " ";
    }
    return 0;
}
