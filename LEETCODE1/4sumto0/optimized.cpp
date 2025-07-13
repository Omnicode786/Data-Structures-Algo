#include <bits/stdc++.h>

using namespace std;


vector <vector< int>> foursum(vector<int> num, int n, int target){
vector < vector <int> > ans;

sort(num.begin(), num.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && num[i] == num[i-1]) continue;
        for (int j = i+1; j < n; j++)
        {
            if (j > i + 1 && num[j] == num[j-1]) continue;

            int k = j + 1;
            int l = n-1;
            while (k < l)
            {
                   
            int quad = num[i] + num[j] + num[k] + num[l];
            if (quad > target)
            {
                l--;
            }
            else if (quad < target){
                k++;
            }
            else{
                ans.push_back({num[i],num[j],num[k],num[l]});
                while (k < l && num[k] == num[k+1]) k++;
                while (k < l && num[l] == num[l-1]) l--;
                k++;
                l--;

            }
            }
            
            

        }
        
    }
    

    return ans;

}

int main(){





    vector<int> list = {1,-1,0,2,3,4,-1,0};


int n = list.size();
vector<vector<int>> ans = foursum(list,n, 0);
   for (auto& triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }



}