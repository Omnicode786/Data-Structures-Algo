#include<iostream>
using namespace std;

void rotateImageorMatrix(int **arr,int**ans,int n){


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n-1-i] = arr[i][j];
        }
        
    }
    


}

int main(){

    int m = 3;
    int** arr = new int*[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[m];
    }

    // Initialize the array
    int temp1[3][3] = {{1,0,2},{3,5,0},{2,4,5}};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = temp1[i][j];
        }
    }
    int** ans = new int*[m];
    for (int i = 0; i < m; i++) {
        ans[i] = new int[m];
    }

    // Initialize the array
    int temp[3][3] = {{1,0,2},{3,5,0},{2,4,5}};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            ans[i][j] = temp[i][j];
        }
    }
    rotateImageorMatrix(arr,ans,m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j]<<" ";
        }
        cout <<endl;
        
    }
    

}