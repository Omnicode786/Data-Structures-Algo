#include <bits/stdc++.h>
using namespace std;
bool myfunc(int a[]){
    for(int i = 1; i<=2001; i++){
	if(a[i] && a[i]==a[i-1]){
//  now the a array is imply {1,2,3}
// here this simply means that the occurence of the numbers not the actual numbers themselves
// so now we are checking if they are same or not we are stargting from i = 1 then going to 2001 the max one
//  then chekc a[i] a[1] = 2 this will  do a truthy value since it is non zero it becomes 1(itself) then 
//  we are doing and with a[1] = a[1-1] = a[0] so simply 2 = 1 which not true so the condition will become false and will rreturn false
//  now for second iteration a[2] = 3 truthy check gives us 2 then a[2] == a[1] 3 = 2 which again is false
//  sow il give us in total true if it even one was similar then we would get return false


//  ai[i] does a truthy check
// When a[i] appears alone in a condition, it is treated as a boolean expression.

// If a[i] is non-zero, the condition evaluates to true.
// If a[i] is zero, the condition evaluates to false.


		return false;
	}
}
//  when no value same then true
return true;
}

int main(){
int arr[] = {1,2,3,2,3,3};
int a[2001]={};
//  all numberws are initialized to 0

for(auto n : arr) ++a[n+1000];

//  the above for loop is basically a range for loop it iterates over arr and stores each value in n
//  here ++ simply increments the value stored at that index

// Iteration 1: n = 1
// n + 1000 = 1 + 1000 = 1001
// a[1001]++ means:
// a[1001] was 0
// Now it becomes 1
// Iteration 2: n = 2
// n + 1000 = 2 + 1000 = 1002
// a[1002]++ means:
// a[1002] was 0
// Now it becomes 1
// Iteration 3: n = 3
// n + 1000 = 3 + 1000 = 1003
// a[1003]++ means:
// a[1003] was 0
// Now it becomes 1
// Iteration 4: n = 2 (again)
// n + 1000 = 1002
// a[1002]++ means:
// a[1002] was 1
// Now it becomes 2
// Iteration 5: n = 3 (again)
// n + 1000 = 1003
// a[1003]++ means:
// a[1003] was 1
// Now it becomes 2
// Iteration 6: n = 3 (again)
// n + 1000 = 1003
// a[1003]++ means:
// a[1003] was 2
// Now it becomes 3

sort(a, a+2001);



if(myfunc(a)) cout<<"true";
else cout<<"false"; 

}