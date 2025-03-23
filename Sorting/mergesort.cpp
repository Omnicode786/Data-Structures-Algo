#include <bits/stdc++.h>

using namespace std;



void merge(int array[], int low,int mid,int high){
    vector <int> temp;
    int left  = low;
    int right = mid+1;
    while (left <= mid && right <= high)
    {
        if (array[left] <= array[right])
        {
                temp.push_back(array[left]);
                left++;
        }
        else {
            temp.push_back(array[right]);
            right++;
        }
        
    }
    while (left <= mid  )
    {
        temp.push_back(array[left]);
                left++;
    }
    while ( right <= high)
    {
        temp.push_back(array[right]);
            right++;
    }
    
for (int i = low; i <= high; i++)

{
array[i] = temp[i-low];  
}


}
void mergeSort(int array[],int low, int high){
    int mid = (low+high) / 2;
    if (low == high) return;
    mergeSort(array,low,mid);
    mergeSort(array,mid+1,high);
    merge(array,low,mid,high);


}


int main()
{
    int array[5] = {22,1,4,3,5};
    mergeSort(array,0,5);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] <<" ";
    }
    
    
}