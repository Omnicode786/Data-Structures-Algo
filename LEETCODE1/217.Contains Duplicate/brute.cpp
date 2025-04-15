
#include <bits/stdc++.h>
using namespace std;


        bool containsDuplicate(vector<int>& nums) {
                int size = nums.size();
                int zor = 0;
                for (int i  = 0; i < size; i++){
                    zor = nums[i];
                    for(int j = 0; j < size; j++){
                        if ((zor^nums[j])==0&&i!=j){
                            return true;
                        }
    
                    }
                }
              
                return false;
    
    
        }

        
        int main(){
            vector<int> array= {1,2,3,4,1};
            cout<<containsDuplicate(array);
        }