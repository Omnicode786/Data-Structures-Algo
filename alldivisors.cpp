#include <iostream>
using namespace std;


int main()
{
    int number = 36;
    for (int i = 1; i <= number; i++)
    {
        if ((number % i) == 0)
        {
            cout << i <<" ";
        }

        
    }
    cout <<endl;
    



}