#include <bits/stdc++.h>

using namespace std;

// 1.transpose
// 2.reverse3.diagonals will be at the same place 

// swap with [0][1] = [1][0] and vice versa 

void rotateImage(vector<vector<int>>& matrix){
    int n = matrix.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
    
}
int main(){

    vector<vector<int>> matrix = {{2,3,4},{5,6,7},{10,9,4}};
    int n = matrix.size();
    rotateImage(matrix);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    
}

// no extra space out tc completes in n/2 + n

}