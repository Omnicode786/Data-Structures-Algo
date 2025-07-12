#include <bits/stdc++.h>


using namespace std;



vector <vector<int>> threesum(vector<int> num, int n){

sort(num.begin(),num.end());

vector <vector<int>> ans;
for (int i = 0; i < n - 2; i++)
{if (i > 0 && num[i] == num[i - 1]) continue;
    int start = i+1;
    int end = n-1;

    while (start < end)
    {
    if (num[i]+num[start]+num[end] < 0)
    {
        start++;
    }
    else if (num[i]+num[start]+num[end] > 0){
        end--;
    }
    else{
        ans.push_back({num[i], num[start], num[end]});
        while (start < end && num[start] == num[start+1]) start++;
        while (end > start && num[end] == num[end-1]) end++;
        
        start++;
        end--;
    }
    }
    

    
}

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





