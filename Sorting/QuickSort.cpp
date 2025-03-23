#include <iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (pivot >= arr[i] && i <= high - 1)
        {
            i++;
        }
        while (pivot < arr[j] && j >= low + 1)
        {
            j--;
        }
        if (j > i)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        QuickSort(arr,low,partitionIndex-1);
        QuickSort(arr,partitionIndex+1,high);
    }
}

int main()
{
    int arr[5] = {2, 1, 3, 5, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
  QuickSort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}



//  time complexity is nlogn