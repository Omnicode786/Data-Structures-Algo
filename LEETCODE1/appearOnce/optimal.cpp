#include<iostream>

using namespace std;

int Appear(int a[], int size){
    int once = 0;
    for (int i = 0; i < size; i++)
    {
        once ^= a[i];
    }
    return once;
    


}
int main(){
    int a[8] = {1,1,1,2,2,3,4,4};
    int n = Appear(a,8);
    cout <<n;


}