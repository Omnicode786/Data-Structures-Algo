#include <iostream>
using namespace std;

void selectionSort(int array[]){
    
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i],array[j]);
            }
            
        }
               
    }
    

//  this works but is not ideal selection sort
}

void selectionSortEfficient(int array[])
{
    //  see what we have to do or a better more conventional approach is to find the minimum number first and then swapp them finally at last
    for (int i = 0; i < 5-1; i++)
    {
        int minIndex = i;
for (int j = i + 1; j < 5; j++)
{
    if (array[minIndex] > array[j])
    {
        minIndex = j;
    }
    
}
swap(array[i],array[minIndex]);

        
    }
    

}
int main()
{

    int array[5] = {2,4,1,5,3};
    int array1[5] = {2,4,1,5,3};

    selectionSort(array);
selectionSortEfficient(array1);
    for (int i = 0; i < 5; i++)
    {
        cout <<array[i]<< " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<array1[i]<< " ";
    }



}