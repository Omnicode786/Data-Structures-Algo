//  pyramid pattern

#include <iostream>

using namespace std;

int main()
{


    //  just ammend pattern 6 and 7
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5-i-1; k++)
        {
           cout <<" ";
        }
        

        for (int j = 0; j < (i*2) +1; j++)
        {
            cout <<"*";
        }
        for (int k = 0; k < 5-i-1; k++)
        {
           cout <<" ";
        }
        cout <<endl;
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * 5 - ((i * 2) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}