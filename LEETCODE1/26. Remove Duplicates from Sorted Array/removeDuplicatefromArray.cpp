#include <bits/stdc++.h>
using namespace std;

int removeDuplicateBetter(vector<int> &nums)
{

    int i = 0;

    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}
int removeDuplicatesMYMethod(vector<int> &nums)
{
    int i = 0;
    int size = nums.size();
    while (i < size)
    {
        int j = i + 1;
        while (j < size)
        {
            if (nums[i] == nums[j])
            {
                nums.erase(nums.begin() + j);
                size = nums.size();
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    int k = nums.size();
    return k;
}

int RemoveElemSET(vector <int> &nums){
    set <int> set1;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
            set1.insert(nums[i]);
    }
    int index = 0;
    for (auto it:set1){
        nums[index] = it;
        index++;
    }
    return index;
    
}

int main()
{
    vector<int> veci = {1, 2, 2, 3};
    vector<int> veci2 = {1, 2, 2, 3};
    removeDuplicateBetter(veci2);
    removeDuplicatesMYMethod(veci);

    for (int i = 0; i < veci.size(); i++)
    {
        cout << veci[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < veci2.size(); i++)
    {
        cout << veci2[i] << " ";
    }
    cout <<endl;
vector <int> veci3 = {1,2,2,3};
int sizer = RemoveElemSET(veci3);
for (int i = 0; i < sizer; i++)
{
    cout << veci[i] <<" ";
}


}