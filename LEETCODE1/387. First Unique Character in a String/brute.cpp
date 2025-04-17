#include <bits/stdc++.h>

using namespace std;


int firstunique(string s){
int len = s.size();
int ans = INT_MAX;
unordered_map <char,pair<int,int>> maper;

for (int i = 0; i < len; i++)
{
   if (maper.find(s[i]) != maper.end())
   {
    maper[s[i]].first++;
   }
   else{
    maper[s[i]] = {1,i};
   }
}

for (auto &entry:maper){
if(entry.second.first == 1){
ans = min(ans,entry.second.second);
}

}

return ans == INT_MAX ? 0 : ans;


}
int main(){


   int n =  firstunique("abcadf");
   cout << n;
}