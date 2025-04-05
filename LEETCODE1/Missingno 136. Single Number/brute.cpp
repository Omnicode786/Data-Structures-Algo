#include <iostream>

using namespace std;

int missingNo(int array[], int n)
{

    for (int i = 0; i < n-1; i++)
    {
        if ((i + 1) != array[i])
        {
            return i + 1;
        }
    }
    return n;
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    int n = missingNo(array, 5);
    cout << n;
}