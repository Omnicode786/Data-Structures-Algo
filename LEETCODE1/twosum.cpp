#include <iostream>
#include <vector>


using namespace std;
// two sum brite force method
  vector<int> twoSum(int nums[],int size, int target) {
 vector <int>
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j <size; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};  
                }
            }
        }
        return {};
   
    }

    int main(){


    }