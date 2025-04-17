#include <bits/stdc++.h> 
using namespace std;


int lener (string s){
vector<int> vec(26,0);
int size = s.size();
    for (char ch:s){
        vec[tolower(ch) - 'a']++;
}
for (int i = 0; i < size; i++)
{
    if(vec[tolower(s[i])-'a'] == 1) return i;
}
return -1;


}
int main(){
int n = lener("loveleetcode");
cout<<n;


}