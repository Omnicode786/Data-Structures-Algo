#include <bits/stdc++.h>

using namespace std;

vector<int> Leader(int a[],int n){
vector <int> result;
    int maxi = INT_MIN;
    for (int i = n-1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            result.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }
    

return result;

}

int main(){
int a[6] = {10,32,4,5,54,2};
vector <int> result = Leader(a,6);
for(auto c:result){
    cout <<c<<" ";
}


}