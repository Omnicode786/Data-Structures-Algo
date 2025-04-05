#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int xormiss2(int a[], int n){
int xor1 = 0 , xor2 = 0;
for (int i = 0; i < n; i++)
{
    xor2 = xor2 ^ a[i];
    xor1 = xor1 ^ (i+1);
}
return xor1^xor2;
}
int main(){
int a[4] = {0,2,3,4}; // must have 0
int n = xormiss2(a,4);
cout<<n;


}


// int xor1 = 0 , xor2 = 0;
// int n = nums.size();
// for (int i = 0; i < n-1; i++)
// {
// xor2 = xor2 ^ nums[i];
// xor1 = xor1 ^ (i+1);
// }
// xor1 = xor1 ^ n;
// return xor1^xor2;

//  works perfectly fine for values > 0 if even one 0 comes then fails