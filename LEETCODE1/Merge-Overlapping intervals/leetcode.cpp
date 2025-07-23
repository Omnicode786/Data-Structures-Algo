#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
       ans.push_back(intervals[0]);
        for (int i = 1; i < n; i++){
            // if (intervals[i][1] == 0) ans.push_back(intervals[i]);
             if (!ans.empty() && ans.back()[1] >= intervals[i][0]){
                // if (ans.back()[0] > intervals[i][0]) ans.back()[0] = intervals[i][0];
                ans.back()[1] = max (ans.back()[1], intervals[i][1]);
                //  by sorting we can avoid the following if statements
            }
            else{
               ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = sol.merge(intervals);

    cout << "Merged intervals:\n";
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "]\n";
    }

    return 0;
}
