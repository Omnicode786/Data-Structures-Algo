#include <iostream>


using namespace std;

void print(int n){

for (int i = 0; i < n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        char ch = 'E';
        ch -=j; 
        cout<<ch;
    }
    cout <<endl;
    
}




}

int main()
{

print(5);


}