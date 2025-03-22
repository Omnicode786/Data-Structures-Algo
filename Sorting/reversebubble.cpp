//  selection sort my method lets do dry run


#include <iostream>

using namespace std;



int main()
{
    int array[5] = {2,4,2,5,1};



    for (int i = 0; i < 5-1; i++)
    {
        for (int j = 5-1; j > i ; j--)
        {
            if (array[i] > array[j])
            {
                swap(array[i],array[j]);
            }
            
        }
        
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout <<array[i]<< " ";
    }
    
    



}


// Pass 1 (i = 0)
// Compare array[0] (2) with array[4] (1), swap → {1,4,3,5,2}

// Compare array[0] (1) with array[3] (5), no swap

// Compare array[0] (1) with array[2] (3), no swap

// Compare array[0] (1) with array[1] (4), no swap

// Pass 2 (i = 1)
// Compare array[1] (4) with array[4] (2), swap → {1,2,3,5,4}

// Compare array[1] (2) with array[3] (5), no swap

// Compare array[1] (2) with array[2] (3), no swap

// Pass 3 (i = 2)
// Compare array[2] (3) with array[4] (4), no swap

// Compare array[2] (3) with array[3] (5), no swap

// Pass 4 (i = 3)
// Compare array[3] (5) with array[4] (4), swap → {1,2,3,4,5}

// ✅ Final Sorted Array: {1,2,3,4,5}