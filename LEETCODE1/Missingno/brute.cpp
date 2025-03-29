#include <iostream>

using namespace std;

int missingNo(int array[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) != array[i])
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int array[4] = {1, 2, 4, 5};
    int n = missingNo(array, 5);
    cout << n;
}