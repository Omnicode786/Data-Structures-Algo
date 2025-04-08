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

// Initially, I considered using `nextindex` directly inside this loop to avoid
            // needing an extra loop to find the smallest larger element. However, that approach
            // doesn't work in some cases. Consider this example:
            // 
            // [1, 3, 2] -> We find that 1 < 3, so lastIndex would be set to 0.
            // But now, the element to swap with 1 isn't simply the immediate next element (which is 3).
            // We need to find the next element that is **greater than 1 but still the smallest possible**
            // to ensure the next permutation is the "next" one.
            //
            // This is why the extra loop is required: we need to find the smallest number that is greater
            // than `array[lastIndex]`, which could be further along the array, not just the next index.
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