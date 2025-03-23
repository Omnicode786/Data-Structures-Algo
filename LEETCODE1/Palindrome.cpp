#include <iostream>
using namespace std;




bool isPalindrome(int x) {
    if (x < 0) return false;
    int reverse = 0;
    int palindrome = x;
    while (x != 0){
        int digit = x % 10;
        if (reverse < INT_MAX/10) reverse = (reverse*10) + digit; 
        x /= 10;
    }
    if (reverse == palindrome) return true;
    else return false;
}
int main()
{
    cout << isPalindrome(1234567899)<<endl;
    cout << isPalindrome(121)<<endl;
    cout << isPalindrome(10)<<endl;
    cout << isPalindrome(11311)<<endl;
    cout << isPalindrome(12121)<<endl;


}