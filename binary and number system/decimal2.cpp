#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int n = 1010;
    int i = 0;
    int decimal = 0;
    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
        
            decimal += bit*pow(2,i);
           
        }
        n = n >> 1;
        i++;
    }
    
cout << decimal<<endl;


}
