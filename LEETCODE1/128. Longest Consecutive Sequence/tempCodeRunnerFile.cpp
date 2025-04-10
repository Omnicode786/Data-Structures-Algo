#include <bits/stdc++.h>

using namespace std;

        int longestConsecutive(vector<int>& nums) {
           int n = nums.size();
           if (n == 0) return 0;
           int longest = 1;
           int count = 0;
           unordered_set <int> st;
           for (int i = 0; i < n; i++){
            st.insert(nums[i]);
           } 
           for (auto it:st){
            if (st.find(it-1) == st.end()){
                count = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x = x+1;
                    count++;
                }
            longest = max(longest,count);
            }
    
    
           }
           return longest;
        }
        int main(){
         vector <int> arr = {22,33,3,10,2,1,5,4,9,11};
        int n = longestConsecutive(arr,10);
        cout << n;
        
        }