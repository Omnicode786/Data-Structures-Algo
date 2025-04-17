#include <bits/stdc++.h>


using namespace std;

int minLengther(vector<int> &nums, int k){
unordered_map<int,int> prefixSum;

int sum = 0;
int minLength = INT_MAX;
int mini = 0;
int n = nums.size();
for (int i = 0; i < n; i++)
{
    sum += nums[i];
    if (sum == k){
        mini = i+1;
        minLength = min(minLength,mini);
    }
    int rem = sum-k;
    if (prefixSum.find(rem) != prefixSum.end())
    {
        int len = i - prefixSum[rem];
        minLength = min(minLength,len); 
    }
    if (prefixSum.find(sum) == prefixSum.end())
    {
        prefixSum[sum] = i;
    }
    

}

return minLength == INT_MAX ? 0 : minLength;


}

int main(){
vector <int> array = {2,3,1,2,4,3};
int n = minLengther(array,7);
cout<<n;


}