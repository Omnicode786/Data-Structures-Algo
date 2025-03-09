#include <iostream>


using namespace std;



int unique(int arr[], int size){
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
    //  simply to put it xor is commutative so any number same number xor with it will give answer 0 then 0 ^ with the unique number will give us that number

    }
    // iterations
    // ans = 0^1 = 1
    // ans = 1^1 = 0
    // ans = 0^2 = 2
    // ans = 2^3 = (10^11) = 01 = 1
    // ans = 1^3 = (01^11) = 10 = 2
    // ans = 2^4 = (10^100) = 6 (110) 010 100 = 110
    // ans = 6^4 = (110^100) 010 = 2

    return unique;

}


int main(){
int array[] = {1,1,2,3,3,4,4};
int size = sizeof(array) / sizeof(int);
cout<<unique(array,size);


}