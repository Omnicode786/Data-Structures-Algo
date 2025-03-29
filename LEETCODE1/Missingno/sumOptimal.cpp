#include <iostream>


using namespace std;


int sumMissingNo(int array[], int n){
    int sum1 = (n*(n+1)) / 2;
int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += array[i];
    }
    if (sum1 != sum2)
    {
        return (sum1 - sum2);
    }
    return -1;
}

int main(){
int array[5] = {1,3,4,5};
int n = sumMissingNo(array,5);
cout << n;


}