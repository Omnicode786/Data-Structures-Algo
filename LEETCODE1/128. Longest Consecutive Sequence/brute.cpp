#include <iostream>


using namespace std;

int Longest(int arr[], int n){

    int longest = 1;
    int count  = 0;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        count = 1;

        bool found = true;
        while (found)
        {
            for (int j = 0; j < n; j++)
            {
                found = false;
                if (arr[j] == x+1)
                {
                    count++;
                    x = x+1;
                    found = true;
                    break;
                }
                
            }
        }
        

    longest = max(longest,count);
        
    }
    return longest;


}

int main(){

    int arr[10] = {22,33,3,10,2,1,5,4,9,11};
int n = Longest(arr,10);
cout <<n;


}