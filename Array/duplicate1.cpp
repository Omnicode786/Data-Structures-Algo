#include <iostream>

using namespace std;


int duplicate(int array[], int size){
    int answer = 0;
    for (int i = 0; i < size; i++)
    {
        answer ^= array[i];
    }
    //  basically look meri jan ke tote 
    //  idhr when youre xoring everyone then we would get a number as these things are not unique
    // think of it like this {1,2,x,x,4} so now lets make it like this
    // {1,2,4,x,x} as xor is commutative
    //  now x^x becomes 0 so 1^2^4^0 = 1^2^4
    //  now the duplicate 3 or x is simply canceled out na 
    //  ab dekho


    for (int i = 1; i < size; i++)
    {
        //  yahan par hmare pas he 1^2^4
        // ab this basically becomes duplicate leaving the x element which was three here as the unique one
        // so xoring it with i as it is we know from 1 to n-1
        answer ^= i;
        //  we get the unique one which we know for our case is the duplicate infact
    }
    
   return answer;


}

int main(){

int array[] = {1,2,3,3,4};
//  the array is 1 to n-1 but just one elem is repeating

int size = sizeof(array) / sizeof(int);

cout <<duplicate(array, size);



}