#include <bits/stdc++.h> 
using namespace std;


int find(vector<int>&nums){

int n = nums.size();
int count = 0;
for (int i = 0; i < n; i++)
{
    int noofdigit;
    int num = nums[i];
    while(num != 0){
        noofdigit = num%10;
        num /= 10;
    }
    if (noofdigit % 2 == 0) count++;
}

return count;
}

int main(){

    vector <int> arr = {22,333,444,55,64,3};
    int n = find(arr);
    cout <<n;
}