#include <bits/stdc++.h>


using namespace std;



void mainer()
{
//  whatver the data type that then

// datatype::iterator it = v.begin();
//  here it s the name whihc can beanything


vector<int> v = {1,2,4,5,4,2};
vector<int>::iterator it = v.begin();
//  v.begins it points to the specif memory
// it has the memory this is also contagious
cout <<*(it)<<endl;
it++;
cout <<*(it)<<endl;

vector<int>::iterator itend = v.end();
//  end points somewhere right after lets say from above vector it points towards right after 2
itend--;
cout <<*(itend)<<endl;


// vector<int>::iterator rit_end = v.rend();
//  reverse the orignal vector then give the biggining value of that new vector essentially it was previously the end 




// vector<int>::iterator rit = v.rbegin();
//  similarly reverses the array and now the beginning number is at the end so it points to that location
// it moves in the reverse way the pointer



cout <<v[0];
// cout <<v.back << " ";

cout <<endl;

for (auto it = v.begin(); it != v.end(); it++)
{
    cout <<*(it) <<" ";
}
cout <<endl;

//  int a = 5 auto a = 5 computer automatically says this is an integer and assigns it that value
v = {10,22,43,51,42,22};
//  we also have for each loop
for (auto it:v){
    cout <<it<<" ";
}

cout <<endl;

//  if we want to erase / delete the element
//  either the location

// eraese (starting add, end add)
//  where start is included and end is nto similar in how splicing in python works
v.erase(v.begin(), v.begin() + 2);
for (auto it:v){
    cout <<it<<" ";
}
cout <<endl;
//   we can also insert an element here or there
// v.insert(address, no of elements i want to inser,value)
v.insert(v.begin()+2,2,300);
for (auto it:v){
    cout <<it<<" ";
}

vector <int> copy(2,50); // creates two instances of 50 conitgiuous as a copt vector array
v.insert(v.begin(), copy.begin(), copy.end());

for (auto it:v){
    cout <<it<<" ";
}
cout <<endl;

v.pop_back();
// pops out the last element at the back
v.swap(copy);
//  now copy has the value of v and v has the value of copy
for (auto it:v){
    cout <<it<<" ";
}
cout<<endl;

for (auto it:copy){
    cout <<it<<" ";
}
}


int main(){



    mainer();
}