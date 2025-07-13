#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int, vector<pair<int, int>>> sumMap;
    set<vector<int>> resultSet;

    // ✅ Step 1: Store all pair sums in the map
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int pairSum = nums[i] + nums[j];
            sumMap[pairSum].push_back({i, j});
        }
    }

    // ✅ Step 2: For each unique pair, look for complement
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int currentSum = nums[i] + nums[j];
            int remaining = target - currentSum;

            if (sumMap.find(remaining) != sumMap.end()) {
                for (auto& pair : sumMap[remaining]) {
                    int k = pair.first;
                    int l = pair.second;

                    // All indices must be unique
                    if (i != k && i != l && j != k && j != l) {
                        vector<int> quad = {nums[i], nums[j], nums[k], nums[l]};
                        sort(quad.begin(), quad.end()); // To handle duplicate values
                        resultSet.insert(quad);
                    }
                }
            }
        }
    }

    // ✅ Convert set to vector
    vector<vector<int>> result(resultSet.begin(), resultSet.end());
    return result;
}

int main() {
    vector<int> nums = {1, -1, 0, 2, 3, 4, -1, 0};
    int target = 0;

    vector<vector<int>> result = fourSum(nums, target);

    for (auto& quad : result) {
        cout << "[ ";
        for (int num : quad) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}