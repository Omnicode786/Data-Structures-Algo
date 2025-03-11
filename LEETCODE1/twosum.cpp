#include <iostream>
#include <vector>


using namespace std;
// two sum brite force method
  vector<int> twoSum(int nums[],int size, int target) {
 vector <int> result;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j <size; j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);

                }
            }
        }
        return result;
   
    }

    int main(){
int array[10]= {1,2,3,4,5,6,7,8,9,10};
int target = 10;
vector <int> result = twoSum(array,10,target);

cout << "indexes that sum up to " << target << ": ";
for (int i = 0; i < result.size(); i += 2) {  // Increment by 2 since we're storing pairs
    cout << "(" << result[i] << ", " << result[i + 1] << ") ";
}
    }