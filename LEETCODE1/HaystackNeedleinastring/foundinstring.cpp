#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;



int loopmine(string haystack, string needle){
    int length1 = haystack.size();
    int length2 = needle.size();
     for (int i = 0; i <= length1 - length2; i++){
        int j;
        for (j = 0; j < length2; j++)
        {
            if (haystack[i+j] != needle[j])
            {
                break;
            }
            
        }
        if (j == length2)
        {
            return i;
        }
        
        
     }
     return -1;
    }

    int efficient(string haystack, string needle){
        int lenght1 = haystack.length();
        int length2 = needle.length();
        for (int i = 0; i <= lenght1 - length2; i++)
        {
            if (haystack.substr(i,length2) == needle)
            {
                return i;
            }
            
        }
        return 0;
        


    }


    int main()
    {
        string haystack = "hello";
        string needle = "hell";
        int starter = loopmine(haystack,needle);
        cout << starter <<endl;
        int lenght2 = needle.length();
        for (int i = starter; i < starter + lenght2; i++)
        {
            cout << haystack[i];
        }
        string haystack2 = "sadbutsad";
        string needl2 = "ad";
        cout <<endl;
        int lenght22 = needl2.length();
        int starter2 = efficient(haystack2,needl2);
        cout << starter2 <<endl;
        for (int i = starter2; i < starter2 + lenght22; i++)
        {
            cout << haystack2[i];
        }
        
    }