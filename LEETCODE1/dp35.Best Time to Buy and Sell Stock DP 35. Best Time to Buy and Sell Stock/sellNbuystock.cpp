#include <iostream>

using namespace std;


int maxProfiter(int array[], int size){
int mini = array[0];
int maxProfit = 0;
int cost = 0;
for (int i = 1; i < size; i++)
{
    cost = array[i] - mini;
    maxProfit = max(maxProfit,cost);
    mini = min(mini,array[i]);
}

return maxProfit;



}


int main(){

int array[6] = {7,1,5,3,6,4};
int n = maxProfiter(array,6);
cout <<n;





}