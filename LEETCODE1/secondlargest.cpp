
#include <iostream>
using namespace std;

int large(int array[], int size)
{
    int largest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (largest < array[i])
        {
            largest = array[i];
        }
    }

    return largest;
}
int secondlarge(int array[], int size)
{
    int smalllarge = -1;
    int larger = large(array, size);
    for (int i = 0; i < size; i++)
    {
        if (array[i] > smalllarge && larger > array[i])
        {
            // if (larger > array[i])
            // {
            //     smalllarge = array[i];

            // }
            smalllarge = array[i];
        }
    }
    return smalllarge;
}

int efficientSecondLargest(int array[], int size){
    int large = array[0];
    int secondlarge = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > large) // if someone else was larger than you already were now you become second largest and that other dude becomes largest
        {
            secondlarge = large; // 
            large = array[i];
        }
        
    }
    return secondlarge;
}


int main()
{
    int array[5] = {2, 33, 44, 55, 66};
    int secondLargest = secondlarge(array, 5);
    cout << secondLargest <<endl;

    int array1[5] = {2, 33, 44, 55, 66};
    cout << efficientSecondLargest(array1,5);
}