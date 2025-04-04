#include <iostream>

using namespace std;

bool CheckStrPalindrome(string text)
{
    string cleaned = "";
    for (char ch : text)
    {

        if (isalnum(ch))
        {

            cleaned += tolower(ch);
        }
    }
        int n = cleaned.length();
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (cleaned[i] != cleaned[j])
            {
                return false;
            }
            i++;
            j--;
        }
    return true;
        
    }


int main()
{
    string text = "0P";
    cout << CheckStrPalindrome(text);
    
}