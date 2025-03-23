#include <bits/stdc++.h>
using namespace std;
unordered_set<int> visited;

bool isHappy(int n) {
    if (n == 1) return  true;
    if (visited.find(n) != visited.end()) return false;
    visited.insert(n);
    int sum = 0;
    while (n > 0){
        int digit = n%10;
        sum+= digit*digit;
        n /= 10;
    
    }
    
return isHappy(sum);;
}

int main()
{
cout << isHappy(2);


}