#include <bits/stdc++.h>

using namespace std;



vector <vector<int>> threesum(vector<int> list, int n){

    set<vector<int>> st;
   
    for (int i = 0; i < n; i++)
    {
         set <int> hash;
        for (int j = i+1; j < n; j++)
        {
            int third = -(list[i] + list[j]);
             if (hash.find(third) !=hash.end())
                {
                    vector <int> temp = {list[i],list[j], third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                
                    hash.insert(list[j]);
                
                
        }
        
    }
     vector<vector<int>> ans(st.begin(),st.end());
    return ans;



}


int main(){


vector <int> list ={-1, 0, 1, 2, -1, -4};

vector<vector<int>> ans = threesum(list,6);
   for (auto& triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }



}