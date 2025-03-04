#include <iostream>
#include <cmath>


using namespace std;

int main(){

    // int n = 1010;
//  esentially here computer will treat it as binary form of somethiong something
 int n = 1010;

    int i = 0;
    int decimal = 0;
    while (n != 0)
    {
        // int bit = n & 1;
//  so here ham we will not take out bit but infact the digit
        int digit  = n % 10;
  
        if (digit == 1)
        {
         
            decimal += digit*pow(2,i);
           
        }
        n = n / 10;
        i++;
    }
    
cout << decimal<<endl;


}
