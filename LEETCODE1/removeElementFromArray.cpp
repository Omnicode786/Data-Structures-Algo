#include <bits/stdc++.h>

using namespace std;
// remove all occurences of value from the given array

int removeElement(vector<int>& nums, int val) {
    int toRemove = val;
    int size = nums.size();
    for (int i = 0; i < size; i++){
        if (toRemove == nums[i]){
            nums.erase(nums.begin() + i);
            size = nums.size();
            i--;
        }
    }
return size;
}


int main(){

    vector <int> veci = {22,1,1,1,1,42,2,1,1,43};
    removeElement(veci,1);
   int size = removeElement(veci,1);
    for (int i = 0; i < size; i++)
    {
        cout << veci[i] <<" ";
    }
    

}