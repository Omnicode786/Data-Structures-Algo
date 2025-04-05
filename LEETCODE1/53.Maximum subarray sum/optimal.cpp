#include <iostream>

using namespace std;

// Kadanes Algorithm!!

int MaximumSubArray(int arr[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
        maxSum = max(maxSum,sum);
        if (sum < 0) sum = 0;
        
    }
    
    // if (maxSum < 0)
    // {
    //     maxSum = 0;
    // }
    return  maxSum;
    


}

int main(){


    int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
    int n = MaximumSubArray(arr,8);
    cout <<n; 
}
