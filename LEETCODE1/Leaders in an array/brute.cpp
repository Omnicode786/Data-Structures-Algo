#include <iostream>
#include <vector>
using namespace std;

vector <int> leader(int a[], int n){
vector <int> result;
bool leaderornot = true;
for (int i = 0; i < n; i++)
{
    leaderornot = true;
    for (int j = i+1; j < n; j++)
    {
        if (a[i] < a[j])
        {
            leaderornot = false;
            break;
        }
        

    }
    if (leaderornot)
    {
        result.push_back(a[i]);
    }
    
}
return result;



}



int main(){
int a[6] = {10,22,4,5,3,2};
vector <int> resulter = leader(a,6);
for (auto i:resulter){

cout <<i<<" ";

}


}