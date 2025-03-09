#include <iostream>

using namespace std;

bool existinArray(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 33, 33, 22, 11, 323, 2, 2, 1};

    int unique[50];    // No initialization
    int dublicate[50]; // No initialization

    int duplicateIndex = 0;
    int uniqueIndex = 0;

    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (existinArray(unique, uniqueIndex, array[i]))
        {
            if (!existinArray(dublicate, duplicateIndex, array[i]))
            {
                dublicate[duplicateIndex++] = array[i];
            }
        }
        else
        {
            unique[uniqueIndex++] = array[i];
        }
    }

    cout << "Dublicates: ";
    printarr(dublicate, duplicateIndex);

    cout << "Uniques: ";
    printarr(unique, uniqueIndex);
}
