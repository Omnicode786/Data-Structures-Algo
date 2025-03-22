#include <iostream>
#include <algorithm>


using namespace std;


int main()

{
int array[12] = {1,2,1,3,3,4,5,6,44,44,44,44};
cout << "Maximum value: " << *max_element(begin(array), end(array)) << endl;
// max_element(begin(array), end(array)) returns an iterator to the maximum element.
// * is used to dereference it and get the actual value.
int max  = *max_element(begin(array), end(array));
int hash[max + 1] = {0};

//  try and use the maximum number in the memory


for (int i = 0; i < 12; i++)
{
    hash[array[i]]++;
}
cout<<hash[44];



}