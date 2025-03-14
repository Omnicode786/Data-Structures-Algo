#include <bits/stdc++.h>


using namespace std;


void explainVector()
{

vector <int> beast;

beast.push_back(2);
//  pushes the 2 into the empty container 
beast.emplace_back(4);
//  dynamically increases the size and adds two in the last
vector <pair<int,int>> vec;
//  here pair is of the data type vector and the apir data type also has two data types of int and we then have tehe vatiable name

vec.push_back({1,2});// have to give {}
vec.emplace_back(1,2);// dont

vector <int> u(5,100); //{100,100,100,100,100}
vector <int> y(5); 
//  if we do this then compiler will create 5 instances of u with garabage values
vector <int> z(u); 
//  thesee are a copt

//  in this we can copy the data of other things into your own
y = u; // this works as well

for (int i = 0; i < z.size(); i++)
{
    cout <<z[i]<<endl;
    cout <<y[i]<<endl;
    
}






}

int main(){

    explainVector();

}