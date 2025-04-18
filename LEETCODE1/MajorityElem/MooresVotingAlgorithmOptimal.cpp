#include <iostream>

//  moores voting algo


using namespace std;


int Optimal(int a[], int n){

//     This loop selects a potential majority element (stored in elem).
// But at this stage, we don’t know if it actually appears more than n/2 times — we're just guessing based on the voting logic.
    int count = 0, elem;
    for (int i = 0; i < n; i++)
    {
        //  this is moores algorithm
        if (count == 0)
        {
            elem = a[i];
            count = 1;
        }
        else if(elem == a[i]) count++;
        else count--;
    }
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (elem == a[i])
        {
            count2++;
        }
        
    }
    if (count2 > n/2)
    {
     return elem;
    }
    
    return -1;
    
//     This second loop verifies whether the guessed element (elem) is actually the majority by counting how many times it occurs.

// If it appears more than n/2 times, we return it — otherwise, return -1.


}
int main(){

    int a[5] = {2,2,5,2,3};
    int n = Optimal(a,5);
    cout <<n;
}