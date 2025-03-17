#include <bits/stdc++.h>


using namespace std;
bool compar(pair<int, int> p1, pair<int, int> p2)
{
if(p1.second < p2.second) return true;
if(p1.second > p2.second) return false;
//  when the the second value pair are equal then no need
if(p1.first > p2.first) return true;
return false ;

// Comparator tells sort() whether to swap elements or not.
// Returning true means "keep the order", false means "swap them".
// For pairs where second values are equal, we sort by first value in descending order.


}

void explainExtra()
{
vector <int> nums = {1,3,2,5,4,8,7,6,99,9};

//  now sort function has starting address and end address
sort(nums.begin()+4, nums.begin()+8);
//  only sorts after the given address and till the ending address

for (int it:nums)
{

cout << it << " ";
}

//  if i want to sort in a decending order
sort(nums.begin(),nums.end(), greater<int>());

//  this is basically like a comparitor



for (int it:nums)
{

cout << it << " ";
}



pair<int, int> a[] = {{1,2},{2,1},{4,1}};
//  sort it according to second elemen
//  if second element is same then sort accoriding to the first element but now in decreasing

//  for this we make our own comparitor


sort(a,a+3,compar);

cout << "Sorted pairs: ";
for (auto p : a) {
    cout << "{" << p.first << "," << p.second << "} ";
}
cout << endl;
}




int main()
{

explainExtra();

}