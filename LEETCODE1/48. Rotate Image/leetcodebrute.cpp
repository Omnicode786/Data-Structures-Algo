#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
             int m = matrix.size();
           vector<vector<int>> arr(m, vector<int>(m));
             for (int i = 0; i < m; i++){
                for (int j = 0; j < m; j++){
                    arr[i][j] = matrix[i][j];
                }
             }
                  for (int i = 0; i < m; i++){
                for (int j = 0; j < m; j++){
                    matrix[j][m-1-i] = arr[i][j];
                }
    
                  }
             }
        
    };