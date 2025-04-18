#include <bits/stdc++.h>

using namespace std;

bool Valid(string s){
    stack<char> stak;

    int size= s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            stak.push(s[i]);
        
        }
        else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
        {
            if (stak.empty()) return false;
            char top = stak.top();
            if (s[i] == '}' && top == '{' || s[i] == ']'&& top == '[' || s[i] == ')'&& top == '(')
            {
                stak.pop();
            }
            else return false;
            
        }
        
    }
    return stak.empty();


}


int main(){

string s  = "{([hello])}";
cout << Valid(s);

}