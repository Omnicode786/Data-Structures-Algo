#include <bits/stdc++.h>

using namespace std;

vector<int> TwoSum(int array[], int size, int target)
{

    vector<int> result;

    int i = 0, j = size - 1;
    while (i < j)
    {
        if (array[i] + array[j] > target)
        {
            j--;
        }
        else if (array[i] + array[j] < target)
        {
            i++;
        }
        else
        {
            result.push_back(array[i]);
            result.push_back(array[j]);
            i++;
            j--;
        }
    }
    return result;
}

int main(){

    int array[4] = {1,2,2,3};
    vector <int> result = TwoSum(array,4,4);
    for (auto it:result){

        cout <<it<<" ";
    }
}