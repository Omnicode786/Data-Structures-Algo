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


//  further optimization is made by adding a boolean rem this
void BubbleSort(int array[])
{
    bool swapp = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(array[j],array[j+1]);
                swapp = true;
            }
            
        }
        if (!swapp)
        {
            //  so now if there was no swapped happened that means that it is already sorted so instead of reduntly going again and again for no use we just go and break out of the loop as  we know we are already sorted
            break;
        }
        cout << "Swapped ";
        
        //  worst is O(N^2) but best isO(n)
    }
}


int main()
{

    int array[5]= {1,3,4,2,5};
    int array1[5]= {1,2,7,4,5};
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