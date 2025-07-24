#include <bits/stdc++.h>

using namespace std;

int maxprodsubarray(int arr[], int n){
    int maxprod = INT_MIN;
    int prefix = 1;
    int suffix = 1;
    for (int i = 0; i < n; i++)
    {
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;

        prefix *= arr[i];
        suffix *= arr[n-i-1];
        maxprod = max (maxprod, max(suffix,prefix));

    }
    
return maxprod;


}

int main() {
    int arr[] = {2, -2, 0, 4, 0};
    int n = 5;
int maxi = maxprodsubarray(arr,n);
cout<<maxi;


}