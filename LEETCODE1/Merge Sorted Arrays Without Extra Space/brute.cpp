#include <bits/stdc++.h>
using namespace std;


void mergesortedarrayswithoutspace(int arr1[],int arr2[],int n, int m){

    int index = 0;
    int left = 0;
    int right = 0;
    int arr3[n+m];
    while (left < n && right < m)
    {
        if (arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            left++, index++;
        }
        else {
            arr3[index] = arr2[right];
            right++, index++;
        }
        // okok dono ko < hona chahiye now i get it
    }
        while (left < n)
        {
            arr3[index] = arr1[left]; // why are these looops outside the first while loop?
            index++, left++;
        }
        while (right < m)
        {
            arr3[index] = arr2[right];
            right++, index++;
        }
    
    for (int i = 0; i < m+n; i++)
    {
        if (i < n)
        {
            arr1[i] = arr3[i];
        }
        else{
            arr2[i-n] = arr3[i];
        }
        
    }
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    mergesortedarrayswithoutspace(arr1, arr2, m, n);

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