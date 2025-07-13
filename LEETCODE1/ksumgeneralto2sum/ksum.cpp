#include <bits/stdc++.h>

using namespace std;


vector <vector<int>> ksum(vector<int> nums, int target, int k, int start){

    vector<vector<int>> res;
    int n = nums.size();
    if (k == 2)
    {
        int left = start, right = n-1;
        while (left < right)
        {
            int sum = nums[left] + nums[right];
             if (sum < target)
            {
                left++;
            }
            else if (sum > target){
                right--;
            }
            else{
                res.push_back({nums[left],nums[right]});
                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;
                left++;
                right--;
            }
            
        }
         return res;
        
    }



    for (int i = start; i < n-k+1; i++)
    {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        if((long long)nums[i] + nums[n-1]*(k-1) < target) continue;
        if((long long)nums[i] + nums[i+1]*(k-1) > target) break;
        
        // Every time we fix a number, we subtract it from the target because now we're only looking for the rest of the numbers to complete the sum.
// “Let’s fix nums[i] as part of our answer. Now we just need (k - 1) numbers that sum to target - nums[i]

// 🧠 Why k - 1?
// Because we already picked 1 number (nums[i]), so now we only need (k - 1) more numbers.

// 🧠 Why i + 1?
// To avoid reusing the same element, and to keep the order increasing (since the array is sorted). We always look ahead, never behind.



        vector <vector<int>> subsets = ksum(nums,target-nums[i],k-1,i + 1);
        for (auto&subset: subsets){


            // .insert(pos, value)
            subset.insert(subset.begin(),nums[i]);
            res.push_back(subset);
        }


        
    }
    
    
return res;

}


vector<vector<int>> findKsum(vector<int> nums,int target, int k){
    sort(nums.begin(),nums.end());
    return ksum(nums,target,k,0);




}
int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    int k = 4;

    vector<vector<int>> result = findKsum(nums, target, k);

    for (auto& group : result) {
        cout << "[ ";
        for (int x : group) cout << x << " ";
        cout << "]" << endl;
    }
}