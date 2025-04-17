#include <bits/stdc++.h>

using namespace std;


int maxSubstring(string text){
    int len = text.size();
    int maxlen = INT_MIN;
    for (int i = 0; i < len; i++)
    {
    set<char> check;

        for (int j = i; j < len; j++)
        {
            if (check.find(text[j]) != check.end())
            {
                break;;
            }
            
        check.insert(text[j]);
            maxlen = max(maxlen,j-i + 1);
        }
        
    }
    
return maxlen;

}

int main(){
int n = maxSubstring("bbbb");
cout<<n;


}