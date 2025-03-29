#include <iostream>

using namespace std;

int missinNoHash(int array[],int n){
    int hashSize = n+1;
    int hash[hashSize] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[array[i]]++;
    }
    for (int i = 1; i < hashSize; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
        
    }
    return -1;
}


int main(){

int array[4] = {1,3,4,5};
int n = missinNoHash(array,5);
cout << n;


}