#include <bits/stdc++.h>

using namespace std;


vector<int> MajorityElem2(int arr[],int n){

    vector <int> list;

    int ji = 0;
    for (int i = 0; i < n; i++)
    {
        if (list.size() == 2)
        {
            return list;
        }
        int count = 0;
        if (list.empty() || list[ji] != arr[i])
        {
            for (int j = 0; j < n; j++)
            {
              if (arr[i] == arr[j])
              {
                count++;
              }
              
                
            }
        }
      
        
        if (count > n/3)
        {
            list.push_back(arr[i]);
            
        }
        
        
    }
    return list;


}
int main(){
int arr[9] = {1, 2, 2, 2, 3, 3, 3, 3, 3};
//  this is equal not majority

vector<int> answer = MajorityElem2(arr,9);
for (auto elem:answer){
    cout <<elem<<" ";
}


}