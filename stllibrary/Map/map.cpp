#include <bits/stdc++.h>

using namespace std;


//  map stores in a value key pair

//  it can be any data type
void explainMap()
{
map <int, int> mpp;
//  the first is key and the other one is value
map <int,pair<int,int>> mpp1;
//  here we have one key which has two value pair
map <pair<int,int>, int> mpp2;
//  here we have two keys pair which have one value


//  map stores unique keys and in sorted order


mpp[1] = 2;
mpp.insert({4,3});
// mpp.emplace(1,3);
//  the above will not be stored as keys have to be unique
mpp.emplace(2,3);
// 2,3 will be above 4,3
//  it goes to the specific data structure based on the amount of keys value pairs given
cout << "Contents of mpp (sorted by keys):\n";
for (auto it : mpp)
{
    cout << "Key: " << it.first << ", Value: " << it.second << endl;
}


//  now for 1 key 2 pair value map

mpp1[5] = {9,0};
mpp1.insert({1,{2,4}});
// 1 is key of 2 and value 
mpp1.emplace(3, make_pair(2,1)); 
for (auto it : mpp1)
{
    cout << "Key: " << it.first << ", Value 1: " << it.second.first<< ", Value 2: " << it.second.second << endl;
}


//  now for 2 keys and one value

mpp2[{1,4}] = 5;
mpp2.insert({{2,3},7});
mpp2.emplace(make_pair(8,6),33);
for (auto it : mpp2)
{
    cout << "Key 1: " << it.first.first << " Key 2: " << it.first.second<< ", Value: " << it.second << endl;
}


//  to find the address use find value and it gives you the iterator to the key for just key and value
//  iterator.forst/second

//  if it nothing then it points to after the map


}
int main()
{
explainMap();


}