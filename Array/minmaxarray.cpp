#include <iostream>


using namespace std;


int main(){


    int array[] = {1,4,5,6,3,45,8,-66,888};

    int length = sizeof(array) / sizeof(int);
    
    int max = array[0];
    int min =  array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (min > array[i])
        {
            min = array[i];
        }
        
        

    }
    

cout <<max<<" "<<min<<endl;

}