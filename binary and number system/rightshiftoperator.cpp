// Right shifting is faster than division (/ 2) because it operates at the bit level, making it useful for optimizing performance.


// x >> 1 is faster than x / 2
// ✔ x >> 2 is faster than x / 4
// ✔ x >> 3 is faster than x / 8

#include <iostream>
using namespace std;

int main() {
    int n = 10;

    cout << "Original: " << n << endl;
    cout << "Right shift by 1: " << (n >> 1) << endl; // 10 / 2 = 5
    cout << "Right shift by 2: " << (n >> 2) << endl; // 10 / 4 = 2
    cout << "Right shift by 3: " << (n >> 3) << endl; // 10 / 8 = 1
    //  what is simply happening is that it is dividing it by 2^(>>m)
    //  it is simply shifitng the number by 1 place

    //  1010 0101 0010 0001 
    //  it adds a new insignificant 0 up in front


    return 0;
}
