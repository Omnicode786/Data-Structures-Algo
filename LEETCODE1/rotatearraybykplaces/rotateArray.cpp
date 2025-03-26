#include <iostream> 
using namespace std;


void rotate(int array[], int size, int k){
    k = (k%size);
    int temp[k+1];
    for (int i = 0; i < k+1; i++)
    {
        temp[i] = array[i];
        cout <<temp[i] <<endl;
    }
    
    for (int i = k + 1; i < size; i++)
    {
        array[i-k - 1] = array[i];

    }
    for (int i = 0; i < 7; i++)
{
    cout <<array[i]<<" "<<endl;
}
    for (int i = k+1; i <= size; i++)
    {
        array[i-1] = temp[i+k -size];
    }
    
    
}


int main(){

int nums[7] = {1,2,3,4,5,6,7};
int k  = 3;
rotate(nums,7,3);
for (int i = 0; i < 7; i++)
{
    cout <<nums[i]<<" ";
}


}