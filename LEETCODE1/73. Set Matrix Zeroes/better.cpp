#include <iostream>

using namespace std;


void add0shashing(int **arr,int m,int n){
int row[m] = {0};
int col[n] = {0};
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i][j] == 0)
        {
            row[i] = 1;
            col[j] = 1;
        }
        
    }
    
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (row[i] == 1 || col[j] == 1)
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
    add0shashing(arr,m,n);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

}