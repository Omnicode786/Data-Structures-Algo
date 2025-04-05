#include <bits/stdc++.h>

using namespace std;


pair <int,int> TwoSum(int array[], int n, int T){
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        int moreNeeded = T-array[i];
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }
        mpp[array[i]] = i;
        
    }
    return {-1,-1};
    
}

int main(){
    int arrray[5] = {5,3,2,2,1};
    pair <int,int> twosum = TwoSum(arrray,5,4);
    cout << twosum.first << " " << twosum.second;


}