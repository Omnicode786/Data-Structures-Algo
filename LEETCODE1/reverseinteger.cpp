#include <iostream>
using namespace std;


int reverse(int number){
    int answer = 0;
    for (int i = 0; number != 0; i++)
    {
        if (answer > INT32_MAX/10 || answer < INT32_MIN / 10)
        // If we check answer > INT32_MAX, it's already too late because answer has already overflowed.
        // thisis basically an exception case that we handled


        // Why / 10?
// Because we are about to multiply answer by 10, and we want to ensure that it won't exceed INT32_MAX.
// INT32_MAX = 2147483647, so INT32_MAX / 10 = 214748364.
// If answer is already greater than 214748364, then multiplying by 10 would push it past INT32_MAX.
        {
            return 0;
        }
        else {
            int digit = number % 10;
            answer = (answer*10) + digit;
            number = number / 10;
        }
        
        

    }
    return answer;
}


int main(){
    

 

    cout <<reverse(123);
    


}