#include <bits/stdc++.h>

using namespace std;


void swapifGreater(int arr1[],int arr2[], int ind1, int ind2){
    if (arr1[ind1] > arr2[ind2])
    {
    swap(arr1[ind1],arr2[ind2]);
    }
    

}

void merge(int arr1[],int arr2[],int m, int n){
    int len = m + n;
    int gap = ceil(len / 2);
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
              if (left < m && right >= m)
        {
            swapifGreater(arr1,arr2,left,right-m);
        }
        else if (left >=m){
                swapifGreater(arr2,arr2,left - m, right - m);
        }
        else{
            swapifGreater(arr1,arr1,left,right);
        }
        left++;
        right++;
        }
        if (gap == 1)
        {
            break;
        }
        gap = ceil(gap / 2);
    }
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, m, n);

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