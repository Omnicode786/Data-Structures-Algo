#include <iostream>

using namespace std;


int MajorBetter(int a[], int n){
int maxi = a[0];
for (int i = 0; i < n; i++)
{
    maxi = max(maxi,a[i]);
}
cout<<maxi;
int hash[maxi] = {0};
for (int i = 0; i < n; i++)
{
    hash[a[i]]++;
}
for (int i = 1; i <= maxi; i++)
{
    if (hash[i] > n/2)
    {
        return i;
    }
    
}
return -1;
}


int main(){

    int a[5] = {5,5,5,2,3};
    int n = MajorBetter(a,5);
    cout <<n;
}