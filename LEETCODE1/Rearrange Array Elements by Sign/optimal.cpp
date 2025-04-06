#include<iostream>

using namespace std;

void Rearrange(int arr[], int n,int arranged[]){

int posI = 0;
int negI = 1;
for (int i = 0; i < n; i++)
{
    if (arr[i] < 0){
        arranged[negI] = arr[i];
        negI += 2;
    }
    else{
        arranged[posI] = arr[i];
        posI += 2;
    }
}


}

int main(){

int arr[6] = {-2,1,2,3,-5,-7};
int arranged[6];
Rearrange(arr,6,arranged);
for (auto it:arranged){
    cout << it<<" ";
}


}