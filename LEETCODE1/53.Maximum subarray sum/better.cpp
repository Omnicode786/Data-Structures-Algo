#include <iostream>

using namespace std;


int MaxSubarraySum(int a[],int n){

int sum = 0;
int maxsum = INT_MIN;
for (int i = 0; i < n; i++)
{
    sum = 0;
    for (int j = i; j < n; j++)
    {
        sum += a[j];

    }
    maxsum = max(maxsum,sum);
}

return maxsum;

}

int main(){


    int arr[10] = {1,2,3,4,7,-4,2,6,3,2};
    int n = MaxSubarraySum(arr,10);
    cout <<n; 
}