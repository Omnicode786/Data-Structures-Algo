#include <iostream>
#include <vector>
using namespace std;


vector<int> genrateRow(int row){
    vector <int> answer;
int ans = 1;

answer.push_back(ans);

    for (int col = 1; col < row; col++)
    {
        //  col cannot be EQUAL TO row
         ans = (ans*((row-col)) / col);
        answer.push_back(ans);
    }
return answer;
}

vector<vector<int>> GeneratePAscal(int n){
    int rows = n;
    vector<vector<int>> Pascal;
    for (int row = 1; row <= rows; row++)
    {
        Pascal.push_back(genrateRow(row));
    }
    return Pascal;
}


int main(){
int rows = 6; 
int ans = 1;

// for (int row = 1; row <= rows; row++)
// {
//     for (int col = 1; col <= row; col++)
//     {
//         cout <<ans<< " ";
     
//         if (col < row)    ans = (ans*((row-col)) / col);
//     }
//     cout<<endl;
// }


    int n = 6;
    vector<vector<int>> triangle = GeneratePAscal(n);

    for (auto row : triangle) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;





}