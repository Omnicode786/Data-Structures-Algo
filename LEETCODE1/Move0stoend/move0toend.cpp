#include <bits/stdc++.h>


using namespace std;


vector<int> movezeroBrute(vector<int> &nums){
vector<int> newnums;
int size = nums.size();
for (int i = 0; i < size; i++)
{
    if (nums[i] != 0)
    {
            newnums.push_back(nums[i]);
    }
    
}
int size2 = newnums.size();
for (int i = 0; i < size; i++)
{
    if (size2 > i)
    {
        nums[i] = newnums[i];
    }
    else{
        nums[i] = 0;
    }
    
}


return newnums;


}

void opitimalmover(vector <int> &nums){
    int size = nums.size();
    int j = -1;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == 0){
            j = i;
            break;;
        }
    }
    if (j == -1) return;
    for (int i = j+1; i < size; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
        
    }
    
    
}


int main()
{
    vector <int> array ={1,0,2,0,0,3};
    // vector <int> newarray = movezeroBrute(array);
    opitimalmover(array);
for (int i = 0; i < array.size(); i++)
{
    cout <<array[i] <<" ";
}


}