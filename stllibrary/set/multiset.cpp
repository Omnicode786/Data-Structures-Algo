#include <bits/stdc++.h>

using namespace std;



//  it is always uniqwue similar to python and real life

void explainSet()
{
multiset <int> ms;

ms.insert(1);
ms.insert(1);
ms.insert(1);
ms.insert(1);
//  this only obeys sorted rule


int ct = ms.count(1);
cout <<ct <<endl;
ms.erase(1);
//  this will erase everthing one there is in the set


// ms.erase(ms.find(1),( ms.find(1)+2));

//  correct way
ms.erase(ms.find(1),(next(ms.find(1), 2)));
//  this will go till 2 steps ahead and remove the one


}