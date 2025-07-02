#include <bits/stdc++.h>

using namespace std;

vector <int> majorityElemII(int array[], int n){
    

    vector <int> list;
    unordered_map <int,int> mapp;
    for (int i = 0; i < n; i++)
    {
        mapp[array[i]]++;
    }
    for(auto[key,freq]:mapp){
        if (freq > n/3)
        {
            list.push_back(key);
        }
        
    }
    return list;
    


}


int main(){

    int array[9] = {1,2,2,2,2,1,1,1,3};
    vector<int> list = majorityElemII(array,9);
    for(auto elem:list){
        cout <<elem<<" ";
    }


}