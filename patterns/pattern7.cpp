#include <iostream>

using namespace std;


int main(){
    for (int row = 1; row <= 3; row++)
    {
        char ch = 'A';
        for (int col = 1; col <= 3; col++)
        {   
            //  do the diagram method to find the formula
            ch = 'A' + row + col - 2;
            cout << ch;
            ch += 1;
        }
        cout <<endl;
        
    }
    


}