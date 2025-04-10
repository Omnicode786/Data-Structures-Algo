#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#include <algorithm>
//  it has to be sorted

int longest(int arr[],int n){

    sort(arr, arr + n); // Sort the array first
    int count = 0;
    int longer = 1;
    int lastSmaller = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = arr[i];
        }
        else if (lastSmaller != arr[i])
            {
                count = 1;
            lastSmaller = arr[i];
        }
        
        longer = max(longer,count);
    }
    return longer;




}

int main(){
    int arr[10] = {22,33,3,10,2,1,5,4,9,11};
int n = longest(arr,10);
cout << n;

}