#include <bits/stdc++.h>
using namespace std;

vector<int> MajorityBetterHash(int array[], int n){
vector <int> list;

// unordered_map<int, int> hash;
// for (int i = 0; i < n; i++) {
//     hash[array[i]]++;
// }


// for (auto [key, freq] : hash) {
//     if (freq > n / 3) {
//         list.push_back(key);
//     }
// }


// for (int i = 0; i < n; i++)
// {
//     maxi = max(maxi,array[i]);
// }
// int hash[maxi + 1] = {0};
// for (int i = 0; i < n; i++)
// {
//     hash[array[i]]++;
// }

unordered_map<int,int> hash;
for (int i = 0; i < n; i++)
{
    hash[array[i]]++;
}


for (auto [key,freq]:hash){
    if (freq > n/3)
    {
        list.push_back(key);
    }
    
}


return list;




}

int main(){
    int arr[3] = {3,2,3};
    //  this is equal not majority
    
    vector<int> answer = MajorityBetterHash(arr,9);
    for (auto elem:answer){
        cout <<elem<<" ";
    }
    
    
    }