#include <iostream>


using namespace std;

void print(int n){

for (int i = 0; i < n; i++)
{
    char ch = 'E';
    ch -= i;
    for (int j = 0; j <= i; j++)
    {
        cout<<ch;
        ch++; 
    }
    cout <<endl;
    
}




}

int main()
{

print(5);


}