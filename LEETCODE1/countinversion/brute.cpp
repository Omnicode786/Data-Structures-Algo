#include <bits/stdc++.h>
using namespace std;

int countinversion(vector<int> nums, int n){
int count = 0;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (nums[i] > nums[j]){
                count++;
            }
        }
    }
return count;

}

int main(){

vector <int> nums = {5,3,2,4,1};

int number = countinversion(nums,5);
cout << number;

}