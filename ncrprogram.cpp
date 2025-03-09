#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n)
{

    //  alwasys remember base case in recursion
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r){
    if (r == 0 || r == n)
    {
        return 1;
    }
    
    int answer = (factorial(n)/(factorial(r)*factorial(n-r)));
    return answer;

}




int main()
{

    int fact = factorial(5);
    cout << fact<<endl;
    cout << nCr(10,5);
}