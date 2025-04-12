#include <iostream>

using namespace std;


void addminus1row(int **arr,int i,int n){
for (int j = 0; j < n; j++)
{
    if (arr[i][j] != 0)
    {
        arr[i][j] = -1;
    }
    
}

}

void addminus1col(int **arr,int j,int m){
    for (int i = 0; i < m; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
        
    }
    
    }

void add0s(int **arr,int m,int n){



    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                addminus1row(arr,i,n);
                addminus1col(arr,j,m);
            }
            
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
            
        }
        
    }
    

}

int main(){
    int m = 3, n = 3;
    int** arr = new int*[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    // Initialize the array
    int temp[3][3] = {{1,0,2},{3,5,0},{2,4,5}};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[i][j];
        }
    }
    add0s(arr,3,3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

}