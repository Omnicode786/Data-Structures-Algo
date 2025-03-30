#include <bits/stdc++.h>
using namespace std;


int mapversion(int array[], int size){


unordered_map<int, int> mapper;
for (int i = 0; i < size; i++)
{
    mapper[array[i]]++;
}

// nlogm for ordered or normal map and logn^n for unordermap 
//  but for most cases unordered will be efficiaent and willl provide O(n)

for(auto it:mapper){
    if (it.second == 1)
    {
        return it.first;
    }

    //  how many elements were there in the og array n right so everything appeared twice or more so N/2 will be the size of the mapper and +1 of the that one thing that appeared just once

}
return -1;
}

int main(){
int a[7] = {1,1,2,2,3,4,4};

int n = mapversion(a,7);
cout <<n;

}