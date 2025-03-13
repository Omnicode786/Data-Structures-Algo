#include <iostream>


//  binary search hamesha increasing ya decreasing order me lgta he
// element should be in monotonic function
using namespace std;
int main(){

int array[5] = {1,4,9,13,17};


int target = 1;
// int i = 5/2;
//  in a binary search what i have done is essentially correct but not ideal simply see this
// that we have to do half again and again 

int size = sizeof(array) / sizeof(int);
int low  = 0, high = size-1;
int found = false;
while (low <= high)
{   
    int mid = (high+low)/2;
    if (array[mid] < target)
    {
        low = mid+1; 
        //  because we need to go above mid low++ would mean it would make it 1 and i++ was right which you were doing before that only works once

    }
    else if (array[mid] > target)
    {
        high = mid - 1;
    }
    else
    {
        cout<<array[mid] <<endl;
        cout <<mid;
        found = true;
        break;
    }
   
    
    
}

if (!found)
{
    cout <<"The number was not found"<<endl;
}



return 0;


}