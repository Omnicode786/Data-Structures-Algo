#include <iostream> 

using namespace std;


void print(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        for (int space = 0; space <= (n+4) - 2*i ; space++)
        {
            cout <<" ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout<<k;
        }
        
        cout <<endl;
        
        
    }
}


int main()
{

  
    print(5);


}