#include <bits/stdc++.h>


using namespace std;



void explainStack()
{
stack<int> stak;


stak.push(1); //{1}
stak.push(2); // {2,1}
stak.push(3); // {3,2,1}
stak.push(4); //{4,3,2,1}
stak.emplace(5); // {5,4,3,2,1}
//  it works on last in first out lifo
//  the guy who ent in last will come out first


//   .... this guy went in last in the stack but will come on top we cannot do indexing
//   ....
//   ....
//   ___

//  only funcitons main are push emplace and top
cout << stak.top() <<endl;
//  stack's top value will be printed but the value is still in the stack
stak.pop(); // now the element which was at the top will  be deleted
cout << stak.size() <<endl;
//  now it wil print 4 elem as now it has 4cout
cout << stak.top() <<endl;

cout << stak.empty();
cout << stak.top() <<endl;

// the answer wil be 0 or false 
stack <int> stak2;
stak2.swap(stak);
cout << stak.top() <<endl;

//  complexity wise in stack complexity is bigO (1)
//  meaning it is in constant time



}

int main()
{


explainStack();
}