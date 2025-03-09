#include <iostream>

using namespace std;

void printarray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout <<array[i]<<endl;
    }
}


int main(){


    int array[] = {1,2,3,4,5,6,7,8,9,10};
    //  this way array just another address remmeber this always
    cout<<array<<endl;

    int size = sizeof(array) / sizeof(int);
    
    printarray(array,size);


//  if we do till full length then it basically gets reversed onece again so what will be it use

    for (int i = 0; i < size / 2; i++)
    {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
    
    printarray(array,size);

    





}