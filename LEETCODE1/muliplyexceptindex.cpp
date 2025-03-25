#include <iostream>
using namespace std;


void intmultiply(int array1[],int array[], int size, int n){
    int answer;
    int index = n;
    for (int i = 0; i < size; i++)
    {
     answer = 1;

        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                answer *= array[j];
            }
        }
        
       array1[i] = answer;
        
    }
}


int main()
{
    int array[4] = {1,2,3,4};
 int array1[4] = {0};
intmultiply(array1,array,4,3);
 for (int i = 0; i < 4; i++)
    {
        cout << array1[i] <<" ";
    }
    
    
}