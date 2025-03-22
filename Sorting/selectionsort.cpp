//  selection sort my method lets do dry run


#include <iostream>

using namespace std;



int main()
{
    int array[5] = {2,3,1,5,4};
    int min = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
        swap(array[i],min);
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout <<array[i]<< " ";
    }
    
    



}