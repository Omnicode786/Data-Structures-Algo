#include <iostream>
using namespace std;

int longest(int arr[],int n){

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
        else{
            count = 1;
            lastSmaller = arr[i];
        }
        
        longer = max(longer,count);
    }
    return longer;




}

int main(){
    int arr[19] = {1,2,4,5,6,7,8,9,10,11,12,13,14,10,11,12,13,14,15};
int n = longest(arr,19);
cout << n;

}