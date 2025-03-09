#include <iostream> 
using namespace std;

void swap(int arr[], int size){
    for(int i = 1; i < size; i = i+2){
        swap(arr[i], arr[i-1]);
      }
}



int main(){


    int array[] = {1,2,3,4,5,6,7};

    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size-1; i+=2)
    {
        //  if here we set i to 0 we can do like that as well
        int temp  = array[i]; 
        array[i] = array[i+1]; 
        array[i+1] = temp; 
        // swap(array[i],array[i+1]);
// we can also simply do that

    }
    

for (int i = 0; i < size; i++)
{
    cout <<array[i];
    cout<<endl;
}
swap(array, size);

for (int i = 0; i < size; i++)
{
    cout <<array[i];
    cout<<endl;
}

}