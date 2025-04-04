#include <iostream>

using namespace std;

bool Check(int a[], int n){
int count = 0;
for (int i = 0; i < n; i++)
{
    if (a[i] > a[(i+1) % n]) count++;
}
return count <= 1;




}
int main(){
    int a[5] = {3,4,3,1,2};
    cout << Check(a,5);
}