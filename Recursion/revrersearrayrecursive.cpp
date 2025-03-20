#include <iostream>

using namespace std;


//  with two varaibels

void reversearrray(int arr[], int l, int r){
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    reversearrray(arr, l+1,r-1);
    
}

void reversearray1(int arr[],int size, int pointer){
    if (pointer >= size - pointer - 1)
    //  i >= n/2 will work just fine too
    {
        return;
    }
    swap(arr[pointer],arr[size - pointer -1]);
    reversearray1(arr, size, pointer+1);
}


int main()
{
    int arr[5] = {1,2,3,4,5};
for (int i = 0; i < 5; i++)
{
    cout << arr[i] <<" ";
}
cout <<endl;
reversearrray(arr,0,4);
for (int i = 0; i < 5; i++)
{
    cout << arr[i] <<" ";
}
cout <<endl;
int arr1[5] = {1,2,3,4,5};
for (int i = 0; i < 5; i++)
{
    cout << arr1[i] <<" ";
}
cout <<endl;
reversearray1(arr1, 5, 0);
for (int i = 0; i < 5; i++)
{
    cout << arr1[i] <<" ";
}
cout <<endl;

}