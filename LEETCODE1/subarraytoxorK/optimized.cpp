#include <bits/stdc++.h>

using namespace std;





int xortok(vector <int> nums,int k){


    int xr = 0;
    int count = 0;
    map<int,int> mpp;
    mpp[xr]++;
    for (int i = 0; i < nums.size(); i++)
    {
        xr ^= nums[i];
        int x = xr^k;
        count += mpp[x];
        mpp[xr]++;
    }
    
return count;


}

int main()
{

    vector<int> nums = {4,2,2,6,4};
    cout <<xortok(nums,6);


}