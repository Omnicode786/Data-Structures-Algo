#include <bits/stdc++.h>

using namespace std;


vector <int> sumthree(vector<int> &num){
    int n = num.size();
    vector <int> finder;
    vector <int> list;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (find(finder.begin(),finder.end(),-(num[i]+num[j])) != finder.end())
            {
        list.push_back(num[i]);
list.push_back(num[j]);
list.push_back(-(num[i] + num[j]));
            }
            if (find(num.begin(),num.end(),-(num[i]+num[j])) != num.end())
            {
                finder.push_back(-(num[i]+num[j]));
            }
            
            
        }
        
    }
    
return list;


}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<int> ans = sumthree(nums);

    for (auto triplet : ans) {
        cout<<triplet<<" ";
    }

    return 0;
}