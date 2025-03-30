#include <iostream> 

using namespace std;



int hashmap(int a[], int size){

    int maxi = a[0];
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi,a[i]);
    }
    int hash[maxi] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[a[i]] == 1)
        {
            return a[i];
        }
        
    }
    
    
return -1;

}
int main(){
    int a[5] = {1,1,2,2,3};
    int n = hashmap(a,5);
    cout <<n;


}