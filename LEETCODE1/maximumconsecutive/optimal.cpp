#include <iostream>
using namespace std;
int maxconsercutive(int arr[], int size)
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        if (!arr[i])
            count = 0;
        if (count > max)
            max = count;
    }
    return max;
}

int main()
{
    int a[10] = {1, 0, 1, 1, 1, 1, 0, 1, 1, 0};
    int n = maxconsercutive(a, 10);
    cout << n;
}