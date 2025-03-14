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

}


int main(){



    mainer();
}