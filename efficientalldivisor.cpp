#include <bits/stdc++.h>

using namespace std;


int main()
{

    int number = 36;


    for (int i = 1; i*i <= number; i++)
    // i <= sqrt(number); instead of this just do square on both sides so this will become i*i <=n
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