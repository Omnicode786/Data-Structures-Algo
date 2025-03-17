#include <bits/stdc++.h>


using namespace std;


void explainPriorQueue()
{
//  it worlks on fifo first in first out
//  goes in firt comes out first

// a line / queue

//  this max pq is maximum heap

// push logn  top o(1) pop logn 



priority_queue <int> pq;

//  this is still same as normal queue
//  only one difference is that the largest value will be first always

pq.push(4); // {4}
pq.push(2); // {4,2}
pq.push(9); // {9,4,2}
pq.push(2); // {9,4,3,2}

cout <<pq.top(); // 9
//  the data is not stored in a linear fasion inthis
pq.pop(); //  the top most element is poped
cout << pq.top();

//  what if i want a priority queue that stores min at the top


//  this min pq is minimum heap


priority_queue<int, vector<int>, greater<int>> pqm;

//  now the smallest is int the 
pqm.push(55);// {55}
pqm.push(3); // {3,55}
pqm.push(10); //3,10,55
pqm.push(2); // 2,3,10,55
// the minimum entered whenever it will make it  that top nonethe less



//  all operationsin O(1)

}


int main()
{
explainPriorQueue();
}