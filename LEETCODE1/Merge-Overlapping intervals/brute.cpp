#include <bits/stdc++.h>


using namespace std;



vector <vector<int>> overlappingIntervals(vector<vector<int>> intervals){

    // we are assuming that the intervals that they are giving in the 2s one is onoly going to be 2 


    sort(intervals.begin(),intervals.end());
int n = intervals.size();

vector <vector<int>> ans;
for (int i = 0; i < n; i++)
{
    int start = intervals[i][0];
    int end = intervals[i][1];
    if (!ans.empty() && end <= ans.back()[1])
    {
        continue;
    }
    for (int j = i + 1; j < n; j++)
    {
        if (end >= intervals[j][0])
        {
            end = max(end,intervals[j][1]);
        }
        else{
            break;
        }    
    }
    ans.push_back({start,end});

    
    
}
return ans;





}



int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector<vector<int>> result = overlappingIntervals(intervals);
    
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}