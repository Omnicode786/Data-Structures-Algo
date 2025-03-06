#include <iostream>
#include <cmath>

using namespace std;

int powerof3(int n)
{

   

    if (n <= 0)
    {
        return -1;
    }

    int answer = 1;
    for (int i = 0; i <= 30; i++)
    {

        if (answer == n)
        {
            return true;
        }
        if (answer < INT32_MAX / 3)
        {
            answer *= 3;
        }
    }
    return false;
}

int main()
{

    int n;
    cout << "ENETER The number: ";
    cin >> n;
    long long int check = (long long)n;
    if (check > INT32_MAX)
    {
        return -2;
    }
    
    cout << powerof3(n);
}