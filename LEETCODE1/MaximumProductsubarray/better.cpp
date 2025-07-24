#include <bits/stdc++.h>

using namespace std;

int productsubarray(vector<int> nums,int n)
{
    int maxprod = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j < n; j++)
        {

            // don't start j from i+1 — it skips subarrays of size 1
// like just nums[i] alone — that could be the max!
// also, setting maxprod = 1 is risky if all nums are negative or zero
// better to use INT_MIN so nothing gets missed
// this version is fine for learning, but later use DP for better speed



// MY LOGIC WILL WORK IF THE ARRAY IS GREATER THAN SIZE 2
// heads up: this skips subarrays of size 1 (like just nums[i])
// because j starts from i+1, we never check nums[i] alone
// what if that one number is actually the max? yeah, this misses it
// also, starting maxprod = 1 is a problem when nums has all negatives or zeros
// so nope, this logic isn't fully correct — even for arrays with size > 1

            product *= nums[j];
            maxprod = max(maxprod,product);
        }
        
    }
    return maxprod;
    
}


int main()
{
vector <int> nums = {2,-2,3,4,5};
int product  = productsubarray(nums, 5);
cout <<product;
cout <<"hello";

}