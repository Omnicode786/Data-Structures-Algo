#include <iostream>
using namespace std;

#include <chrono>
 using namespace chrono;


int fact (int n){
if (n == 0 || n == 1)
{
    return 1;
}
return n*fact(n-1);
}



int PascalTriangle(int row, int col){
int n = row;
int r = col;
int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;


}
int PascalTriangle1(int row,int col){
    double nCr = 1;
    for (int i = col; i >= 1; i--)
    {
        nCr *= (double)row/i;
        row--;

//  here we are having a issue in precision as interger thingi

    }
    return nCr;


}
int PascalTriangle2(int row,int col){
    int result = 1;
    if (col > row) return -1;
    if (col == 0 || col == row) return 1;
    for (int i = 1; i <= col; i++)
    {
        result *= (row-i+1) / i;
    }
    
    return result;

}



int main(){

    int row = 7, col = 2;  // test with a slightly bigger size

    // Factorial method
    auto start1 = high_resolution_clock::now();
    int result1 = PascalTriangle(row, col);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(end1 - start1);

    // Double method
    auto start2 = high_resolution_clock::now();
    double result2 = PascalTriangle1(row, col);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(end2 - start2);

    // Integer-safe method
    auto start3 = high_resolution_clock::now();
    int result3 = PascalTriangle2(row, col);
    auto end3 = high_resolution_clock::now();
    auto duration3 = duration_cast<nanoseconds>(end3 - start3);

    cout << "PascalTriangle (with factorials): " << result1 
         << " | Time: " << duration1.count() << " ns" << endl;

    cout << "PascalTriangle1 (double): " << result2 
         << " | Time: " << duration2.count() << " ns" << endl;

    cout << "PascalTriangle2 (int optimized): " << result3 
         << " | Time: " << duration3.count() << " ns" << endl;

         for (int i = 0; i < row; i++) {
            // Print spaces for formatting
            for (int s = 0; s < row - i - 1; s++) {
                cout << "  ";
            }
        
            for (int c = 0; c <= i; c++) {
                cout << PascalTriangle2(i, c) << "   ";
            }
            cout << endl;
        }
         
         




         return 0;



}


