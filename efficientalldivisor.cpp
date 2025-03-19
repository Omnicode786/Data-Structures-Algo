#include <bits/stdc++.h>

using namespace std;


int main()
{

    int number = 36;


    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            cout <<i<<" ";
            if (number/i != i) 
            {
                cout << number/i<<" ";
            }
            
        }
        
        
    }
    


}