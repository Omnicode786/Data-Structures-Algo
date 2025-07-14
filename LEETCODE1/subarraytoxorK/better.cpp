#include <bits/stdc++.h> 

using namespace std;


int xorsubarray(vector <int> nums, int n, int k){

    int count = 0 ;
    vector<int> xorredtok ;
for (int i = 0; i < n; i++)
{
    int ans = 0;

    for (int j = i; j < n; j++)
    {
        ans = ans ^ nums[j];
        if (ans == k)
        {
            cout <<"[";
          cout <<i<<" ";
          cout <<j<<" ]";
            count++;
        }
        
    }
    
}
cout <<endl;

return count;


}

int main()
{


    vector<int> list = {1,2,3,4,5,6};


        cout << xorsubarray(list, 6, 3);
    
}