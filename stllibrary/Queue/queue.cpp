#include <bits/stdc++.h>


using namespace std;


void explainQueue()
{
//  it worlks on fifo first in first out
//  goes in firt comes out first

// a line / queue
queue <int> q;
q.push(1); // 1 will be at top
q.push(2);
q.push(4);
q.back() += 5;
//  this simply adds the 5 element to the elemetn at the back which is 4 here
cout <<q.back() <<endl;
cout <<q.front() <<endl;
q.pop();
//  deletes the first in guy
cout <<q.front() <<endl;


//  all operationsin O(1)

}


int main()
{

}