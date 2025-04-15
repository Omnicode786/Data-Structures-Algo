#include <bits/stdc++.h>

using namespace std;

bool Check(vector<int> nums){

unordered_set<int> set1;
for(auto num:nums){
    if (set1.count(num)) return true;

//     count(num) function:

// The count() function checks how many times the value num appears in the set seen. Since unordered_set doesn't allow duplicates, it will return:

// 0 if num is not in the set.

// 1 if num is in the set.

// So, seen.count(num) will return:

// 1 if num is already in the set seen (indicating that the number is a duplicate).

// 0 if num is not in the set seen (indicating that the number is not a duplicate).
    set1.insert(num);
}
return false;
}

int main(){
    
}