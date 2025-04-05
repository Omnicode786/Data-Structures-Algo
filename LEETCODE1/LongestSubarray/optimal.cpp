#include <iostream>

using namespace std;


int Longest(int array[], int n, int k){
    int i = 0, j = 0;
    int sum = array[0];
int maxL = 0;
    while (j < n)
    {
        while (i <= j && sum > k)
        {
            sum -= array[i];
            i++;
        }
        if (sum == k)
        {
            maxL = max(maxL,j-i+1);
        
        }
        j++;
        if (j < n)

        {
            sum += array[j];
        }
        
        
        
    }
    return maxL;


// T.C = O(2N)
}

int main(){

int array[10] = {1,2,3,0,1,1,1,1,3,3};
int n = Longest(array,10,6);
cout <<n;


}