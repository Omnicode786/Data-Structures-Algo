#include <bits/stdc++.h>

using namespace std;



vector<vector<int>> foursum(vector<int> num, int n){


    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    if (num[i] + num[j] + num[k] + num[l] == 0)
                    {
                        vector <int> temp = {num[i] , num[j] , num[k] , num[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    
                }
                
            }
            
        }
        
    }
    
    vector<vector<int>> ans(st.begin(),st.end());
return ans;


}


int main(){


vector<int> list;
for (int i = 0; i < 50; i++) list.push_back(-1);
for (int i = 0; i < 50; i++) list.push_back(1);

int n = list.size();
vector<vector<int>> ans = foursum(list,n);
   for (auto& triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }



}