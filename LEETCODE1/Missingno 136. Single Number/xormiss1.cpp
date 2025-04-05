#include <iostream>


using namespace std;


int xormiss(int a[], int n){
for (int i = 0; i < n-1; i++)
{
    if (((i+1)^a[i]) != 0)
    {
        return i+1;
    }
    
}
return n;



}

int main(){

    int a[4] = {1, 2, 4, 5};
    int n = xormiss(a, 3);
    cout << n;
}