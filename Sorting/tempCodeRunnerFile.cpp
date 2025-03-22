#include <iostream>

using namespace std;

void mySort(int array[]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i],array[j]);
            }
            
        }
        
    }
}

void BubbleSort(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(array[j],array[j+1]);
            }
            
        }
        
    }
}


int main()
{

    int array[5]= {1,3,4,2,5};
    int array1[5]= {1,3,4,2,5};
    mySort(array);
    BubbleSort(array1);
    
    for (int i = 0; i < 5; i++)
    {
        cout <<array[i]<< " ";
    }

    for (int i = 0; i < 5; i++)
    {
        cout <<array1[i]<< " ";
    }    

}