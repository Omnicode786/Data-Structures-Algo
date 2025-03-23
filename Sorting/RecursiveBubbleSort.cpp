#include <bits/stdc++.h> 
using namespace std;


void BubbleSort(int arr[],int start,int end){
    bool swapped = false;
    if (start >= end)
    {
        return;
    }
    for (int i = 0; i < end; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            swapped = true;
        }
    }
    if (!swapped) return;
  
    BubbleSort(arr,start,end-1);


}

int main()
{
    int arr[5] = {1,2,3,4,5};
    BubbleSort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }
    

}