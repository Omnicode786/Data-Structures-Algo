#include <iostream>
#include <cmath>
using namespace std;


int binary(int m){
    int binary = 0;
    for (int i = 0; m != 0; i++)
    {
        int bit = m & 1;

        binary += bit*pow(10,i);
        m = m >> 1; 

    }
    return binary;


}


int powerof2(int n){
    n = binary(n);
    int no = n;
    int digit = 0;
    for (int i = 0; no != 0; i++)
    {
        no = no/10;
        digit++;
    }
    cout <<digit<<endl;
    for (int i = 1; i <= digit; i++)
    {
        if (i == digit)
        {
            if (n == 1)
            {
                return true;
            }
            
        }
        cout <<n<<endl;
        n = n / 10;
    }
    return false;
    


}
//  ATLEAST YOU TRIED

int main(){

cout<<powerof2(5);


}