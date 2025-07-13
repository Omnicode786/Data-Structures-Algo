#include <bits/stdc++.h>

using namespace  std;


vector <vector<int>> foursum(vector <int> num,int n){

    set<vector <int>> st;
       for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
        set  <int > hash;

            for (int k = j+1; k < n; k++)
            {
                int fourth = -(num[i] + num[j] + num[k]);
                if (hash.find(fourth) != hash.end())
                {   
                    vector <int> temp = {num[i] ,num[j] , num[k], fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                 hash.insert(num[k]);
                
            }
            
        }
        
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;





}

int main() {
    vector<int> list = {1,-1,0,2,3,4,-1,0};

    vector<vector<int>> ans = foursum(list, list.size());

    for (auto& quad : ans) {
        cout << "[ ";
        for (int num : quad)
            cout << num << " ";
        cout << "]\n";
    }
}