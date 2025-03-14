#include<bits/stdc++.h>


using namespace std;


//  pairs

void explainPair(){

pair<int,int> p = {1,3};
cout <<p.first<<" "<<p.second<<endl;
pair<int,pair <int,int> > q = {1,{3,2}};
cout << q.first<<" " <<q.second.first<<" "<<q.second.second<<endl;

pair <int,int> array[] = {{1,2},{2,5},{6,7}};
//  storing pairs in index arrays
// cout <<array[1];Since array[1] is of type pair<int, int>, it cannot be printed directly
cout <<array[1].second;


}



int main(){

explainPair();


}