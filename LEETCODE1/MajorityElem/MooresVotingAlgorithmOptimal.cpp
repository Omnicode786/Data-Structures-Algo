#include <iostream>

//  moores voting algo


using namespace std;


int Optimal(int a[], int n){

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
    
    


}
int main(){

    int a[5] = {2,2,5,2,3};
    int n = Optimal(a,5);
    cout <<n;
}