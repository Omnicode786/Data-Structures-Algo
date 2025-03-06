#include<iostream>
#include <cmath>

using namespace std;


int main(){

    long long int n = 31381059609;
    int i;
    for (i = 0; n > 1; i++)
    {
        if (n%3 != 0)
        {
            return 0;
        }
        
        n = n/3;

    }
    
    cout <<i;



}