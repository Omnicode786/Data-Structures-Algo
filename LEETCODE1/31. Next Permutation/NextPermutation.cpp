
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int lastindex = -1;
        int Nextindex = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                lastindex = i;
                Nextindex = i + 1;
                break;
            }
        }
        if (lastindex == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[lastindex] < nums[i])
            {
                swap(nums[lastindex], nums[i]);
                break;
            }
        }
        reverse(nums.begin() + lastindex + 1, nums.end());
    }
};

int main()
{
    Solution solution;

    // Create a vector of integers
    vector<int> nums = {1, 2, 3};

    // Call the nextPermutation function
    solution.nextPermutation(nums);

    // Output the result
    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}