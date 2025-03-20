#include <iostream>

using namespace std;


int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
    // 1st sequence fibo(3) + fibo(2)
    // fibo(3) = fibo(2) + fibo(1)
    // fibo (2) = fibo(1) + fibo(0);
    // fibo 1 = 1 fibo 0 = 0 fibo(2)return 1
    // fibo(1) = 1 directly
    // fibo(3) = 1+1 = 2
    // now fibo(4) = fibo(3) + fibo(2) so 2+1 so 3
  
}

int main(){
    cout << fibo(5);
    for (int i = 1; i <=10; i++)
    {
        cout << fibo(i) <<" ";
    }
    
}