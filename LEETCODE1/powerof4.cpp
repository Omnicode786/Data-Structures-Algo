
    // brute force
    #include <iostream>
    #include <cmath>


    using namespace std;


    bool powerof4(int n){
    int power4 = 1;

        if (n == 0 || n >= INT32_MAX/4)
        {
            return false;
        }
        
        if (power4 == n)
            {
                return true;
            }
        for (int i = 0; i <= 30; i++)
        {
            if (power4 == n)
            {
                return true;
            }
            if (power4 > INT32_MAX / 4)
            {
                break;
            }
            power4 *= 4;
            
        }
        return false;
    }


    int main(){

    cout <<powerof4(4294967296);




    }