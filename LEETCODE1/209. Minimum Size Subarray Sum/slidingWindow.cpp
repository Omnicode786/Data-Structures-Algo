#include <bits/stdc++.h>

using namespace std;


int minlengther (vector<int> &nums, int target){
int n = nums.size();
int left = 0, minlength = INT_MAX;
int sum = 0;
for (int  right= 0; right < n; right++)
{
    sum += nums[right];
    while ( (sum >= target))
    {
        minlength = min(minlength,right - left + 1);
        sum -= nums[left]; // piche se aik - krdo;
        left++;
    }
    
}

return minlength;

}