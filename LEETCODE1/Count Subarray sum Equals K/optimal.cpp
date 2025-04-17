#include <bits/stdc++.h>

using namespace std;


int CountLongestSubArray(int arr[],int n,int k){
map<int,int> prefixMap;

int sum = 0;
int count = 0;
prefixMap[0] = 1;
for (int i = 0; i < n; i++)
{
    sum += arr[i];
  
    int rem = sum - k;
    count += prefixMap[rem];
    prefixMap[sum] += 1;

    
}

return count;


}
int main(){

    int arr[10] = {1,2,3,-3,1,1,1,4,2,-3};
    int n = CountLongestSubArray(arr,10,3);
    cout<<n;

}