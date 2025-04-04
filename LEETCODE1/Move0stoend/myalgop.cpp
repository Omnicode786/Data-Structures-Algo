#include <iostream>
using namespace std;

void Move0stoEnd(int array[], int size){
    int i = 0, j = size-1;
    while (i < j)
    {
        if (array[i] == 0 && array[j] != 0)
        {
            swap(array[i],array[j]);
            i++;
            j--;
        }
        if (array[i] != 0) i++;
        if (array[j] == 0) j--;        
        
    }
    



}

int main(){

int a[5] = {0,0,1,22,1};
Move0stoEnd(a,5);
for(auto it:a){
    cout <<it;
}


}