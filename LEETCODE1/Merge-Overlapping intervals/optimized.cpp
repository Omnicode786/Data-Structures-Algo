#include  <bits/stdc++.h>
using namespace std;

vector <vector<int>> Intervals(vector<vector<int>> arr){
int n = arr.size();


vector <vector<int>> ans;

for (int i = 0; i < n; i++)
{
    if (ans.empty() || arr[i][0] > ans.back()[1])
    {
        ans.push_back(arr[i]);
    }
    else{
        ans.back()[1] = max(ans.back()[1],arr[i][1]);

    }
    
}

return ans;

}

int main() {
    vector<vector<int>> intervals = {{1,4},{0,4}};
    vector<vector<int>> result = Intervals(intervals);
    
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}