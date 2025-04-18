#include <bits/stdc++.h>




using namespace std;


string longestCommonPrefix(vector<string>& strs) {
 
        int size = strs.size();
        string prefix = strs[0];
        for (int i = 1; i < size; i++)
        {
            while (strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0,prefix.length() - 1);
            }
            if (prefix == "")
            {
                return prefix;
            }
            
        }
        return prefix;
        

}

int main(){

vector <string> strs = {"flower","flow","flight"};
string prefix = longestCommonPrefix(strs);
cout <<prefix;

}