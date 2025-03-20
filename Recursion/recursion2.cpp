#include <iostream>

using namespace std;


void print (int start, int end){
    if (start > end)
    {
        return;
    }
    
    cout << start;
    print(start+1,end);


}

int main()
{

    print(1,10);
}