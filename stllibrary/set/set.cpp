#include <bits/stdc++.h>

using namespace std;



//  it is always uniqwue similar to python and real life

void explainSet()
{
set <int> st;

//  ecerything happens in log n value


//  it stores these things in a asorted order
st.insert(4);  //{4}
st.insert(22); // {4,22}
st.insert(2); //{ 2,4,22}
st.emplace(2);
//  this will not be stored as aset only stores inique calues

// it is not a linear container a tree is contained

auto it = st.find(2);
// it returns an iterator that gives the location of 3;
auto it = st.find(3);
//  if an element is not in the set it will always return set.end)()
// an iterator that points to  right after the ned 
st.erase(6);
auto it1 = st.find(4);
auto it2 = st.find(22);
st.erase(it1, it2);
for (auto i:st){
    cout << i << " ";
}



}