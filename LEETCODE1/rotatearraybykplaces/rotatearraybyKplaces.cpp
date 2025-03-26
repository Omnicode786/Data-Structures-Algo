#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void rotateKplaces(int array[], int size, int k)
{ 
    k = k % size;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = array[i];
    }

    for (int i = k; i < size; i++)
    {
        array[i - k] = array[i];
        if ((i - k) > k)
        {
            int j = 0;
            array[i] = temp[j];
            j++;
        }
    }
    int index = 0;
    for (int i = k + 1, j = 0; i < size; i++, j++)
    {
        array[i] = temp[i + k - size];
        index = i + k - size;
    }
}

void reversearray(int array[], int start,int end){
    for (int i = start; i < (start + end) / 2; i++)
    {
        swap(array[i], array[end- (i - start) -1]);
    }
    
}

void efficient (int array[], int size, int k){
    k = k % size;
    reversearray(array,0,k);
    reversearray(array,k,size);
    reversearray(array,0,size);
    for (int i = 0; i < size; i++)
    {
        cout <<array[i]<<" ";
    }
    

}



int main()
{
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // rotateKplaces(array, 9, 4);
    // // reversearray(array,0,9);
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << array[i] << " ";
    // }
    efficient(array,9,4);

}