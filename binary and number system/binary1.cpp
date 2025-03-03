#include <iostream>

#include <math.h>


using namespace std;


int main(){

    int n = 6;
    float answer = 0;
//  used float for precission erors


    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;
        //  essentially what happens is
        // 110 & 001
        //  just checks the last one bit so 0&1 = 0
        // if returns 0 then it means even and otherwise odd
        // now we have the last bit


        answer += (bit)*pow(10,i); 
        //  we simply have the bit we are doing this so we can get the unit ten thousand thing right
        n = n >> 1;
        // as above we got the 0 bit and now it shifts to 011 from 110 so now
        //  the bit wil become
        // 011 & 001 so now it will be 1&1 which will be 1 so now bit has the second bit from the binary number
    }
    
cout <<answer;




}