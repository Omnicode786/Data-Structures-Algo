#include <iostream>

using namespace std;


int main(){
    char ch = 'A';
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            cout << ch;
            ch += 1;
        }
        cout <<endl;
        
    }
    


}