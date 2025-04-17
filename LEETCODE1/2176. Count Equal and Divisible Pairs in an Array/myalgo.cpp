#include<bits/stdc++.h>

using namespace std;
int countPairs(vector<int>& nums, int k) {
    int size = nums.size();
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (nums[i] == nums[j] && (i*j)%k==0)
            {
                count++;
            }
            
        }
        
    }
    return count;
    

}

int main(){

vector <int> arr ={3,1,2,2,2,1,3};
int n = countPairs(arr,2);
cout <<n;


}
