//  list is another data type dynamic in nature



#include <bits/stdc++.h>
using namespace std;

void explainList(){

list<int> ls;

//  exactly similar to vecort it gives you front operations as well
//  push back emplace same

ls.push_back(5);
ls.emplace_back(10);
for( auto it:ls){
    cout << it <<" ";
}
cout<<endl;

ls.push_front(6);
//  directly pushes 6 at the end
for( auto it:ls){
    cout << it <<" ";
}
cout<<endl;
// insert function in a vector takes a lot of time vry costly
//  list is simply a doubly linked list and vector is singly linked list

//  all the rest functions are same to vectors


}

int main(){


    explainList();
}