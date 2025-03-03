#include <iostream>
using namespace std;

int main(){
    
    int n = 49;

    // if (n&1 == 0)
    // the issue is in operator precidence asa == has higher precident
    // so
    // if (n& (1  == 0))
    // it becomes like this
    // so always else block runs

    if ((n&1) == 0)

    {
        cout <<"The number is even"<<endl;

    }
    else{
        cout <<"The number is odd"<<endl;

    }

    


}