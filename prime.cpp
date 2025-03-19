#include <iostream> 

using namespace std;



int main()
{
    int n = 17;
    int count = 0;
    for (int i = 1; i*i <= n ; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                //  this n/i gives us the second pair if the i and they are not equal then they give us plus plus
                count++;
            }
            
        }
        
    }
    if (count == 2)
    {
        cout << "It is a prime number"<<endl;
    }
    else{
        cout << "It is not a prime number"<<endl;

    }
    



}