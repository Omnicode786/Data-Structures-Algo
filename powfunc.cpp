#include <iostream>

using namespace std;


int pow(int base, int power){
    int answer = 1;
    for (int i = 1; i <= power; i++)
    {
        // edge case handled**
        if (answer > INT32_MAX/base)
        {
            return 404;
        }
        //  this is redundant as we already did the check above if (answer < INT32_MAX/base)
         answer *= base;
        
    }
    
    return answer;


}


int main(){

    cout << pow(9,12);


}