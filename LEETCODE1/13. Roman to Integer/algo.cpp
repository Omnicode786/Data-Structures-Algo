#include <bits/stdc++.h>
using namespace std;

int roman2int(string s){

    unordered_map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
int integer = 0;
int size= s.length();
    for (int i = 0; i < size; i++)
    {
        int current = roman[s[i]];

        
        if (current < roman[s[i+1]] && i+1 < size)
        {
            integer -= current;
        }
        else{
            integer += current;
        }
        
    }
    return integer;


}