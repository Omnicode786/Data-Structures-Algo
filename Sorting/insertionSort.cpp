#include <iostream>


using namespace std;


int main()
{


    int array[5] = {5,3,2,4,1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; (j > 0 )&&(array[j-1] > array[j]) ; j--)
        {
            swap(array[j-1],array[j]);

        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout <<array[i]<< " ";
    }

    
}