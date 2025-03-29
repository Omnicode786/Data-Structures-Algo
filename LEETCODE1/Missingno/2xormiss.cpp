#include<iostream>

using namespace std;

int xormiss2(int a[], int n){
int xor1 = 0 , xor2 = 0;
for (int i = 0; i < n-1; i++)
{
    xor2 = xor2 ^ a[i];
    xor1 = xor1 ^ (i+1);
}
xor1 = xor1 ^ n;
return xor1^xor2;
}
int main(){
int a[4] = {1,2,3,5};
int n = xormiss2(a,5);
cout<<n;


}