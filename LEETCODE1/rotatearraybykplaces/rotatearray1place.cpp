#include <iostream>


using namespace std;


void rotate(int array[], int size){
    int temp = array[0];
    for (int i = 1; i < size; i++)
    {
        array[i-1] = array[i];
    }
    
    array[size-1] = temp;


}


int main(){

    int array[5] = {1,2,3,4,5};
    rotate(array,5);
    for (int i = 0; i < 5; i++)
    {
    cout << array[i]<<" ";
    }
    

}