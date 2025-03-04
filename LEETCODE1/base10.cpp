#include <iostream>

//  this is essentially 1's compliment


using namespace std;

int onescompliment(int n){
    if (!n){
        int m  = (~n) & 1;
        return m;
        //  or we could simply return 1
        
        
        // return 1;



    }

    int m = n;
    int mask = 0;
    for (int i = 0; m != 0; i++)
    {
         mask = mask << 1;
        mask = mask | 1;
        m = m >> 1;
       
    }
    int answer = ~n & mask;
    return answer;
}

int main(){

    int n = 0;
    //  handeling a case where n  = 0
  

    cout <<onescompliment(n);


}