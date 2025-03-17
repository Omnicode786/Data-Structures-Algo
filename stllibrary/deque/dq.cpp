//  very similar to list and vector





#include <bits/stdc++.h>
using namespace std;

void explainDeque(){

deque<int> dq;



dq.push_back(5);
dq.emplace_back(10);
for( auto it:dq){
    cout << it <<" ";
}
cout<<endl;

dq.push_front(6);

for( auto it:dq){
    cout << it <<" ";
}
cout<<endl;


//  all the rest functions are same to vectors and lists


}

int main(){


    explainDeque();
}