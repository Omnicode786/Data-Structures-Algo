#include <iostream>

using namespace std;


int main()
{
    int num1 = 9;
    int num2 = 12;
    int gcd = 0;
    for (int i = 1 ; i < min(num1,num2); i++)
    // look if you do it for max then the min one would not even work so it is useless get it
// !!!  time C = O(min(n1,n2))
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;
        }
        
    }

    //  a even more efficient one would be
    int gcd2 = 0;
    for (int i = min(num1,num2); i >= 1; i--)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd2 = i;
            break;;
        }
    //   this i way more efficient cas if you look at it it only run till the greatest one and then ignores the rest of the things   // 
    }
    //  this is much better complexity but still worst case O(still be min(n1,n2))
    
    
    cout << gcd <<endl;
    cout << gcd2 <<endl;



}
