#include <iostream>


using namespace std;


int main(){

    char  ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch = 'A' + i + j - 2;
            cout <<ch<<' ';
            
        }
        cout<<endl;
    }
    

}