//  selection sort my method lets do dry run


#include <iostream>

using namespace std;



int main()
{
    int array[32] = {2,3,1,5,4,321,1,21,3,32,21,33,31,23,22,12,14,532,213,32,32,3,4,2,4,5,2,421,4,44,2,213};
    for (int i = 0; i < 32-1; i++)
    {
        for (int j = 32-1; j > i ; j--)
        {
            if (array[i] > array[j])
            {
                swap(array[i],array[j]);
            }
            
        }
        
        
    }

    for (int i = 0; i < 32; i++)
    {
        cout <<array[i]<< " ";
    }
    
    



}