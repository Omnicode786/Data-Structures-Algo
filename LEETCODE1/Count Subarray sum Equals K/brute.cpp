#include <bits/stdc++.h>


using namespace std;


int CountLongestSubArray(int arr[],int n,int k){


    int count = 0;
    int maxcount = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count++;
            }
            
        }
        
    }
    

return count;

}

int main(){

    int arr[10] = {1,2,3,-3,1,1,1,4,2,-3};
    int n = CountLongestSubArray(arr,10,3);
    cout<<n;

}