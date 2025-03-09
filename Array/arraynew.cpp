#include <iostream>

using namespace std;


int main(){



    //  this way itt innitaializes all elements of the array to the given value
int array[10];
fill(begin(array), end(array), 4);


    for (int i = 0; i < 10; i++)
    {
        cout << array[i]<<endl;
    }
    

}