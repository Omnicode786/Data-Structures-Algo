#include <iostream>

using namespace std;

int powerof2(int n)
{
    //  see the power of two are always in terms of 0 in the end like lets say 8 it is 1000
    //  2 it is 10 4 it is 100 16 it is 10000 so this see the pattern
    //  every single one has 0 in the end so if we subtract 1 from thuis this will flip all the bits
    //  like 10 will become 01 1000 will become 0111 so if we do and of it then we can easily do it and the answer will be 0
    
    //  EDGE CASE HANDLEING
    // if (n <= 0){
    //     return false;
    // }


    //  all the above can be done in one statement
    if (n > (INT32_MAX / 2 + 1)) {
        return false;
    }
    
    if ((n>0) &&  ((n & (n - 1)) == 0))
    {
        return true;
    }
    return false;
}

int main()
{

    cout << powerof2(20202020460);
}