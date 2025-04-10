#include <iostream>

using namespace std;


int Longest(int arr[], int n){
int maxconsec = 1;
int consecutive = 1;
for (int i = 1; i < n; i++)
{
    if (arr[i] == arr[i - 1] + 1) {
        consecutive++;
    }
    else if (arr[i] != arr[i - 1]) {
        consecutive = 1;  // reset if not duplicate, but not consecutive
    }
    maxconsec = max(maxconsec,consecutive);
    
}

return maxconsec;

}
int main(){
    
int arr[19] = {1,2,4,5,6,7,8,9,10,11,12,13,14,10,11,12,13,14,15};
int n = Longest(arr,19);
cout << n;

}