#include <iostream>
#include <math.h>

using namespace std;


int main(){

    int n = 128;
    string bin = "";

    for (n = n;n > 0;)
    {
        
        bin += to_string(n % 2);
        n = n / 2;
    
    }
    
    cout <<bin;
   
    int length = bin.length();
    for (int i = 0; i < length / 2; i++)
    {
      
        
            char temp = ' ';
            temp = bin[i];
            bin[i] = bin[length - i -1];
            bin[length - i -1] = temp; 
        
        
    }
 
    cout <<endl;
    cout<<bin;
    



}