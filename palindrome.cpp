//  any number which on number is a palindrome

#include  <iostream>

using namespace std;

int main()
{
int number = 321;
int palindrome = number;
int reverse = 0;
while (number != 0)
{
    int digit = number % 10;
    reverse = (reverse*10) + digit;
    number /= 10;
}

cout <<reverse <<endl;

if (reverse == palindrome)
{
    cout << "The number is a palindrome";
}
else{
    cout <<"It is not a palindrome"<<endl;
}





}