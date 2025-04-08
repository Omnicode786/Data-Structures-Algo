#include <iostream>
using namespace std;


void next(int array[],int n){
int lastIndex = -1;
// int nextindex = 0;
for (int i = n-2; i >= 0; i--)
{
    if (array[i] < array[i+1])
    {
        lastIndex = i;
        // nextindex = i+1;


//  my logic is actually wrong [1,3,2]

// [3,2,1]
// [2,1,3]
//  now look at this we need to find the element that is greater than the lastindex number but still has to be smaller than everyone else
//  this is why the other loop was used
        
        break;
    }
    
}
if (lastIndex == -1)
{
    for (int i = 0; i < n/2; i++)
    {
        swap(array[i],array[n-i-1]);

    }
    return;
    
}
// swap(array[lastIndex],array[nextindex]);


for (int i = n-1; i >= 0 ; i--)
{
    if (array[lastIndex] < array[i])
    {
        swap(array[lastIndex],array[i]);
    break;

    }
    
}



int start = lastIndex +1;
int end = n-1;
while (start < end)
{
    swap(array[start],array[end]);
    start++;
    end--;
}










}

int main(){

int array[4] = {1,5,7,3};
next(array,4);
for (int i = 0; i < 4; i++)
{
    cout << array[i];
}



}