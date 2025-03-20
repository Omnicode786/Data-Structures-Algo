#include <iostream>

using namespace std;



void factorialparameter(int num1, int fact){
    if (num1 == 0)
    {
        cout << fact;
        return;
    }
    fact *= num1;
    factorialparameter(num1-1,fact);
}

int factorialrecursive(int n){
if (n == 1 || n == 0)
{
return 1;
}

return n * factorialrecursive(n-1);

}

int main()
{
factorialparameter(0,1);
cout <<endl;

cout << factorialrecursive(5);

}