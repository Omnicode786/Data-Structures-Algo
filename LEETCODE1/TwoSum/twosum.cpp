#include <iostream>
#include <vector>


using namespace std;
// two sum brite force method
  vector<int> twoSum(int nums[],int size, int target) {
 vector <int> result;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j <size; j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(nums[i]);
                    result.push_back(nums[j]);

                }
            }
        }
        return result;
   
    }

    int main(){
int array[5]= {2,4,2,5,-1};
int target = 4;
vector <int> result = twoSum(array,5,target);
for (auto it:array){
    cout<<it <<" ";
}
cout<< endl;


cout << "indexes that sum up to " << target << ": ";
for (int i = 0; i < result.size(); i += 2) {  // Increment by 2 since we're storing pairs
    cout << "(" << result[i] << ", " << result[i + 1] << ") ";
}
    }