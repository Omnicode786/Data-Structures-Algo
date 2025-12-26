#include <bits/stdc++.h>

using namespace std;



int Search(vector<int> nums, int target){
int size = nums.size();
int high = size-1;
int low = 0;
int index = 0;
while (low<=high){
    int mid =  (high +low)/2;
    if (nums[mid] ==  target) return mid;
    else if (nums[mid] < target){
        low = mid+1;

    }
    else{
        index = mid+1;
        high = mid-1;
    }


}
return low;



}

int main(){

    vector<int> nums = {1,3,4,5};
    cout<<Search(nums, 7);


}