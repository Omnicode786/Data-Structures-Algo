#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        int size = nums.size();
        for (int i = 0; i < nums.size(); i++){
            if (target == nums[i]){
                return i;
            }
            if (target < nums){
                return index = i;
            }
            else if (target > nums){
                index = i + 1;
            }
        }


    }
};