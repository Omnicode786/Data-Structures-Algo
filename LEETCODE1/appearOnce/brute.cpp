#include <iostream>

using namespace std;

int bruteappear(int  a[], int size){
int count; 
for (int i = 0; i < size; i++)
{
    count = 0;
    for (int j = 0; j < size; j++)
    {
        if (a[i] == a[j])
        {
            count++;
        }
        
    }
    if (count == 1){
        return a[i];
    }
    
}
return -1;

}

int main(){

    int a[5] = {1,2,2,3,3};
  int n = bruteappear(a,5);
  cout <<n;
}