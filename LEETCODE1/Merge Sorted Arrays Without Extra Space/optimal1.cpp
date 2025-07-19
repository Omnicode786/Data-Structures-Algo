#include <bits/stdc++.h>
using namespace std;

void mergesortedarrays(int arr1[],int arr2[], int m, int n){
    int left = m-1;
    int right = 0;
    while (left >= 0 && right < n)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left],arr2[right]);
        }
        else{
            break;
        }
        
    }
    
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);

    
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    mergesortedarrays(arr1, arr2, m, n);

    cout << "Merged array without extra space: ";
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}