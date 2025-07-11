#include <bits/stdc++.h>


using namespace std;


vector<vector<int>> threesum(vector <int> num,int n){


    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (num[i] + num[j] + num[k] == 0)
                {
                    vector <int> temp = {num[i],num[j],num[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }

                
            }
            
        }
        
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;




}


int main(){


vector <int> list = {1,-1,2,-1,2,3,-4,5,-5,4};

vector<vector<int>> ans = threesum(list,10);
   for (auto& triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }



}