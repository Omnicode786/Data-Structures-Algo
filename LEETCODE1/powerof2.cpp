
// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

#include <iostream>
#include <cmath>

using namespace std;

int powerof2(int n){
    int answer = 1;


    // adding edgecase for values for 0 and -ve is simply
    //  is reluctant goes to 2 to the power 30 unnecesary


//  this is brute force methods as we are going to to the power 30 again and again and chekcing it 

    if (n <= 0)
    {
        return false;
    }
    
    for (int i = 0; i <= 30 ; i++)
    {
        if (answer == n)
        {
            return true;
        }
        if (answer < INT32_MAX / 2)
        {
            answer = answer*2;
        }
        
        
    }
    return false;
}


int main(){

    int n = 64;
  
    cout <<powerof2(n);





}