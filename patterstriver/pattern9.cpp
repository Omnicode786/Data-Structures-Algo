#include<iostream>

using namespace std;


void printrightupp(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<" *";
        }
        cout <<endl;
        
    }
}
void printlowerright(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            cout <<" *";
        }
        cout <<endl;
        
    }
}


int main()
{
  
 printrightupp(5);
 printlowerright(5); 

    



}