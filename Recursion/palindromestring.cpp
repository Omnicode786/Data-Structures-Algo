#include <iostream>

using namespace std;


void palindrome(string text,int pointer, int length){
    if (pointer >= length/2)
    {
    cout << "The string is a palindrome";

        return;
    }
    
    if (text[pointer] != text[length-pointer-1])
    {
        cout << "It is not a palindrome";
        return;    
    }
    palindrome(text,pointer+1,length);
}

int main()
{

palindrome("madam",0,5);


}